//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSProtalBaseUserHTTPRequest.h"

@class NSArray, NSString;

@interface PARSLiveGroupListRequest : PARSProtalBaseUserHTTPRequest
{
    _Bool _isAgent;
    NSString *_liveId;
    NSArray *_groups;
}

@property(copy, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(nonatomic) _Bool isAgent; // @synthesize isAgent=_isAgent;
@property(copy, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (id)url;

@end

