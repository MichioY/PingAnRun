//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@class NSString;

@interface PARSPlaceholderTextView : UITextView
{
    NSString *_placeholder;
    struct CGPoint _placeHolderPosition;
}

@property(nonatomic) struct CGPoint placeHolderPosition; // @synthesize placeHolderPosition=_placeHolderPosition;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (void).cxx_destruct;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)textDidChange;
- (void)setText:(id)arg1;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1 placeHolderPosition:(struct CGPoint)arg2;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)awakeFromNib;

@end

