//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseUserHandler.h"

@class PARSCommentReportReasonProvider;

@interface PARSActivityCommentHandler : PARSBaseUserHandler
{
    PARSCommentReportReasonProvider *_provider;
}

@property(retain, nonatomic) PARSCommentReportReasonProvider *provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (void)reportCommentWithParmInfo:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)loadCachedReportReasonWithResult:(CDUnknownBlockType)arg1;
- (void)requestReportReasonWithResult:(CDUnknownBlockType)arg1;
- (void)clickPraiseWithParmInfo:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)queryCommentWithParmInfo:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)deleteCommentWithParmInfo:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)addOrReplyCommentWithCommentInfo:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)requestQiNiuUploadInfo:(CDUnknownBlockType)arg1;

@end
