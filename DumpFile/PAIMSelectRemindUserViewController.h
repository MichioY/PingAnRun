//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PAIMTXBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UITableView;

@interface PAIMSelectRemindUserViewController : PAIMTXBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *groupMemberTable;
    NSMutableArray *friendArr;
    NSArray *_memberArr;
    id <PAIMMarkedUserDelegate> _delegate;
}

@property(nonatomic) __weak id <PAIMMarkedUserDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *memberArr; // @synthesize memberArr=_memberArr;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setExtraCellLineHidden:(id)arg1;
- (void)viewDidLoad;
- (id)processArrayOrderByA2Z:(id)arg1;
- (unsigned long long)indexOfSectionName:(id)arg1;
- (void)cancel;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
