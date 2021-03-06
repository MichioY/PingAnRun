//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface PARSWangCaiTransactionPresenter : NSObject
{
    _Bool _hasMore;
    _Bool _refreshSuccess;
    id <PARSWangCaiTransactionPresenterDelegate> _delegate;
    NSMutableArray *_monthStringArray;
    long long _pageNO;
    NSMutableDictionary *_monthTransactionDic;
}

@property(retain, nonatomic) NSMutableDictionary *monthTransactionDic; // @synthesize monthTransactionDic=_monthTransactionDic;
@property(nonatomic) _Bool refreshSuccess; // @synthesize refreshSuccess=_refreshSuccess;
@property(nonatomic) long long pageNO; // @synthesize pageNO=_pageNO;
@property(retain, nonatomic) NSMutableArray *monthStringArray; // @synthesize monthStringArray=_monthStringArray;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) __weak id <PARSWangCaiTransactionPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadTransactionsForPageNO:(long long)arg1 refresh:(_Bool)arg2;
- (void)loadMore;
- (void)refresh;
- (void)loadCachedFirstPageData;
- (void)clear;
- (id)transactionForIndexPath:(id)arg1;
- (id)monthTransactionsForSection:(long long)arg1;
- (id)monthTransactionsForMonthString:(id)arg1;
- (id)monthStringForTransaction:(id)arg1;
- (void)addTransactions:(id)arg1;
- (id)init;

@end

