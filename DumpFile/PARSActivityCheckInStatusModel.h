//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface PARSActivityCheckInStatusModel : NSObject
{
    _Bool _flagA;
    _Bool _flagB;
    _Bool _flagC;
    _Bool _flagD;
    _Bool _flagE;
    _Bool _flagF;
    _Bool _flagG;
    long long _detailType;
    NSDictionary *_jsonDict;
}

@property(readonly, nonatomic) NSDictionary *jsonDict; // @synthesize jsonDict=_jsonDict;
@property(nonatomic) long long detailType; // @synthesize detailType=_detailType;
@property(nonatomic) _Bool flagG; // @synthesize flagG=_flagG;
@property(nonatomic) _Bool flagF; // @synthesize flagF=_flagF;
@property(nonatomic) _Bool flagE; // @synthesize flagE=_flagE;
@property(nonatomic) _Bool flagD; // @synthesize flagD=_flagD;
@property(nonatomic) _Bool flagC; // @synthesize flagC=_flagC;
@property(nonatomic) _Bool flagB; // @synthesize flagB=_flagB;
@property(nonatomic) _Bool flagA; // @synthesize flagA=_flagA;
- (void).cxx_destruct;
- (id)initWithJsonDict:(id)arg1;

@end

