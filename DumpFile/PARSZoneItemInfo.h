//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@class NSString;

@interface PARSZoneItemInfo : PARSBaseInfo
{
    _Bool _selected;
    NSString *_itemId;
    long long _loc;
    NSString *_imageUrl;
    NSString *_url;
    NSString *_title;
    NSString *_subtitle;
    NSString *_eventId;
    NSString *_bgImageUrl;
    NSString *_supplementaryDataStr;
}

@property(copy, nonatomic) NSString *supplementaryDataStr; // @synthesize supplementaryDataStr=_supplementaryDataStr;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(copy, nonatomic) NSString *bgImageUrl; // @synthesize bgImageUrl=_bgImageUrl;
@property(copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) long long loc; // @synthesize loc=_loc;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (id)extraJsonString;
- (void)parseExtraJson:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithJson:(id)arg1;

@end
