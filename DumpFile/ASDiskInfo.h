//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ASDiskInfo : NSObject
{
}

+ (id)formattedMemory:(unsigned long long)arg1;
+ (id)formatMemory:(long long)arg1;
+ (long long)longFreeDiskSpace;
+ (long long)longDiskSpace;
+ (id)usedDiskSpace:(_Bool)arg1;
+ (id)freeDiskSpace:(_Bool)arg1;
+ (id)diskSpace;

@end

