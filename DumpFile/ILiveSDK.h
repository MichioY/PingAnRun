//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TIMUserStatusListener.h"

@class NSString, QAVContext, TIMManager;

@interface ILiveSDK : NSObject <TIMUserStatusListener>
{
    int _appId;
    int _accountType;
    TIMManager *_imManager;
    QAVContext *_avContext;
    id <TIMUserStatusListener> _imUserStatusListener;
}

+ (id)getInstance;
@property(retain, nonatomic) id <TIMUserStatusListener> imUserStatusListener; // @synthesize imUserStatusListener=_imUserStatusListener;
@property(retain, nonatomic) QAVContext *avContext; // @synthesize avContext=_avContext;
@property(retain, nonatomic) TIMManager *imManager; // @synthesize imManager=_imManager;
@property(nonatomic) int accountType; // @synthesize accountType=_accountType;
@property(nonatomic) int appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (void)iLivelog:(long long)arg1 tag:(id)arg2 msg:(id)arg3;
- (void)logUpload:(id)arg1 uploadResult:(CDUnknownBlockType)arg2;
- (void)onUserSigExpired;
- (void)onReConnFailed:(int)arg1 err:(id)arg2;
- (void)onForceOffline;
- (void)setRefreshListener:(id)arg1;
- (void)setConnListener:(id)arg1;
- (void)setUserStatusListener:(id)arg1;
- (id)getVersion;
- (id)getTIMManager;
- (id)getAVContext;
- (int)getAppId;
- (int)getAccountType;
- (int)initSdk:(int)arg1 accountType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

