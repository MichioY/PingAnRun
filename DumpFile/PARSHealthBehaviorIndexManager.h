//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PARSHealthBehaviorIndexHandler, PARSHealthBehaviorIndexOtherInfo;

@interface PARSHealthBehaviorIndexManager : NSObject
{
    PARSHealthBehaviorIndexHandler *_handler;
    PARSHealthBehaviorIndexOtherInfo *_otherInfo;
}

+ (id)sharedManager;
@property(retain, nonatomic) PARSHealthBehaviorIndexOtherInfo *otherInfo; // @synthesize otherInfo=_otherInfo;
@property(retain, nonatomic) PARSHealthBehaviorIndexHandler *handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)saveOtherInfo:(id)arg1;
- (id)fetchOtherInfo;
- (void)fetchHealthBehaviorIndexList:(_Bool)arg1 result:(CDUnknownBlockType)arg2;

@end
