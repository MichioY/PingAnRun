//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PARSStackView.h"

@class NSArray, NSString;

@interface PARSStackView : UIView <PARSStackView>
{
    long long axis;
    NSArray *_spaces;
    struct UIEdgeInsets contentInsets;
}

@property(retain, nonatomic) NSArray *spaces; // @synthesize spaces=_spaces;
@property(nonatomic) long long axis; // @synthesize axis;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets;
- (void).cxx_destruct;
- (double)_spaceForIndex:(long long)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)_calculateFrame;
- (void)addSubviewsAndSpacesFromArray:(id)arg1;
- (void)addWithSpace:(double)arg1 subviewsFromArray:(id)arg2;
- (void)addSubviewsAndSpaces:(id)arg1;
- (void)addWithSpace:(double)arg1 subviews:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
