//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseUserHandler.h"

@class NSString, PARSSharedUserDataProvider;

@interface PARSHealthDocHandler : PARSBaseUserHandler
{
    PARSSharedUserDataProvider *_healthDocDataProvider;
}

@property(retain, nonatomic) PARSSharedUserDataProvider *healthDocDataProvider; // @synthesize healthDocDataProvider=_healthDocDataProvider;
- (void).cxx_destruct;
- (void)requestOpenToken:(CDUnknownBlockType)arg1;
- (void)fetchCachedOpenToken:(CDUnknownBlockType)arg1;
- (void)fetchOpenToken:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSString *openToken; // @dynamic openToken;

@end

