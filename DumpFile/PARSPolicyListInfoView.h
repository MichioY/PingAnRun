//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface PARSPolicyListInfoView : UIView
{
    id <PARSPolicyListInfoViewDelegate> _delegate;
}

@property(nonatomic) __weak id <PARSPolicyListInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)grayDot;
- (id)imageViewWithImageName:(id)arg1;
- (id)labelWithText:(id)arg1 font:(double)arg2 color:(id)arg3;
- (void)didTapConfirmButton:(id)arg1;
- (void)buildSubviews;
- (id)init;

@end

