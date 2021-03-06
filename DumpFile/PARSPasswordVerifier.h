//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PARSPasswordVerifier : NSObject
{
    _Bool _isValid;
}

@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
- (_Bool)predicateWithStr:(id)arg1 withMatch:(id)arg2;
- (CDUnknownBlockType)isValideForSymbol;
- (CDUnknownBlockType)isValideForDigit;
- (CDUnknownBlockType)isValideForLowercase;
- (CDUnknownBlockType)isValideForUppercase;
- (CDUnknownBlockType)isValideForChar;

@end

