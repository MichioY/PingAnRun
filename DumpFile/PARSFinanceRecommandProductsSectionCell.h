//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSCollectionViewCell.h"

@class UIImageView, UILabel, UIView;

@interface PARSFinanceRecommandProductsSectionCell : PARSCollectionViewCell
{
    UIView *_containerView;
    UIView *_imageContentView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *imageContentView; // @synthesize imageContentView=_imageContentView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)updateWithInfo:(id)arg1;
- (unsigned long long)selectedStyle;
- (id)initWithFrame:(struct CGRect)arg1;

@end
