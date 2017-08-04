//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface PARSHealthCircleTrackRecordCell : UITableViewCell
{
    UIImageView *_icon;
    UILabel *_date;
    UILabel *_kilometre;
    UILabel *_time;
    UILabel *_steps;
    UILabel *_kmTips;
    UIImageView *_marathonIcon;
}

@property(retain, nonatomic) UIImageView *marathonIcon; // @synthesize marathonIcon=_marathonIcon;
@property(retain, nonatomic) UILabel *kmTips; // @synthesize kmTips=_kmTips;
@property(retain, nonatomic) UILabel *steps; // @synthesize steps=_steps;
@property(retain, nonatomic) UILabel *time; // @synthesize time=_time;
@property(retain, nonatomic) UILabel *kilometre; // @synthesize kilometre=_kilometre;
@property(retain, nonatomic) UILabel *date; // @synthesize date=_date;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)configSubviews;
- (void)buildSubviews;
- (void)updateWithTrackInfo:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end
