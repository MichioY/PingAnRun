//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PAZQOPHttpTool : NSObject
{
}

+ (void)jPost:(id)arg1 params:(id)arg2 isJson:(_Bool)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (void)post:(id)arg1 params:(id)arg2 header:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (void)post:(id)arg1 params:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)get:(id)arg1 params:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (id)sharedURLSession;
+ (id)sharedHTTPSession_json;
+ (id)sharedHTTPSession;

@end
