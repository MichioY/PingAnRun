//
//  ViewController.m
//  WeChatEnvTestViewController
//
//  Created by SuperDry on 02/08/2017.
//  Copyright © 2017 Test. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()<UITableViewDelegate, UITableViewDataSource>
@property (nonatomic ,strong) UITableView *tableView;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    
    
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
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleValue2 reuseIdentifier:@"runSettingCell"];
    }
    
    switch (indexPath.row) {
        case 0:
            cell.textLabel.text = @"修改步数";
            cell.detailTextLabel.text = @"当前步数xxx";
            
            break;
        case 1:
            
            cell.textLabel.text = @"修改心率";
            cell.detailTextLabel.text = @"当前心率xxx";

            break;
        default:
            break;
    }
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    
    
}
#pragma mark Lazy
- (UITableView *)tableView{
    if (!_tableView) {
        UITableView * tableView = [[UITableView alloc]initWithFrame:CGRectZero style:UITableViewStylePlain];
        [self.view insertSubview:tableView atIndex:0];
        self.tableView = tableView;
        tableView.separatorStyle = UITableViewCellSeparatorStyleNone;
        tableView.dataSource = self;
        tableView.delegate = self;
        tableView.frame = self.view.frame;
        tableView.tableFooterView = [[UIView alloc]init];
        tableView.rowHeight = 95;
    }
    return _tableView;
}


@end
