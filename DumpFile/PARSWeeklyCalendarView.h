//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSDate, NSDictionary, NSNumber, NSString, PARSSignInRecordInfo, UIButton, UIImageView, UILabel;

@interface PARSWeeklyCalendarView : UIView <UIGestureRecognizerDelegate>
{
    id <PARSCalendarDelegate> _delegate;
    PARSSignInRecordInfo *_recordInfo;
    NSDictionary *_recordDict;
    UIImageView *_backgroundView;
    UIView *_dailySubViewContainer;
    UILabel *_monthLabel;
    UIButton *_todayBtn;
    NSNumber *_weekStartConfig;
    NSDate *_startDate;
    NSDate *_endDate;
    long long _currentPage;
}

@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSNumber *weekStartConfig; // @synthesize weekStartConfig=_weekStartConfig;
@property(retain, nonatomic) UIButton *todayBtn; // @synthesize todayBtn=_todayBtn;
@property(retain, nonatomic) UILabel *monthLabel; // @synthesize monthLabel=_monthLabel;
@property(retain, nonatomic) UIView *dailySubViewContainer; // @synthesize dailySubViewContainer=_dailySubViewContainer;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSDictionary *recordDict; // @synthesize recordDict=_recordDict;
@property(retain, nonatomic) PARSSignInRecordInfo *recordInfo; // @synthesize recordInfo=_recordInfo;
@property(nonatomic) __weak id <PARSCalendarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)refresh;
- (id)dailyViewForDate:(id)arg1 frame:(struct CGRect)arg2;
- (void)render;
- (void)renderSwipeDates:(id)arg1;
- (void)initDailyViews;
- (void)pressTodayBtn;
- (void)swipeStep:(long long)arg1;
- (void)handleRightSwipe;
- (void)handleLeftSwipe;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubview;
- (void)setUp;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
