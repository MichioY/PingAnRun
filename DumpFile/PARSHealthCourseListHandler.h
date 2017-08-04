//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseUserHandler.h"

@class PARSHealthCourseProvider;

@interface PARSHealthCourseListHandler : PARSBaseUserHandler
{
    PARSHealthCourseProvider *_dataProvider;
}

@property(retain, nonatomic) PARSHealthCourseProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
- (void).cxx_destruct;
- (void)updateUnhistoryHealthCourse:(id)arg1;
- (void)addHistoryHealthCourse:(id)arg1;
- (void)cacheHealthCourseList:(id)arg1;
- (void)fetchHistoryHealthCourseList:(CDUnknownBlockType)arg1;
- (void)fetchCachedHealthCourseListOfPage:(long long)arg1 result:(CDUnknownBlockType)arg2;
- (void)requestHealthCourseListOfPage:(long long)arg1 result:(CDUnknownBlockType)arg2;

@end
