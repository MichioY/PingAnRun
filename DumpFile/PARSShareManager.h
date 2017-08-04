//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PARSShareHandler, PARSShareProvider;

@interface PARSShareManager : NSObject
{
    PARSShareHandler *_handler;
    PARSShareProvider *_provider;
}

+ (id)sharedManager;
@property(retain, nonatomic) PARSShareProvider *provider; // @synthesize provider=_provider;
@property(retain, nonatomic) PARSShareHandler *handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (id)fecthAboutInfo;
- (void)loadShareInfoFromServer:(CDUnknownBlockType)arg1;
- (id)init;

@end
