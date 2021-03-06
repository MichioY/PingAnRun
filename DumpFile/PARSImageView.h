//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class NSURL, UIColor, UIImage;

@interface PARSImageView : UIImageView
{
    _Bool _shadowContentWithoutImage;
    long long _placeholderContentMode;
    UIImage *_defaultImage;
    UIImage *_targetImage;
    UIColor *_origBackgroundColor;
    long long _origContentMode;
    NSURL *_currentURL;
}

@property(copy, nonatomic) NSURL *currentURL; // @synthesize currentURL=_currentURL;
@property(nonatomic) long long origContentMode; // @synthesize origContentMode=_origContentMode;
@property(copy, nonatomic) UIColor *origBackgroundColor; // @synthesize origBackgroundColor=_origBackgroundColor;
@property(retain, nonatomic) UIImage *targetImage; // @synthesize targetImage=_targetImage;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(nonatomic) long long placeholderContentMode; // @synthesize placeholderContentMode=_placeholderContentMode;
@property(nonatomic) _Bool shadowContentWithoutImage; // @synthesize shadowContentWithoutImage=_shadowContentWithoutImage;
- (void).cxx_destruct;
- (void)reloadImage;
- (void)pars_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 completed:(CDUnknownBlockType)arg3;
- (void)pars_setImageWithURL:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)pars_setImageWithURL:(id)arg1 placeholderImage:(id)arg2;
- (void)pars_setImageWithURL:(id)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setImage:(id)arg1;
- (id)init;

@end

