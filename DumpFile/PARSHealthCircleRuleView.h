//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableAttributedString, NSMutableParagraphStyle, NSString, UIButton, UILabel;

@interface PARSHealthCircleRuleView : UIView
{
    UILabel *_content;
    UIButton *_numBtn;
    NSMutableParagraphStyle *_style;
    NSString *_title;
    NSString *_detail;
    NSMutableAttributedString *_contentlabel;
}

@property(copy, nonatomic) NSMutableAttributedString *contentlabel; // @synthesize contentlabel=_contentlabel;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSMutableParagraphStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) UIButton *numBtn; // @synthesize numBtn=_numBtn;
@property(retain, nonatomic) UILabel *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)getAttributedStringWithStr:(id)arg1;
- (struct CGRect)getRectWithStr:(id)arg1;
- (void)setupSubview:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 BtnWithTitle:(id)arg2 content:(id)arg3;

@end
