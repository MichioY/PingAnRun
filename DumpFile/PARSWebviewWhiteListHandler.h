//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseUserHandler.h"

@class PARSWebviewWhiteProvider;

@interface PARSWebviewWhiteListHandler : PARSBaseUserHandler
{
    PARSWebviewWhiteProvider *_provider;
}

@property(retain, nonatomic) PARSWebviewWhiteProvider *provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (id)fetchWhiteListForCahce;
- (void)fetchWebviewWhiteList:(CDUnknownBlockType)arg1;
- (id)initWithUserId:(id)arg1;

@end

