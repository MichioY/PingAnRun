//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

#import "NSCoding.h"

@class NSString;

@interface PARSOrderListInfo : PARSBaseInfo <NSCoding>
{
    NSString *_orderType;
    NSString *_commodityName;
    NSString *_orderAmount;
    NSString *_orderStatus;
    NSString *_orderGenerateTime;
    NSString *_trackingNo;
    NSString *_redirectUrl;
    double _rowHeight;
}

+ (id)orderListInfoArrayWithArray:(id)arg1;
+ (id)orderListInfoWithDict:(id)arg1;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(copy, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(copy, nonatomic) NSString *trackingNo; // @synthesize trackingNo=_trackingNo;
@property(copy, nonatomic) NSString *orderGenerateTime; // @synthesize orderGenerateTime=_orderGenerateTime;
@property(copy, nonatomic) NSString *orderStatus; // @synthesize orderStatus=_orderStatus;
@property(copy, nonatomic) NSString *orderAmount; // @synthesize orderAmount=_orderAmount;
@property(copy, nonatomic) NSString *commodityName; // @synthesize commodityName=_commodityName;
@property(copy, nonatomic) NSString *orderType; // @synthesize orderType=_orderType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithDict:(id)arg1;

@end
