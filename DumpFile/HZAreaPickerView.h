//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class HZLocation, NSArray, NSMutableDictionary, NSString, UIPickerView;

@interface HZAreaPickerView : UIView <UIPickerViewDelegate, UIPickerViewDataSource>
{
    _Bool _isMunicipality;
    _Bool _isSelectedCity;
    _Bool _isSelectedArea;
    id <HZAreaPickerDelegate> _delegate;
    id <HZAreaPickerDataSource> _dataSource;
    HZLocation *_locate;
    NSArray *_provinces;
    NSArray *_cities;
    NSArray *_areas;
    UIPickerView *_pickerView;
    NSString *_path;
    NSMutableDictionary *_indexDict;
}

@property(copy, nonatomic) NSMutableDictionary *indexDict; // @synthesize indexDict=_indexDict;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(nonatomic) _Bool isSelectedArea; // @synthesize isSelectedArea=_isSelectedArea;
@property(nonatomic) _Bool isSelectedCity; // @synthesize isSelectedCity=_isSelectedCity;
@property(retain, nonatomic) NSArray *areas; // @synthesize areas=_areas;
@property(retain, nonatomic) NSArray *cities; // @synthesize cities=_cities;
@property(retain, nonatomic) NSArray *provinces; // @synthesize provinces=_provinces;
@property(nonatomic) _Bool isMunicipality; // @synthesize isMunicipality=_isMunicipality;
@property(retain, nonatomic) HZLocation *locate; // @synthesize locate=_locate;
@property(nonatomic) __weak id <HZAreaPickerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <HZAreaPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelPicker;
- (void)showInView:(id)arg1;
- (id)checkDuplicateWithArray:(id)arg1 inResourceArray:(id)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)cleanArray:(id)arg1;
- (id)insertSpaceInArray:(id)arg1;
- (void)selectCurrentContent;
- (id)toArray:(id)arg1;
- (void)displayDefaultLocation;
- (void)loadLocalData;
- (id)initWithPath:(id)arg1 delegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
