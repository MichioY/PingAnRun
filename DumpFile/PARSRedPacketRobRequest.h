//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSRedPacketBaseRequest.h"

@class NSString;

@interface PARSRedPacketRobRequest : PARSRedPacketBaseRequest
{
    _Bool _isOutDate;
    NSString *_redPacketId;
}

@property(nonatomic) _Bool isOutDate; // @synthesize isOutDate=_isOutDate;
@property(copy, nonatomic) NSString *redPacketId; // @synthesize redPacketId=_redPacketId;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (id)url;

@end
