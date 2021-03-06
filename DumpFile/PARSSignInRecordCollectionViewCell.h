//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSDictionary, PARSSignInRecordInfo, PARSWeeklyCalendarView, UIControl, UIImageView, UILabel;

@interface PARSSignInRecordCollectionViewCell : UICollectionViewCell
{
    _Bool _isShow;
    CDUnknownBlockType _showCalendarView;
    PARSSignInRecordInfo *_recordInfo;
    NSDictionary *_recordDict;
    id _target;
    UIControl *_headerView;
    UILabel *_titleLabel;
    UIImageView *_indicatorIcon;
    PARSWeeklyCalendarView *_calendarView;
}

@property(retain, nonatomic) PARSWeeklyCalendarView *calendarView; // @synthesize calendarView=_calendarView;
@property(retain, nonatomic) UIImageView *indicatorIcon; // @synthesize indicatorIcon=_indicatorIcon;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIControl *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) NSDictionary *recordDict; // @synthesize recordDict=_recordDict;
@property(retain, nonatomic) PARSSignInRecordInfo *recordInfo; // @synthesize recordInfo=_recordInfo;
@property(copy, nonatomic) CDUnknownBlockType showCalendarView; // @synthesize showCalendarView=_showCalendarView;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
- (void).cxx_destruct;
- (void)refresh;
- (void)pressHeaderView;
- (void)layoutSubview;
- (id)initWithFrame:(struct CGRect)arg1;

@end

