//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Wtlogin64_WloginTlv.h"

@class NSData;

@interface Wtlogin64_WloginTlv_0x11d : Wtlogin64_WloginTlv
{
    unsigned int dwAppid;
    NSData *acSigKey;
    NSData *acSig;
}

@property(retain) NSData *acSigKey; // @synthesize acSigKey;
@property(retain) NSData *acSig; // @synthesize acSig;
@property unsigned int dwAppid; // @synthesize dwAppid;
- (void).cxx_destruct;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end
