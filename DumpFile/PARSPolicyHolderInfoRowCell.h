//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView, UILabel;

@interface PARSPolicyHolderInfoRowCell : UICollectionViewCell
{
    UIImageView *_iconView;
    UILabel *_nameLabel;
    UILabel *_policyCountLabel;
}

@property(retain, nonatomic) UILabel *policyCountLabel; // @synthesize policyCountLabel=_policyCountLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)updatePolicyCount:(long long)arg1;
- (void)updateHolderInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
