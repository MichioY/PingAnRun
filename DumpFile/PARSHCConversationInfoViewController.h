//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseViewController.h"

#import "PARSHCConversationInfoViewControllerProtocol.h"
#import "PARSHCConversationMemberDataSource.h"
#import "PARSHCConversationMemberDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, PARSHCConversationInfoView, PARSHCConversationInfoViewPresenter;

@interface PARSHCConversationInfoViewController : PARSBaseViewController <UITableViewDelegate, UITableViewDataSource, PARSHCConversationMemberDataSource, PARSHCConversationMemberDelegate, PARSHCConversationInfoViewControllerProtocol>
{
    unsigned long long _type;
    unsigned long long _index;
    NSString *_socialCloudId;
    NSString *_ecoCircleId;
    NSArray *_memberList;
    PARSHCConversationInfoView *_mainView;
    PARSHCConversationInfoViewPresenter *_presenter;
}

@property(retain, nonatomic) PARSHCConversationInfoViewPresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) PARSHCConversationInfoView *mainView; // @synthesize mainView=_mainView;
@property(copy, nonatomic) NSArray *memberList; // @synthesize memberList=_memberList;
@property(copy, nonatomic) NSString *ecoCircleId; // @synthesize ecoCircleId=_ecoCircleId;
@property(copy, nonatomic) NSString *socialCloudId; // @synthesize socialCloudId=_socialCloudId;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (unsigned long long)getRole;
- (void)removeConversationDataIfNeed;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addMember:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteMember:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)loadMembers;
- (long long)numberOfMembers;
- (void)deleteBtnClick;
- (void)requestHCInfo;
- (void)loadView;
- (_Bool)isGroupChat;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSocialCloudId:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
