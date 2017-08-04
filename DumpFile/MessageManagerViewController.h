//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "OpenSwitchDelegate.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UIPickerView, UITableView, UIView;

@interface MessageManagerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, OpenSwitchDelegate, UIPickerViewDataSource, UIPickerViewDelegate>
{
    UITableView *myTableView;
    NSMutableArray *_dataArr;
    _Bool isMessageAlertOpen;
    _Bool isMessageActivityOpen;
    _Bool isMessageTreasureOpen;
    _Bool isMessageHealthOpen;
    _Bool isMessageDontBotherMode;
    NSString *messageDontBotherStartTime;
    NSString *messageDontBotherEndTime;
    long long switchState;
    NSMutableArray *_dataPickerArr;
    UIView *blackbackgroundView;
    UIView *pickerSuperView;
    UIPickerView *myPickerView;
    NSString *selectedDate;
    NSString *selectedHour;
    NSString *selectedMinute;
    long long selectedCellRow;
}

- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)openSwitchWithMessageName:(id)arg1 WithBoolValue:(_Bool)arg2;
- (void)back;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)loadDataWithSwitchState:(long long)arg1;
- (void)loadDataBySwitchState;
- (void)hidePickerView;
- (void)showPickerView;
- (void)initPickerViewAndPickerData;
- (void)viewDidLoad;
- (void)dealloc;
- (void)confirmPicker:(id)arg1;
- (void)cancelPicker:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
