//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ILiveChannelInfo;

@interface ILivePushOption : NSObject
{
    ILiveChannelInfo *_channelInfo;
    long long _encodeType;
    long long _recrodFileType;
}

@property(nonatomic) long long recrodFileType; // @synthesize recrodFileType=_recrodFileType;
@property(nonatomic) long long encodeType; // @synthesize encodeType=_encodeType;
@property(retain, nonatomic) ILiveChannelInfo *channelInfo; // @synthesize channelInfo=_channelInfo;
- (void).cxx_destruct;

@end
