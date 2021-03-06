//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class AreaItem, NSArray, NSString, UIPickerView, UIToolbar;

@interface PickerAreaItemView : UIView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIToolbar *pickerToolbar;
    UIPickerView *_picker;
    NSArray *_datas;
    AreaItem *_selectAreaItem;
    long long _selectRow;
    id <PickerAreaItemViewDelegate> _delegate;
}

@property(nonatomic) __weak id <PickerAreaItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long selectRow; // @synthesize selectRow=_selectRow;
@property(retain, nonatomic) AreaItem *selectAreaItem; // @synthesize selectAreaItem=_selectAreaItem;
@property(retain, nonatomic) NSArray *datas; // @synthesize datas=_datas;
@property(retain, nonatomic) UIPickerView *picker; // @synthesize picker=_picker;
- (void).cxx_destruct;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (void)doneOver;
- (void)dismissPicker;
- (void)showInView:(id)arg1;
- (void)dealloc;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1 datas:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

