//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSString;

@protocol QiniuUploadDelegate <NSObject>
- (void)uploadFailed:(NSString *)arg1 error:(NSError *)arg2;
- (void)uploadSucceeded:(NSString *)arg1 ret:(NSDictionary *)arg2;

@optional
- (void)uploadProgressUpdated:(NSString *)arg1 percent:(float)arg2;
@end
