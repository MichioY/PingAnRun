//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseResponse.h"

@class NSString;

@interface GetAgentInfoResponse : BaseResponse
{
    NSString *_flag;
}

+ (id)initWithProperties:(id)arg1;
@property(retain, nonatomic) NSString *flag; // @synthesize flag=_flag;
- (void).cxx_destruct;
- (_Bool)isOK;

@end
