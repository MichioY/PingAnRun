//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableString, NSString;

@interface PAIMSTPhoneFormatter : NSObject
{
    NSArray *_countries;
    NSString *_callingCode;
    NSString *_format;
    long long _numberOfDigits;
    NSMutableString *_formattedPhoneNumber;
    NSString *_countryCode;
    NSString *_countryName;
}

+ (id)phoneFormatter;
@property(readonly) NSString *countryName; // @synthesize countryName=_countryName;
@property(readonly) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSMutableString *formattedPhoneNumber; // @synthesize formattedPhoneNumber=_formattedPhoneNumber;
- (void).cxx_destruct;
- (id)description;
- (id)unformatNumber:(id)arg1;
- (void)formatPhoneNumber;
- (id)internationalPhoneNumber;
- (_Bool)phoneNumberMustChangeInRange:(struct _NSRange)arg1 replacementString:(id)arg2;
- (_Bool)setCountryCode:(id)arg1;
- (id)listOfCountrySupported;
- (id)init;

@end
