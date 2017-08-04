//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface RYMSkyEyeAASkyEyeMessagePackReader : NSObject
{
    unsigned long long _index;
    NSData *_data;
    long long _options;
}

+ (id)readData:(id)arg1 options:(long long)arg2 error:(id *)arg3;
+ (id)readData:(id)arg1 error:(id *)arg2;
+ (id)parseData:(id)arg1;
@property long long options; // @synthesize options=_options;
@property(retain) NSData *data; // @synthesize data=_data;
@property unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)readObject:(id *)arg1;
- (unsigned long long)read:(void *)arg1 limit:(unsigned long long)arg2;
- (id)returnNilWithErrorCode:(long long)arg1 description:(id)arg2 error:(id *)arg3;
- (id)readDictionaryFromContext:(struct cmp_ctx_s *)arg1 length:(unsigned int)arg2 error:(id *)arg3;
- (id)readArrayFromContext:(struct cmp_ctx_s *)arg1 length:(unsigned int)arg2 error:(id *)arg3;
- (id)readFromContext:(struct cmp_ctx_s *)arg1 error:(id *)arg2;
- (id)initWithData:(id)arg1 options:(long long)arg2;
- (id)initWithData:(id)arg1;

@end
