//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CDVUserAgentUtil : NSObject
{
}

+ (void)setUserAgent:(id)arg1 lockToken:(long long)arg2;
+ (void)releaseLock:(long long *)arg1;
+ (void)acquireLock:(CDUnknownBlockType)arg1;
+ (void)onAppLocaleDidChange:(id)arg1;
+ (id)originalUserAgent;

@end
