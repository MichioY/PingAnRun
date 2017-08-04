//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ILiveRoomIMManager : NSObject
{
    CDUnknownBlockType _defaultGenerateImGroupFunc;
    NSString *_imGroupId;
}

+ (id)getInstance;
@property(retain, nonatomic) NSString *imGroupId; // @synthesize imGroupId=_imGroupId;
@property(copy, nonatomic) CDUnknownBlockType defaultGenerateImGroupFunc; // @synthesize defaultGenerateImGroupFunc=_defaultGenerateImGroupFunc;
- (void).cxx_destruct;
- (void)releaseSrc;
- (id)getIMGroupId;
- (int)bindIMGroupId:(id)arg1;
- (void)sendGroupMessage:(id)arg1 succ:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)sendC2CMessage:(id)arg1 message:(id)arg2 succ:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)quitGroup:(id)arg1 succ:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)joinIMGroup:(id)arg1 succ:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)deleteIMGroup:(id)arg1 succ:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)createIMGroup:(id)arg1 option:(id)arg2 succ:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (id)init;

@end
