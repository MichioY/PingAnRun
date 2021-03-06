//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QAVChangeDelegate.h"
#import "QAVChangeRoleDelegate.h"

@class NSString;

@interface QAVChangeDelegateOnMainThread : NSObject <QAVChangeDelegate, QAVChangeRoleDelegate>
{
    id <QAVChangeDelegate> _avChangeDelegate;
    id <QAVChangeRoleDelegate> _avChangeRoleDelegate;
    _Bool _alwaysPostToMainThread;
}

@property _Bool alwaysPostToMainThread; // @synthesize alwaysPostToMainThread=_alwaysPostToMainThread;
- (void)OnChangeRoleDelegate:(int)arg1 WithErrinfo:(id)arg2;
- (void)OnChangeRoleDelegateSafe:(int)arg1 WithErrinfo:(id)arg2;
- (void)OnChangeAuthority:(int)arg1 WithErrinfo:(id)arg2;
- (void)OnChangeAuthoritySafe:(int)arg1 WithErrinfo:(id)arg2;
- (id)initWithRoleDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

