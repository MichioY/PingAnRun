//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface BusinessJumpHandle : NSObject
{
    NSDate *_lastDate;
    NSString *_currentURL;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *currentURL; // @synthesize currentURL=_currentURL;
@property(retain, nonatomic) NSDate *lastDate; // @synthesize lastDate=_lastDate;
- (void).cxx_destruct;
- (void)loadPage:(id)arg1:(id)arg2:(id)arg3;
- (_Bool)__isClickRepeatedlyWithPage:(id)arg1 domain:(id)arg2;
- (void)forwardModule:(id)arg1:(id)arg2:(id)arg3:(id)arg4;
- (void)back:(id)arg1:(id)arg2:(id)arg3:(id)arg4:(id)arg5;
- (void)back:(id)arg1:(id)arg2:(id)arg3:(id)arg4;
- (void)back:(id)arg1:(id)arg2:(id)arg3;
- (void)back:(id)arg1:(id)arg2;
- (void)forwardInCurPage:(id)arg1:(id)arg2:(id)arg3:(id)arg4:(id)arg5:(id)arg6;
- (void)forwardInCurPage:(id)arg1:(id)arg2:(id)arg3:(id)arg4:(id)arg5;
- (void)forwardInCurPage:(id)arg1:(id)arg2:(id)arg3:(id)arg4;
- (void)forwardInCurPage:(id)arg1:(id)arg2:(id)arg3;
- (void)forwardInCurPage:(id)arg1:(id)arg2;
- (void)forwardToNewPage:(id)arg1:(id)arg2:(id)arg3:(id)arg4:(id)arg5:(id)arg6;
- (void)forwardToNewPage:(id)arg1:(id)arg2:(id)arg3:(id)arg4:(id)arg5;
- (void)forwardToNewPage:(id)arg1:(id)arg2:(id)arg3:(id)arg4;
- (void)forwardToNewPage:(id)arg1:(id)arg2:(id)arg3;

@end

