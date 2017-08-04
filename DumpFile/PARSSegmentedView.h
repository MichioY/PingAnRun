//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, UIButton, UIColor;

@interface PARSSegmentedView : UIView
{
    id <PARSSegmentedViewDelegate> _delegate;
    UIColor *_normalColor;
    UIColor *_selectedColor;
    long long _selectedIndex;
    UIView *_seperatorView;
    UIView *_cursorView;
    NSMutableArray *_segmentedButtons;
    NSArray *_titleList;
    UIButton *_selectedButton;
}

@property(retain, nonatomic) UIButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(copy, nonatomic) NSArray *titleList; // @synthesize titleList=_titleList;
@property(retain, nonatomic) NSMutableArray *segmentedButtons; // @synthesize segmentedButtons=_segmentedButtons;
@property(retain, nonatomic) UIView *cursorView; // @synthesize cursorView=_cursorView;
@property(retain, nonatomic) UIView *seperatorView; // @synthesize seperatorView=_seperatorView;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(nonatomic) __weak id <PARSSegmentedViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)buttonTapped:(id)arg1;
- (void)refresTitle:(id)arg1;
- (double)heightForCursorView;
- (double)fontSize;
- (void)updateSubviews;
- (void)setupSubviews;
- (id)buildButtonWithTitle:(id)arg1;
- (id)initWithTitles:(id)arg1 delegate:(id)arg2;

@end
