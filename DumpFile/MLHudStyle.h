//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor, UIFont;

@interface MLHudStyle : NSObject
{
    double _cornerRadius;
    UIColor *_backgroundColor;
    double _horizontalPadding;
    double _verticalPadding;
    double _verticalTopPadding;
    double _verticalBottomPadding;
    UIFont *_titleFont;
    UIFont *_messageFont;
    UIColor *_titleColor;
    UIColor *_messageColor;
    double _maxWidthPercentage;
    double _maxHeightPercentage;
    struct CGSize _minSize;
}

+ (id)defaultStyle;
@property(nonatomic) struct CGSize minSize; // @synthesize minSize=_minSize;
@property(nonatomic) double maxHeightPercentage; // @synthesize maxHeightPercentage=_maxHeightPercentage;
@property(nonatomic) double maxWidthPercentage; // @synthesize maxWidthPercentage=_maxWidthPercentage;
@property(retain, nonatomic) UIColor *messageColor; // @synthesize messageColor=_messageColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *messageFont; // @synthesize messageFont=_messageFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) double verticalBottomPadding; // @synthesize verticalBottomPadding=_verticalBottomPadding;
@property(nonatomic) double verticalTopPadding; // @synthesize verticalTopPadding=_verticalTopPadding;
@property(nonatomic) double verticalPadding; // @synthesize verticalPadding=_verticalPadding;
@property(nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void).cxx_destruct;

@end
