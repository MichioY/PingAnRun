//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMSRqdNetRequest, IMSRqdRequestPackage, IMSRqdUserInfoPackage;

@interface IMSRqdSummaryInfoHandler : NSObject
{
    _Bool _uploading;
    IMSRqdNetRequest *_request;
    IMSRqdUserInfoPackage *_uploadingInfo;
    IMSRqdRequestPackage *_reqPkg;
    unsigned long long _retryTimes;
    CDUnknownBlockType _completion;
}

+ (id)sharedHandler;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) unsigned long long retryTimes; // @synthesize retryTimes=_retryTimes;
@property(retain, nonatomic) IMSRqdRequestPackage *reqPkg; // @synthesize reqPkg=_reqPkg;
@property(retain, nonatomic) IMSRqdUserInfoPackage *uploadingInfo; // @synthesize uploadingInfo=_uploadingInfo;
@property(retain, nonatomic) IMSRqdNetRequest *request; // @synthesize request=_request;
@property(nonatomic) _Bool uploading; // @synthesize uploading=_uploading;
- (void).cxx_destruct;
- (void)deleteInvalidSummaryInfos;
- (void)persistSummaryInfo:(id)arg1;
- (_Bool)cleanUserInfoData:(id)arg1;
- (void)restartUpload;
- (void)failWithResponse:(id)arg1 reqPkg:(id)arg2;
- (void)finishWithResponse:(id)arg1 reqPkg:(id)arg2;
- (id)generateNetRequest;
- (void)startRequest;
- (void)uploadInfo:(id)arg1;
- (id)allSummaryInfos;
- (void)startReport:(_Bool)arg1 success:(CDUnknownBlockType)arg2;

@end
