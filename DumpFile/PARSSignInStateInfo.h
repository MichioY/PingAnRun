//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@class NSArray, NSString, PARSSignInMessageInfo;

@interface PARSSignInStateInfo : PARSBaseInfo
{
    NSString *_specialDay;
    NSString *_prizeIndex;
    NSString *_continueDay;
    NSString *_curSignState;
    NSString *_curHasGetPrize;
    NSString *_signPeriod;
    NSArray *_prizes;
    NSString *_signInRule;
    PARSSignInMessageInfo *_addedSign;
}

@property(retain, nonatomic) PARSSignInMessageInfo *addedSign; // @synthesize addedSign=_addedSign;
@property(retain, nonatomic) NSString *signInRule; // @synthesize signInRule=_signInRule;
@property(retain, nonatomic) NSArray *prizes; // @synthesize prizes=_prizes;
@property(copy, nonatomic) NSString *signPeriod; // @synthesize signPeriod=_signPeriod;
@property(copy, nonatomic) NSString *curHasGetPrize; // @synthesize curHasGetPrize=_curHasGetPrize;
@property(copy, nonatomic) NSString *curSignState; // @synthesize curSignState=_curSignState;
@property(copy, nonatomic) NSString *continueDay; // @synthesize continueDay=_continueDay;
@property(copy, nonatomic) NSString *prizeIndex; // @synthesize prizeIndex=_prizeIndex;
@property(copy, nonatomic) NSString *specialDay; // @synthesize specialDay=_specialDay;
- (void).cxx_destruct;
- (id)initWithJson:(id)arg1;

@end
