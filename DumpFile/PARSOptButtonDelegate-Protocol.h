//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@protocol PARSOptButtonDelegate <NSObject>
- (NSString *)phoneNo;

@optional
- (void)endCount;
- (void)failToReqeustWithError:(NSError *)arg1;
- (void)beginRequest:(NSString *)arg1;
- (void)didPressBtn;
@end
