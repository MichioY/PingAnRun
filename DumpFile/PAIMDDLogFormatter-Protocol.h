//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PAIMDDLogMessage;

@protocol PAIMDDLogFormatter <NSObject>
- (NSString *)formatLogMessage:(PAIMDDLogMessage *)arg1;

@optional
- (void)willRemoveFromLogger:(id <PAIMDDLogger>)arg1;
- (void)didAddToLogger:(id <PAIMDDLogger>)arg1;
@end

