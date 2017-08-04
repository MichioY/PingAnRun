//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PARSDateUtils : NSObject
{
}

+ (id)defaultCalendar;
+ (id)defaultTimeZone;
+ (_Bool)isDate:(id)arg1 inDate:(id)arg2;
+ (_Bool)isDateInToday:(id)arg1;
+ (id)dayStringByDate:(id)arg1;
+ (id)yesterdayZeroDate;
+ (id)todayZeroDate;
+ (id)nowTimeString;
+ (long long)getDateTimeTOMilliSeconds:(id)arg1;
+ (id)yesterdayString;
+ (id)todayString;
+ (id)dateByString:(id)arg1;
+ (id)gmtDateFormatter:(id)arg1;
+ (id)dateFormatter:(id)arg1;
+ (id)dateTimeDifferenceWithStartDate:(id)arg1 endDate:(id)arg2;
+ (id)dateTimeDifferenceWithStartTime:(id)arg1 endTime:(id)arg2;
+ (id)dateFromMsgDetailString:(id)arg1;
+ (id)dateFromMsgTypeString:(id)arg1;
+ (id)defaultCache;
+ (_Bool)isInChina;

@end
