//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSData, NSURLRequest, NSURLResponse;

@interface PACachedResources : NSObject <NSCoding>
{
    NSData *_data;
    NSURLResponse *_response;
    NSURLRequest *_redirectRequest;
}

+ (id)logFileDateFormatter;
+ (id)logCachePath;
+ (id)logCachesPath;
+ (id)extraCachesPathForUrl:(id)arg1;
+ (id)extraCachesPath;
+ (id)cachePathForUrl:(id)arg1;
+ (id)cachePathForRequest:(id)arg1;
+ (id)cachePath;
+ (id)cacheFileNameForUrl:(id)arg1;
@property(retain, nonatomic) NSURLRequest *redirectRequest; // @synthesize redirectRequest=_redirectRequest;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
