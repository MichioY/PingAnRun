//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Wtlogin64_WloginTlv.h"

@interface Wtlogin64_WloginTlv_0x107 : Wtlogin64_WloginTlv
{
    unsigned short wPicType;
    unsigned char cCapType;
    unsigned short wPicSize;
    unsigned char cPicRetType;
}

@property(nonatomic) unsigned char cPicRetType; // @synthesize cPicRetType;
@property(nonatomic) unsigned char cCapType; // @synthesize cCapType;
@property(nonatomic) unsigned short wPicType; // @synthesize wPicType;
@property(nonatomic) unsigned short wPicSize; // @synthesize wPicSize;
- (int)encode:(id)arg1;

@end

