//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSYYBaseUserCacheProvider.h"

@class NSString;

@interface PARSActivityDetailProvider : PARSYYBaseUserCacheProvider
{
    NSString *userId;
}

@property(retain, nonatomic) NSString *userId; // @synthesize userId;
- (void).cxx_destruct;
- (void)saveActivityInfo:(id)arg1;
- (id)queryActivityInfo;
- (void)updateDetailModelWithActivityId:(id)arg1 activityModel:(id)arg2;
- (id)queryModelWithActivityId:(id)arg1;
- (id)initWithUserId:(id)arg1;

@end
