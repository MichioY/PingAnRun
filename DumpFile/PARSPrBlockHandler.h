//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PARSPrBlockHandler : NSObject
{
    id <PARSPrMonitorInfoProviderProtocol> _provider;
}

@property(retain, nonatomic) id <PARSPrMonitorInfoProviderProtocol> provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (void)fetchBlockRecordWithPageNO:(long long)arg1 result:(CDUnknownBlockType)arg2;
- (void)startMonitorBlock;

@end

