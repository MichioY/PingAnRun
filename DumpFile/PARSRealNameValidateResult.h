//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@class PARSRealNameInfo;

@interface PARSRealNameValidateResult : PARSBaseInfo
{
    long long _status;
    PARSRealNameInfo *_realNameInfo;
}

+ (id)hasDoneRealNameValidatedWithInfo:(id)arg1;
+ (id)realNameValidateSuccessWithInfo:(id)arg1;
+ (id)cancelRealNameValidateWithInfo:(id)arg1;
@property(retain, nonatomic) PARSRealNameInfo *realNameInfo; // @synthesize realNameInfo=_realNameInfo;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;

@end
