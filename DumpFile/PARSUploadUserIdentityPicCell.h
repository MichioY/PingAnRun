//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface PARSUploadUserIdentityPicCell : UITableViewCell
{
    UILabel *_descLabel;
    UIImageView *_identityImageView;
}

@property(retain, nonatomic) UIImageView *identityImageView; // @synthesize identityImageView=_identityImageView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
- (void).cxx_destruct;
- (void)updateIdentityImage:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

