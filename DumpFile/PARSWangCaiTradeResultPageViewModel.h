//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, RACCommand, RACSubject;

@interface PARSWangCaiTradeResultPageViewModel : NSObject
{
    _Bool _isBusy;
    RACCommand *_doneCommand;
    RACSubject *_errors;
    NSString *_strStartTime;
    NSString *_strStartTip;
    NSString *_strEndTime;
    NSString *_strEndTip;
    NSString *_transationNo;
    unsigned long long _tradeType;
}

@property(nonatomic) unsigned long long tradeType; // @synthesize tradeType=_tradeType;
@property(copy, nonatomic) NSString *transationNo; // @synthesize transationNo=_transationNo;
@property(copy, nonatomic) NSString *strEndTip; // @synthesize strEndTip=_strEndTip;
@property(copy, nonatomic) NSString *strEndTime; // @synthesize strEndTime=_strEndTime;
@property(copy, nonatomic) NSString *strStartTip; // @synthesize strStartTip=_strStartTip;
@property(copy, nonatomic) NSString *strStartTime; // @synthesize strStartTime=_strStartTime;
@property(nonatomic) _Bool isBusy; // @synthesize isBusy=_isBusy;
- (void).cxx_destruct;
@property(readonly, nonatomic) RACSubject *errors; // @synthesize errors=_errors;
@property(readonly, nonatomic) RACCommand *doneCommand; // @synthesize doneCommand=_doneCommand;
- (id)initWithType:(unsigned long long)arg1 parameter:(id)arg2;

@end
