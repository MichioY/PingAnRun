//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AdrItem.h"

@class NSString;

@interface AdrBannerItem : AdrItem
{
    NSString *_bannerName;
    NSString *_bannerCode;
    NSString *_linkUrl;
    NSString *_imgUrl;
    NSString *_imgType;
    NSString *_startTime;
    NSString *_endTime;
    NSString *_loginType;
    NSString *_effectiveScene;
    NSString *_displayDuration;
}

+ (id)getInstanceFromJSONDictionary:(id)arg1;
@property(copy, nonatomic) NSString *displayDuration; // @synthesize displayDuration=_displayDuration;
@property(copy, nonatomic) NSString *effectiveScene; // @synthesize effectiveScene=_effectiveScene;
@property(copy, nonatomic) NSString *loginType; // @synthesize loginType=_loginType;
@property(copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *imgType; // @synthesize imgType=_imgType;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(copy, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(copy, nonatomic) NSString *bannerCode; // @synthesize bannerCode=_bannerCode;
@property(copy, nonatomic) NSString *bannerName; // @synthesize bannerName=_bannerName;
- (void).cxx_destruct;
- (_Bool)checkProperty:(id)arg1;

@end

