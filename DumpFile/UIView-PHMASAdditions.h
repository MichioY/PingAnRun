//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class PHMASViewAttribute;

@interface UIView (PHMASAdditions)
- (id)mas_closestCommonSuperview:(id)arg1;
@property(retain, nonatomic) id mas_key;
@property(readonly, nonatomic) CDUnknownBlockType mas_attribute;
@property(readonly, nonatomic) PHMASViewAttribute *mas_baseline;
@property(readonly, nonatomic) PHMASViewAttribute *mas_centerY;
@property(readonly, nonatomic) PHMASViewAttribute *mas_centerX;
@property(readonly, nonatomic) PHMASViewAttribute *mas_height;
@property(readonly, nonatomic) PHMASViewAttribute *mas_width;
@property(readonly, nonatomic) PHMASViewAttribute *mas_trailing;
@property(readonly, nonatomic) PHMASViewAttribute *mas_leading;
@property(readonly, nonatomic) PHMASViewAttribute *mas_bottom;
@property(readonly, nonatomic) PHMASViewAttribute *mas_right;
@property(readonly, nonatomic) PHMASViewAttribute *mas_top;
@property(readonly, nonatomic) PHMASViewAttribute *mas_left;
- (id)mas_remakeConstraints:(CDUnknownBlockType)arg1;
- (id)mas_updateConstraints:(CDUnknownBlockType)arg1;
- (id)mas_makeConstraints:(CDUnknownBlockType)arg1;
@end

