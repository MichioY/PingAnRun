//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ASToken : NSObject
{
    NSString *token;
    NSString *ctime;
}

+ (id)getASToken;
@property(retain, nonatomic) NSString *ctime; // @synthesize ctime;
@property(retain, nonatomic) NSString *token; // @synthesize token;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)readToken;
- (void)writeToken:(id)arg1;
- (void)writeToolChainToken:(id)arg1;
- (id)readToolChainToken;
- (void)writeDefaultToken:(id)arg1;
- (id)readDefaultToken;
- (_Bool)checkSum:(id)arg1:(id)arg2:(id)arg3;

@end

