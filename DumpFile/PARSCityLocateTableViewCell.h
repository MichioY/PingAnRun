//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface PARSCityLocateTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_locateImageView;
}

@property(retain, nonatomic) UIImageView *locateImageView; // @synthesize locateImageView=_locateImageView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
