//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ILiveLogUploadResponse : NSObject
{
    int _retCode;
    NSString *_errMsg;
    NSString *_logKey;
    NSString *_cosSign;
    NSString *_cosBucket;
    NSString *_cosPath;
    NSString *_cosRegion;
    NSString *_cosAppId;
    NSString *_cosUrl;
}

@property(retain, nonatomic) NSString *cosUrl; // @synthesize cosUrl=_cosUrl;
@property(retain, nonatomic) NSString *cosAppId; // @synthesize cosAppId=_cosAppId;
@property(retain, nonatomic) NSString *cosRegion; // @synthesize cosRegion=_cosRegion;
@property(retain, nonatomic) NSString *cosPath; // @synthesize cosPath=_cosPath;
@property(retain, nonatomic) NSString *cosBucket; // @synthesize cosBucket=_cosBucket;
@property(retain, nonatomic) NSString *cosSign; // @synthesize cosSign=_cosSign;
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(nonatomic) int retCode; // @synthesize retCode=_retCode;
- (void).cxx_destruct;

@end
