//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ShareInfo, UIViewController;

@interface AdrHybridContainer : NSObject
{
    ShareInfo *_shareInfo;
    UIViewController *_superViewController;
}

+ (id)share;
@property(retain, nonatomic) UIViewController *superViewController; // @synthesize superViewController=_superViewController;
@property(retain, nonatomic) ShareInfo *shareInfo; // @synthesize shareInfo=_shareInfo;
- (void).cxx_destruct;
- (void)openDebugLog:(_Bool)arg1;

@end
