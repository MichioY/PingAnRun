//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSRedPacketBaseRequest.h"

@class NSString, PARSMyRedPacketInfo;

@interface PARSRedPacketMyReceiveRequest : PARSRedPacketBaseRequest
{
    PARSMyRedPacketInfo *_myRedPacketInfo;
    NSString *_pageNo;
}

@property(copy, nonatomic) NSString *pageNo; // @synthesize pageNo=_pageNo;
@property(retain, nonatomic) PARSMyRedPacketInfo *myRedPacketInfo; // @synthesize myRedPacketInfo=_myRedPacketInfo;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (id)url;

@end
