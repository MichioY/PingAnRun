//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PAApi_JSONString : NSObject
{
    NSString *_value;
}

+ (id)deserialize:(id)arg1;
+ (id)deserializeWithJsonData:(id)arg1;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)serialize;

@end

