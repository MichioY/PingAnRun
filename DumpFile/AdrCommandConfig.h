//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface AdrCommandConfig : NSObject
{
    NSData *_configData;
}

+ (id)copyWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSData *configData; // @synthesize configData=_configData;
- (void).cxx_destruct;
- (_Bool)validCommand:(id)arg1;
- (void)loadConfigFile:(id)arg1;
- (void)loadConfigData:(id)arg1;

@end

