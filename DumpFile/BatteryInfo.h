//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSMutableCopying.h"

@class NSString;

@interface BatteryInfo : NSObject <NSMutableCopying>
{
    long long iid;
    NSString *powner;
    NSString *status;
    long long total;
}

@property(nonatomic) long long total; // @synthesize total;
@property(retain, nonatomic) NSString *status; // @synthesize status;
@property(retain, nonatomic) NSString *powner; // @synthesize powner;
@property(nonatomic) long long iid; // @synthesize iid;
- (void).cxx_destruct;
- (id)toBatteryDict;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

