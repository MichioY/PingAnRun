//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSWealthBaseProductInfo.h"

@class NSString;

@interface PARSRecommendProductInfo : PARSWealthBaseProductInfo
{
    NSString *_enjoyTitle;
    NSString *_enjoyDescription;
    NSString *_productCode;
    NSString *_imgPath;
}

@property(retain, nonatomic) NSString *imgPath; // @synthesize imgPath=_imgPath;
@property(retain, nonatomic) NSString *productCode; // @synthesize productCode=_productCode;
@property(retain, nonatomic) NSString *enjoyDescription; // @synthesize enjoyDescription=_enjoyDescription;
@property(retain, nonatomic) NSString *enjoyTitle; // @synthesize enjoyTitle=_enjoyTitle;
- (void).cxx_destruct;
- (id)initWithJson:(id)arg1;

@end

