//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ILiveRoomRunTimeOption : NSObject
{
    _Bool _bgMode;
    _Bool _autoRequestView;
    CDUnknownBlockType _exceptionListener;
    NSString *_hostID;
}

+ (id)defaultRoomRunTimeOption;
@property(nonatomic) _Bool autoRequestView; // @synthesize autoRequestView=_autoRequestView;
@property(copy, nonatomic) NSString *hostID; // @synthesize hostID=_hostID;
@property(nonatomic) _Bool bgMode; // @synthesize bgMode=_bgMode;
@property(copy, nonatomic) CDUnknownBlockType exceptionListener; // @synthesize exceptionListener=_exceptionListener;
- (void).cxx_destruct;

@end
