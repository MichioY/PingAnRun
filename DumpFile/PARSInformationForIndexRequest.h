//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSProtalBaseUserHTTPRequest.h"

@class NSArray, NSString;

@interface PARSInformationForIndexRequest : PARSProtalBaseUserHTTPRequest
{
    NSArray *_infos;
    NSString *_title;
    NSString *_moreTitle;
}

@property(copy, nonatomic) NSString *moreTitle; // @synthesize moreTitle=_moreTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *infos; // @synthesize infos=_infos;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)url;

@end
