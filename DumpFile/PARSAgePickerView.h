//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSArray, NSString, UIPickerView;

@interface PARSAgePickerView : UIView <UIPickerViewDelegate, UIPickerViewDataSource>
{
    id <PARSAgePickerViewDelegate> _delegate;
    UIPickerView *_agePicker;
    NSString *_age;
    NSArray *_ages;
}

@property(retain, nonatomic) NSArray *ages; // @synthesize ages=_ages;
@property(retain, nonatomic) NSString *age; // @synthesize age=_age;
@property(retain, nonatomic) UIPickerView *agePicker; // @synthesize agePicker=_agePicker;
@property(nonatomic) __weak id <PARSAgePickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)cancelPicker;
- (void)showInView:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

