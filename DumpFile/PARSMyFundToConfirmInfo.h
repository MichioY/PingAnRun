//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@class NSString;

@interface PARSMyFundToConfirmInfo : PARSBaseInfo
{
    long long _confirmType;
    NSString *_content;
    NSString *_count;
}

@property(copy, nonatomic) NSString *count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long confirmType; // @synthesize confirmType=_confirmType;
- (void).cxx_destruct;

@end

