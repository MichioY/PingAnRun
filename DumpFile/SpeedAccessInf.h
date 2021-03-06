//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SpeedAccessInf : NSObject
{
    unsigned int _access_ip;
    unsigned int _access_port;
    unsigned int _access_isp;
    unsigned int _access_country;
    unsigned int _access_prov;
    unsigned int _test_cnt;
    unsigned int _test_gap;
    unsigned int _test_timeout;
    unsigned int _test_pkg_size;
    NSMutableArray *_send_pkg_items;
    NSMutableArray *_recv_pkg_seq;
}

@property(retain, nonatomic) NSMutableArray *recv_pkg_seq; // @synthesize recv_pkg_seq=_recv_pkg_seq;
@property(retain, nonatomic) NSMutableArray *send_pkg_items; // @synthesize send_pkg_items=_send_pkg_items;
@property(nonatomic) unsigned int test_pkg_size; // @synthesize test_pkg_size=_test_pkg_size;
@property(nonatomic) unsigned int test_timeout; // @synthesize test_timeout=_test_timeout;
@property(nonatomic) unsigned int test_gap; // @synthesize test_gap=_test_gap;
@property(nonatomic) unsigned int test_cnt; // @synthesize test_cnt=_test_cnt;
@property(nonatomic) unsigned int access_prov; // @synthesize access_prov=_access_prov;
@property(nonatomic) unsigned int access_country; // @synthesize access_country=_access_country;
@property(nonatomic) unsigned int access_isp; // @synthesize access_isp=_access_isp;
@property(nonatomic) unsigned int access_port; // @synthesize access_port=_access_port;
@property(nonatomic) unsigned int access_ip; // @synthesize access_ip=_access_ip;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

