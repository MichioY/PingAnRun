//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface JKNInsuranceBinderDoctorModel : NSObject
{
    long long _doctorID;
    NSString *_doctorName;
    NSString *_imageUrl;
    NSString *_pageUrl;
    NSString *_position;
}

+ (id)shareBindDocModel;
@property(retain, nonatomic) NSString *position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *pageUrl; // @synthesize pageUrl=_pageUrl;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *doctorName; // @synthesize doctorName=_doctorName;
@property(nonatomic) long long doctorID; // @synthesize doctorID=_doctorID;
- (void).cxx_destruct;
- (id)binderDoctorModelWithMephistopageBindDoctor:(id)arg1;

@end
