//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSOldBaseUserHTTPRequest.h"

@class NSArray, NSString, PARSActivityTagInfo;

@interface PARSNewListActivityTagRequest : PARSOldBaseUserHTTPRequest
{
    NSString *_cityCode;
    PARSActivityTagInfo *_tagInfo;
    NSArray *_list;
    NSString *_version;
}

@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(retain, nonatomic) PARSActivityTagInfo *tagInfo; // @synthesize tagInfo=_tagInfo;
@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
- (void).cxx_destruct;
- (_Bool)shouldEncryptPhoneWithTimstamp;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (id)url;

@end

