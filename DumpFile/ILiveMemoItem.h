//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ILiveMemoItem : NSObject
{
    _Bool _isAudio;
    _Bool _isCameraVideo;
    _Bool _isScreenVideo;
    _Bool _isMediaVideo;
    _Bool _hasRequestedView;
    NSString *_identifier;
}

@property(nonatomic) _Bool hasRequestedView; // @synthesize hasRequestedView=_hasRequestedView;
@property(nonatomic) _Bool isMediaVideo; // @synthesize isMediaVideo=_isMediaVideo;
@property(nonatomic) _Bool isScreenVideo; // @synthesize isScreenVideo=_isScreenVideo;
@property(nonatomic) _Bool isCameraVideo; // @synthesize isCameraVideo=_isCameraVideo;
@property(nonatomic) _Bool isAudio; // @synthesize isAudio=_isAudio;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;

@end

