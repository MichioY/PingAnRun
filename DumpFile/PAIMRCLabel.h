//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableAttributedString, NSString, PAIMRTLabelComponent, PAIMRTLabelComponentsStructure, UIColor, UIFont;

@interface PAIMRCLabel : UIView
{
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_originalColor;
    int _textAlignment;
    int _lineBreakMode;
    struct CGSize _optimumSize;
    struct __CTFramesetter *_framesetter;
    struct __CTFrame *_ctFrame;
    CDStruct_627e0f85 _visibleRange;
    NSString *_paragraphReplacement;
    struct __CTFont *_thisFont;
    struct __CFAttributedString *_attrString;
    PAIMRTLabelComponent *_currentLinkComponent;
    PAIMRTLabelComponent *_currentImgComponent;
    PAIMRTLabelComponentsStructure *componentsAndPlainText_;
    _Bool _supportGesture;
    _Bool _resizeImageToLineHeight;
    id <PAIMRTLabelSizeDelegate> _sizeDelegate;
    id <PAIMRTLabelDelegate> _delegate;
    unsigned long long _numberOfLines;
}

+ (id)stripURL:(id)arg1;
+ (id)extractTextStyle:(id)arg1;
@property(nonatomic) _Bool resizeImageToLineHeight; // @synthesize resizeImageToLineHeight=_resizeImageToLineHeight;
@property(nonatomic) _Bool supportGesture; // @synthesize supportGesture=_supportGesture;
@property(nonatomic) unsigned long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(retain, nonatomic) PAIMRTLabelComponent *currentLinkComponent; // @synthesize currentLinkComponent=_currentLinkComponent;
@property(retain, nonatomic) PAIMRTLabelComponent *currentImgComponent; // @synthesize currentImgComponent=_currentImgComponent;
@property(copy, nonatomic) NSString *paragraphReplacement; // @synthesize paragraphReplacement=_paragraphReplacement;
@property(nonatomic) id <PAIMRTLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) id <PAIMRTLabelSizeDelegate> sizeDelegate; // @synthesize sizeDelegate=_sizeDelegate;
@property(nonatomic) struct CGSize optimumSize; // @synthesize optimumSize=_optimumSize;
- (void)rcLabelDidLongPressed:(id)arg1;
- (id)visibleText;
- (void)dismissBoundRectForTouch;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toLineOrigin:(struct CGPoint)arg2;
- (_Bool)isPointClickable:(struct CGPoint)arg1;
- (_Bool)isPointClickable:(struct CGPoint)arg1 inLine:(struct __CTLine *)arg2 lineOrigin:(struct CGPoint)arg3 nextLineY:(double)arg4;
- (id)clickedComponentContainPoint:(struct CGPoint)arg1 inLine:(struct __CTLine *)arg2;
- (struct __CTLine *)lineContainPoint:(struct CGPoint)arg1;
- (struct __CTLine *)lineContainPoint:(struct CGPoint)arg1 getLineOrigin:(struct CGPoint *)arg2 getNextLineY:(double *)arg3;
- (id)colorForHex:(id)arg1;
- (void)genAttributedString;
- (void)dealloc;
- (void)applyImageAttributes:(struct __CFAttributedString *)arg1 attributes:(id)arg2 atPosition:(long long)arg3 withLength:(long long)arg4;
- (void)applyUnderlineColor:(id)arg1 toText:(struct __CFAttributedString *)arg2 atPosition:(long long)arg3 withLength:(long long)arg4;
- (void)applyColor:(id)arg1 toText:(struct __CFAttributedString *)arg2 atPosition:(long long)arg3 withLength:(long long)arg4;
- (void)applyBoldStyleToText:(struct __CFAttributedString *)arg1 atPosition:(long long)arg2 withLength:(long long)arg3;
- (void)applyFontAttributes:(id)arg1 toText:(struct __CFAttributedString *)arg2 atPosition:(long long)arg3 withLength:(long long)arg4;
- (void)applyItalicStyleToText:(struct __CFAttributedString *)arg1 atPosition:(long long)arg2 withLength:(long long)arg3;
- (void)applyDoubleUnderlineText:(struct __CFAttributedString *)arg1 atPosition:(long long)arg2 withLength:(long long)arg3;
- (void)applySingleUnderlineText:(struct __CFAttributedString *)arg1 atPosition:(long long)arg2 withLength:(long long)arg3;
- (void)applyParagraphStyleToText:(struct __CFAttributedString *)arg1 attributes:(id)arg2 atPosition:(long long)arg3 withLength:(long long)arg4;
- (void)render;
- (struct CGRect)BoundingRectFroImage:(id)arg1 withRun:(struct __CTRun *)arg2;
- (struct CGRect)BoundingRectForLink:(id)arg1 withRun:(struct __CTRun *)arg2;
- (struct CGPath *)newPathForRoundedRect:(struct CGRect)arg1 radius:(double)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (CDStruct_627e0f85)rangeOfLine:(unsigned long long)arg1 withWidth:(double)arg2;
@property(readonly, nonatomic) NSMutableAttributedString *attrString;
- (id)componentsAndPlainText;
- (void)setComponentsAndPlainText:(id)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (int)lineBreakMode;
- (void)setLineBreakMode:(int)arg1;
- (int)textAlignment;
- (void)setTextAlignment:(int)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

