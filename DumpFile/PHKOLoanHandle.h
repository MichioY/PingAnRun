//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHAddressSelectDelegate.h"
#import "PHRIAppointmentDatePickerDelegate.h"

@class NSString, PHKOLoanViewController;

@interface PHKOLoanHandle : NSObject <PHAddressSelectDelegate, PHRIAppointmentDatePickerDelegate>
{
    NSString *_curCallback;
    PHKOLoanViewController *_curVC;
}

+ (id)shareInstance;
@property(retain, nonatomic) PHKOLoanViewController *curVC; // @synthesize curVC=_curVC;
@property(copy, nonatomic) NSString *curCallback; // @synthesize curCallback=_curCallback;
- (void).cxx_destruct;
- (void)PHRISelectedBtn:(long long)arg1 selectedTime:(id)arg2;
- (void)PHRISelectedBtn:(long long)arg1 selectedDate:(id)arg2;
- (void)showAppointmentTime:(id)arg1:(id)arg2:(id)arg3;
- (void)showAppointmentDate:(id)arg1:(id)arg2:(id)arg3;
- (void)getAddressCode:(id)arg1:(id)arg2:(id)arg3:(id)arg4:(id)arg5;
- (void)getTDDeviceInfo:(id)arg1:(id)arg2;
- (void)getTalkingDataMsg:(id)arg1:(id)arg2;
- (void)getAddressInfo:(id)arg1:(id)arg2;
- (void)getContactList:(id)arg1:(id)arg2:(id)arg3;
- (void)phAddressSelect_SelectedAddressInfo:(id)arg1;
- (void)selectAddressInfo:(id)arg1:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

