//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableSet, NSString;

@interface CDVWhitelist : NSObject
{
    NSMutableArray *whitelist;
    NSMutableSet *permittedSchemes;
    NSString *whitelistRejectionFormatString;
}

@property(copy, nonatomic) NSString *whitelistRejectionFormatString; // @synthesize whitelistRejectionFormatString;
@property(retain, nonatomic) NSMutableSet *permittedSchemes; // @synthesize permittedSchemes;
@property(retain, nonatomic) NSMutableArray *whitelist; // @synthesize whitelist;
- (void).cxx_destruct;
- (id)errorStringForURL:(id)arg1;
- (_Bool)URLIsAllowed:(id)arg1 logFailure:(_Bool)arg2;
- (_Bool)URLIsAllowed:(id)arg1;
- (_Bool)schemeIsAllowed:(id)arg1;
- (void)addWhiteListEntry:(id)arg1;
- (_Bool)isIPv4Address:(id)arg1;
- (id)initWithArray:(id)arg1;

@end
