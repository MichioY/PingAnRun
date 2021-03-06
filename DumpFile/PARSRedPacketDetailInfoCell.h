//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface PARSRedPacketDetailInfoCell : UITableViewCell
{
    UIImageView *_headImageView;
    UILabel *_nameLabel;
    UILabel *_timeLabel;
    UILabel *_priceLabel;
    UILabel *_bestLuckyLabel;
    UIImageView *_bestLuckyImageView;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *bestLuckyImageView; // @synthesize bestLuckyImageView=_bestLuckyImageView;
@property(retain, nonatomic) UILabel *bestLuckyLabel; // @synthesize bestLuckyLabel=_bestLuckyLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void).cxx_destruct;
- (void)loadModel:(id)arg1 cellType:(unsigned long long)arg2;
- (void)updateRedPacketCurrentShowState:(_Bool)arg1;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

