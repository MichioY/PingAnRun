//
//  ViewController.m
//  WeChatEnvTestViewController
//
//  Created by SuperDry on 02/08/2017.
//  Copyright © 2017 Test. All rights reserved.
//

#import "KKReplaceRunDataViewController.h"

typedef enum : NSUInteger {
    ModifyRunTypeSteps,
    ModifyRunTypeHeartRates,
} ModifyRunType;


static NSString *const replaceStepsTitle = @"修改步数";
static NSString *const replaceHeartRateTitle = @"修改心率";
static const NSInteger rowHeight = 60;

@interface KKReplaceRunDataViewController ()<UITableViewDelegate, UITableViewDataSource>
@property (nonatomic ,strong) UITableView *tableView;
@property (nonatomic ,copy) NSString *totalSteps;
@property (nonatomic ,copy) NSString *totalHeartRates;
@property (nonatomic ,assign) ModifyRunType runType;
@end

@implementation KKReplaceRunDataViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    self.view.backgroundColor = [UIColor groupTableViewBackgroundColor];
    [self.view addSubview:self.tableView];
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}



#pragma mark TableView Delegate;
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return 2;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"runSettingCell"];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleValue1 reuseIdentifier:@"runSettingCell"];
        cell.textLabel.textColor = [UIColor darkTextColor];
        cell.detailTextLabel.textColor = [UIColor lightGrayColor];
    }
    
    switch (indexPath.row) {
        case 0:
            cell.textLabel.text = replaceStepsTitle;
            cell.detailTextLabel.text = [NSString stringWithFormat:@"当前步数:%@", self.totalSteps] ;
            
            break;
        case 1:
            
            cell.textLabel.text = replaceHeartRateTitle;
            cell.detailTextLabel.text = [NSString stringWithFormat:@"当前心率:%@", self.totalHeartRates];

            break;
        default:
            break;
    }
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    
    [tableView deselectRowAtIndexPath:indexPath animated:NO];
    
    switch (indexPath.row) {
        case 0:
            
            [self setupAlertVCWithTitle:replaceStepsTitle message:@"请输入您要修改的步数" type:ModifyRunTypeSteps handler:^{
                #warning 需要处理
            }];
            break;
            
        default:
            
            [self setupAlertVCWithTitle:replaceStepsTitle message:@"请输入您要修改的心率" type:ModifyRunTypeHeartRates handler:^{
                #warning 需要处理
            }];

            break;
    }
    
}

- (void)setupAlertVCWithTitle:(NSString *)title message:(NSString *)message type:(ModifyRunType)type handler:(void (^)())handler{
    
    UIAlertController *alertVC =  [UIAlertController alertControllerWithTitle:title message:message
                                                               preferredStyle:UIAlertControllerStyleAlert];
    
    self.runType = type;
    
//    __weak typeof(self) weakSelf = self;
    [alertVC addTextFieldWithConfigurationHandler:^(UITextField * _Nonnull textField) {
        
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(handleTextFieldTextDidChangeNotification:) name:UITextFieldTextDidEndEditingNotification object:textField];

    }];
    
    [alertVC addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [alertVC addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:handler]];
    
    [self presentViewController:alertVC animated:YES completion:nil];
}

- (void)handleTextFieldTextDidChangeNotification:(NSNotification *)notification {
    UITextField *textField = notification.object;
    // Enforce a minimum length of >= 5 characters for secure text alerts.

    if (![self isNumberText:textField.text]) {
        
        [self showNumberWarningAlertVCWithMessage:@"只能输入纯数字"];
        return;
    }
    
    
    if (textField.text.integerValue < 0 || textField.text.integerValue > 30000) {
        
        [self showNumberWarningAlertVCWithMessage:@"请输入0~30000之间的数字"];

        return;
    }
    
    NSIndexPath *indexPath = [NSIndexPath indexPathForRow:self.runType inSection:0];
    if (self.runType == ModifyRunTypeSteps) {
        
        self.totalSteps = textField.text;
        
        [self.tableView reloadRowsAtIndexPaths:@[indexPath] withRowAnimation:UITableViewRowAnimationNone];
    }else{
        
        self.totalHeartRates = textField.text;
        [self.tableView reloadRowsAtIndexPaths:@[indexPath] withRowAnimation:UITableViewRowAnimationNone];
        
    }

}
        
- (void)showNumberWarningAlertVCWithMessage:(NSString *)message{
 
    UIAlertController *vc = [UIAlertController alertControllerWithTitle:@"小Tips" message:message preferredStyle:UIAlertControllerStyleAlert];
    [vc addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleCancel handler:nil]];
    [self presentViewController:vc animated:YES completion:nil];
}

- (BOOL)isNumberText:(NSString *)str{
    NSString * regex  = @"^[0-9]*$";
    NSPredicate * pred  = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", regex];
    BOOL isMatch   = [pred evaluateWithObject:str];
    if (isMatch) {
        return YES;
    }else{
        return NO; 
    }
    
}
#pragma mark Lazy
- (UITableView *)tableView{
    if (!_tableView) {
        UITableView * tableView = [[UITableView alloc]initWithFrame:CGRectMake(0, 20, self.view.frame.size.width, self.view.frame.size.height) style:UITableViewStyleGrouped];
        [self.view insertSubview:tableView atIndex:0];
        tableView.separatorStyle = UITableViewCellSeparatorStyleSingleLine;
        tableView.dataSource = self;
        tableView.delegate = self;
        tableView.tableFooterView = [[UIView alloc]init];
        tableView.rowHeight = rowHeight;
        tableView.backgroundColor = [UIColor clearColor];
        
        _tableView = tableView;

    }
    return _tableView;
}

- (NSString *)totalSteps{
    if (!_totalSteps) {
        _totalSteps = @"0";
    }
    return _totalSteps;
}

- (NSString *)totalHeartRates{
    if (!_totalHeartRates) {
        _totalHeartRates = @"0";
    }
    return _totalHeartRates;
}
@end
