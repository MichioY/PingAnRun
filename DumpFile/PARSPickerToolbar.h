//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIToolbar.h"

@interface PARSPickerToolbar : UIToolbar
{
    id <PARSPickerToolbarDelegate> _toolbarDelegate;
}

@property(nonatomic) __weak id <PARSPickerToolbarDelegate> toolbarDelegate; // @synthesize toolbarDelegate=_toolbarDelegate;
- (void).cxx_destruct;
- (void)toolbarRightButtonClick;
- (void)toolbarLeftButtonClick;
- (id)initWithFrame:(struct CGRect)arg1 leftView:(id)arg2 rightView:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 leftButtonTitle:(id)arg2 rightButtonTitle:(id)arg3;

@end

