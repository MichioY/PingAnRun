//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface AdrMessageCenterNetwork : NSObject
{
    NSMutableArray *_messageBackListArr;
    CDUnknownBlockType _requestCallBackInfo;
}

+ (id)copyWithZone:(struct _NSZone *)arg1;
+ (id)sharedAdrMessageCenterNetwork;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) CDUnknownBlockType requestCallBackInfo; // @synthesize requestCallBackInfo=_requestCallBackInfo;
- (void).cxx_destruct;
- (void)requestBackWithResult:(_Bool)arg1 messagelistArr:(id)arg2 messageType:(int)arg3;
- (void)requestMessageList:(_Bool)arg1 model:(id)arg2 publicStartTime:(id)arg3 publicEndTime:(id)arg4 publicPageNum:(id)arg5 privateStartTime:(id)arg6 privateEndTime:(id)arg7 privatePageNum:(id)arg8 requestSucess:(CDUnknownBlockType)arg9;
- (void)requestMessageList:(_Bool)arg1 requestSucess:(CDUnknownBlockType)arg2;

@end
