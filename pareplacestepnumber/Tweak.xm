#import <UIKit/UIViewController.h>
#import "PAReplaceRunData.h"
// #import "KKReplaceRunDataViewController.h"

// %hook PARSHealthWalkingTrackInfo
//
// - (unsigned long long)steps{
//   return 12000;
// }
// %end
//
// %hook PARSHealthCircleUploadPedometerRequest
//
// - (unsigned long long)totalSteps{
//   return 12001;
// }
// %end
//
// %hook PARSCircleRankInfo
//
// - (long long)walkingSteps{
//   return 12002;
// }
// %end
//
// %hook StepDayInfo
// - (long long)totalsteps{
//   return 12003;
// }
// %end
//
// %hook StepInfo
// - (int)stepts{
//   return 12004;
// }
// %end
//
// %hook PARSBaseInfo
//
// - (long long)iPhoneSteps{
//   return 12005;
// }
// %end
//
// %hook PARSHealthWalkProvider
// - (NSString *)currentTotalSteps{
//   return @"12006";
// }
// %end
//
// %hook PARSWalkingPedometerView
// - (long long )severStep{
//   return 12007;
// }
//
// - (long long )pedometerStep{
//   return 12008;
// }
// %end
//
// %hook PARSEightWalkingPedometerView
// - (long long )severStep{
//   return 12009;
// }
//
// - (long long )pedometerStep{
//   return 12010;
// }
// %end
//
// %hook PARSHealthBodyInfo
// - (long long )steps{
//   return 12011;
// }
// %end
//
// %hook PARSHealthCircleTrackPanel
// - (long long )stepsCount{
//   return 12012;
// }
// %end
//
// %hook PARSHealthBehaviorIndexOtherInfo
// - (double)totalScore{
//   return 12013;
// }
// %end
//
// %hook StepCounterService
// - (long long)latestStep{
//   return 12014;
// }
// %end
//
// // 我的记录
// // %hook PARSHealthHistoryRecord
// // - (NSString *)serverSteps{
// //   return @"12015";
// // }
// //
// // - (NSString *)steps{
// //   return @"12016";
// // }
// // %end
//
// %hook PARSHealthWalkRankModel
// - (NSString *)stepts{
//   return @"12017";
// }
//
// - (long long)foot{
//   return 12018;
// }
// %end
//
// %hook PARSHealthWalkRankingViewModel
// - (NSString *)lastTotalSteps{
//   return @"12019";
// }
//
// - (NSString *)lastAverageSteps{
//   return @"12020";
// }
//
// - (NSString *)currentAverageSteps{
//   return @"12021";
// }
//
// - (NSString *)currentTotalSteps{
//   return @"12022";
// }
// %end
//
//
// %hook PARSTrackPedometerHandler
// - (unsigned long long)lastStep{
//   return 12023;
// }
// %end

%hook PARSPersonalSetViewController
- (void)viewDidLoad{
  %orig;
  self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc] initWithTitle:@"Run设置" style:UIBarButtonItemStylePlain target:self action:@selector(runSettingAction)];

  // UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
  // button.frame = CGRectMake(0, 0, 200, 200);
  // button.backgroundColor = [UIColor lightGrayColor];
  // [button setTitle:@"Run" forState:UIControlStateNormal];
  // [button addTarget:self action:@selector(runSettingAction) forControlEvents:UIControlEventTouchUpInside];
  // [self.view addSubview:button];
}

%new
- (void)runSettingAction{
    KKReplaceRunDataViewController *vc = [[KKReplaceRunDataViewController alloc] init];
    [self.navigationController pushViewController:vc animated:YES];
    // [self presentViewController:vc animated:YES completion:nil];
}
%end

%hook PARSPedometerInfo
// - (long long)iPhoneSteps{
//   return 14664;
// }

- (long long)integratedSteps{
  return 14664;
}

- (long long)heartRate{
  return 110;
}
%end
