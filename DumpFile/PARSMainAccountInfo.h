//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@interface PARSMainAccountInfo : PARSBaseInfo
{
    _Bool _isWangcaiOpened;
    _Bool _isPasswordSet;
    _Bool _isCardBound;
    _Bool _isCreditCardBound;
    _Bool _isMainAccountOpened;
    _Bool _doneOpeningMainAccount;
    _Bool _canUpgrade;
    _Bool _isFundTransferring;
}

@property(nonatomic) _Bool isFundTransferring; // @synthesize isFundTransferring=_isFundTransferring;
@property(nonatomic) _Bool canUpgrade; // @synthesize canUpgrade=_canUpgrade;
@property(nonatomic) _Bool doneOpeningMainAccount; // @synthesize doneOpeningMainAccount=_doneOpeningMainAccount;
@property(nonatomic) _Bool isMainAccountOpened; // @synthesize isMainAccountOpened=_isMainAccountOpened;
@property(nonatomic) _Bool isCreditCardBound; // @synthesize isCreditCardBound=_isCreditCardBound;
@property(nonatomic) _Bool isCardBound; // @synthesize isCardBound=_isCardBound;
@property(nonatomic) _Bool isPasswordSet; // @synthesize isPasswordSet=_isPasswordSet;
@property(nonatomic) _Bool isWangcaiOpened; // @synthesize isWangcaiOpened=_isWangcaiOpened;
- (id)initWithJson:(id)arg1;

@end

