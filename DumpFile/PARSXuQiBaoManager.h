//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PARSXuQiBaoHandler;

@interface PARSXuQiBaoManager : NSObject
{
    PARSXuQiBaoHandler *_xuQiBaoHandler;
}

+ (id)shareManager;
@property(retain, nonatomic) PARSXuQiBaoHandler *xuQiBaoHandler; // @synthesize xuQiBaoHandler=_xuQiBaoHandler;
- (void).cxx_destruct;
- (void)deleteAllXuqiBaoInfos;
- (void)fetchXuQiBaoInfosWithResultBlock:(CDUnknownBlockType)arg1;
- (void)fetchXuQiBaoInfoWithRefresh:(_Bool)arg1 pageSize:(long long)arg2 pageNo:(long long)arg3 resultBlock:(CDUnknownBlockType)arg4;

@end
