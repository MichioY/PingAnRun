//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface PAIMQiniuPutExtra : NSObject
{
    unsigned int crc32;
    unsigned int checkCrc;
    NSDictionary *params;
    NSString *mimeType;
}

@property unsigned int checkCrc; // @synthesize checkCrc;
@property unsigned int crc32; // @synthesize crc32;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params;
- (void)dealloc;
- (id)init;

@end
