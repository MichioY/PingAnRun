//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseUserHandler.h"

@class PARSFundProductDataProvider;

@interface PARSFundListHandler : PARSBaseUserHandler
{
    PARSFundProductDataProvider *_dataProvider;
}

@property(retain, nonatomic) PARSFundProductDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
- (void).cxx_destruct;
- (void)clearFundList;
- (_Bool)cacheFundList:(id)arg1;
- (void)updateUserAskHighRisk:(_Bool)arg1;
- (_Bool)queryUserAskHighRisk;
- (void)fetchCachedFundList:(CDUnknownBlockType)arg1;
- (void)requestFundList:(CDUnknownBlockType)arg1;

@end

