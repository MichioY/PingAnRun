//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Wtlogin64_RegisterCmd.h"

@class NSData, NSString;

@interface Wtlogin64_RegisterCmd_0x66 : Wtlogin64_RegisterCmd
{
    NSString *userPassword;
    unsigned long long ddwSalt;
    NSData *freeSigData;
}

@property unsigned long long ddwSalt; // @synthesize ddwSalt;
@property(retain) NSData *freeSigData; // @synthesize freeSigData;
@property(copy) NSString *userPassword; // @synthesize userPassword;
- (void).cxx_destruct;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
- (int)encode:(id)arg1;
- (id)init;

@end

