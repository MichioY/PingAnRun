//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseUserDatabaseProvider.h"

@class NSString, YYCache;

@interface PARSMyFundDataProvider : PARSBaseUserDatabaseProvider
{
    YYCache *_yyCache;
    NSString *_userId;
}

@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) YYCache *yyCache; // @synthesize yyCache=_yyCache;
- (void).cxx_destruct;
- (void)updateMyFundInvestorInfoUrl:(id)arg1;
- (id)queryMyFundInvestorInfoUrl;
- (void)updateMyFundStatus:(id)arg1;
- (id)queryMyFundStatus;
- (_Bool)deleteAllMyFunds;
- (_Bool)updateMyFundSummaryInfo:(id)arg1;
- (_Bool)updateMyFunds:(id)arg1;
- (id)queryMyFundSummaryInfo;
- (id)queryMyFunds;
- (id)buildMyFundInfoWithResult:(id)arg1;
- (_Bool)onCreateTable:(id)arg1;
- (_Bool)onUpgradeTable:(id)arg1 fromVersion:(long long)arg2 toVersion:(long long)arg3;
- (long long)version;
- (id)name;
- (id)initWithUserID:(id)arg1;

@end

