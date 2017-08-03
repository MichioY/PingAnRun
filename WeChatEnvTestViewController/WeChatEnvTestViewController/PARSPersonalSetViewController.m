//
//  PARSPersonalSetViewController.m
//  WeChatEnvTestViewController
//
//  Created by SuperDry on 02/08/2017.
//  Copyright © 2017 Test. All rights reserved.
//

#import "PARSPersonalSetViewController.h"

@interface PARSPersonalSetViewController ()

@end

@implementation PARSPersonalSetViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    button.frame = CGRectMake(0, 0, 200, 200);
    button.backgroundColor = [UIColor lightGrayColor];
    [button setTitle:@"Run" forState:UIControlStateNormal];
    [button addTarget:self action:@selector(runSettingAction) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:button];
}

- (void)runSettingAction{
    UIViewController *vc = [UIViewController new];
    vc.title = @"平安Run数据设置";
    vc.view.backgroundColor = [UIColor redColor];
    [self presentViewController:vc animated:YES completion:nil];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
