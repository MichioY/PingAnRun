//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AdrItem.h"

@class NSString;

@interface AdrImageCropItem : AdrItem
{
    NSString *_action;
    NSString *_utype;
    NSString *_stype;
    NSString *_ptype;
    NSString *_surl;
    id _surldata;
    NSString *_width;
    NSString *_height;
    NSString *_max;
    NSString *_min;
    NSString *_quality;
    id _exparam;
    NSString *_loadingText;
}

+ (id)getInstanceFromJSONDictionary:(id)arg1;
@property(retain, nonatomic) NSString *loadingText; // @synthesize loadingText=_loadingText;
@property(retain, nonatomic) id exparam; // @synthesize exparam=_exparam;
@property(retain, nonatomic) NSString *quality; // @synthesize quality=_quality;
@property(retain, nonatomic) NSString *min; // @synthesize min=_min;
@property(retain, nonatomic) NSString *max; // @synthesize max=_max;
@property(retain, nonatomic) NSString *height; // @synthesize height=_height;
@property(retain, nonatomic) NSString *width; // @synthesize width=_width;
@property(retain, nonatomic) id surldata; // @synthesize surldata=_surldata;
@property(retain, nonatomic) NSString *surl; // @synthesize surl=_surl;
@property(retain, nonatomic) NSString *ptype; // @synthesize ptype=_ptype;
@property(retain, nonatomic) NSString *stype; // @synthesize stype=_stype;
@property(retain, nonatomic) NSString *utype; // @synthesize utype=_utype;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)init;

@end
