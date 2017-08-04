//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSMutableArray, PARSImageView, UIButton, UILabel, UIView;

@interface PARSActivityBaseCell : UITableViewCell
{
    PARSImageView *_activityImageView;
    UIView *_activityContainView;
    UIView *_activityTagListContainView;
    UILabel *_activityTitleLabel;
    UILabel *_activityContentLabel;
    UIButton *_activityLeftDateView;
    UIButton *_activityAttendPersonView;
    NSMutableArray *_tagsLabelArray;
}

@property(retain, nonatomic) NSMutableArray *tagsLabelArray; // @synthesize tagsLabelArray=_tagsLabelArray;
@property(retain, nonatomic) UIButton *activityAttendPersonView; // @synthesize activityAttendPersonView=_activityAttendPersonView;
@property(retain, nonatomic) UIButton *activityLeftDateView; // @synthesize activityLeftDateView=_activityLeftDateView;
@property(retain, nonatomic) UILabel *activityContentLabel; // @synthesize activityContentLabel=_activityContentLabel;
@property(retain, nonatomic) UILabel *activityTitleLabel; // @synthesize activityTitleLabel=_activityTitleLabel;
@property(retain, nonatomic) UIView *activityTagListContainView; // @synthesize activityTagListContainView=_activityTagListContainView;
@property(retain, nonatomic) UIView *activityContainView; // @synthesize activityContainView=_activityContainView;
@property(retain, nonatomic) PARSImageView *activityImageView; // @synthesize activityImageView=_activityImageView;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (struct UIEdgeInsets)layoutMargins;
- (struct UIEdgeInsets)separatorInset;
- (void)buildSubviews;
- (void)addTagListView:(id)arg1;
- (void)addAttendPersonLabel:(id)arg1;
- (void)addLeftDateTimeBtn:(id)arg1;
- (void)showSeparator:(_Bool)arg1;
- (void)updateWithInfo:(id)arg1 type:(long long)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
