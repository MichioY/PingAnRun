//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSProtalBaseUserHTTPRequest.h"

@class NSArray;

@interface PARSMessageCenterNewsStateChangeRequest : PARSProtalBaseUserHTTPRequest
{
    NSArray *_leftMessageTypeArr;
    NSArray *_msgIdsArr;
}

@property(retain, nonatomic) NSArray *msgIdsArr; // @synthesize msgIdsArr=_msgIdsArr;
@property(retain, nonatomic) NSArray *leftMessageTypeArr; // @synthesize leftMessageTypeArr=_leftMessageTypeArr;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (id)url;
- (id)initWithUserId:(id)arg1 msgIdsArr:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
