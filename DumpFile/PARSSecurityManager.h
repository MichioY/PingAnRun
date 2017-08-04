//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PARSSecurityManager : NSObject
{
    _Bool _guardable;
}

+ (id)sharedManager;
@property(nonatomic, getter=isGuardable) _Bool guardable; // @synthesize guardable=_guardable;
- (_Bool)isRedirectedSystemPath;
- (_Bool)isInstalledJailBrokenSoftWare;
- (_Bool)isSandBoxBroken;
- (void)scanAllDylibs;
- (_Bool)isJailBroken;
- (id)init;

@end
