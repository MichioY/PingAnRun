//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSFTcpStateDelegate.h"

@class MSFTcpConnect, NSMutableDictionary, NSMutableString, NSString;

@interface MSFTcpEngine : NSObject <MSFTcpStateDelegate>
{
    unsigned int _uin;
    int _SCONN_NUM;
    int _PCONN_NUM;
    int _state;
    MSFTcpConnect *_conn;
    NSMutableDictionary *_conns;
    int _iSConnCount;
    int _iPConnCount;
    int _iTConnCount;
    struct IMSFTcpEngineEvent *_event;
    struct IMSFDataDelegate *_dataDelegate;
    NSMutableString *_connReason;
    NSMutableString *_connLog1;
    NSMutableString *_connLog2;
    _Bool _isWifi;
    _Bool _isConnLogReset;
    NSMutableString *_connToHttpLog2;
    _Bool _isConnToHttpLogReset;
}

@property(nonatomic) int iTConnCount; // @synthesize iTConnCount=_iTConnCount;
@property(retain, nonatomic) NSMutableString *connToHttpLog2; // @synthesize connToHttpLog2=_connToHttpLog2;
@property(retain, nonatomic) NSMutableString *connLog2; // @synthesize connLog2=_connLog2;
@property(retain, nonatomic) NSMutableString *connLog1; // @synthesize connLog1=_connLog1;
@property(retain, nonatomic) NSMutableString *connReason; // @synthesize connReason=_connReason;
@property(nonatomic) struct IMSFDataDelegate *dataDelegate; // @synthesize dataDelegate=_dataDelegate;
@property(nonatomic) struct IMSFTcpEngineEvent *event; // @synthesize event=_event;
@property(retain, nonatomic) NSMutableDictionary *conns; // @synthesize conns=_conns;
@property(retain, nonatomic) MSFTcpConnect *conn; // @synthesize conn=_conn;
@property(nonatomic) int PCONN_NUM; // @synthesize PCONN_NUM=_PCONN_NUM;
@property(nonatomic) int SCONN_NUM; // @synthesize SCONN_NUM=_SCONN_NUM;
- (void)resetConnToHttpLog;
- (void)addConnToHttpLog:(id)arg1;
- (void)beginConnToHttpLog;
- (void)addConnLog:(id)arg1;
- (void)beginConnLog;
- (void)onConnectErrorHandle:(int)arg1 errorType:(int)arg2;
- (void)onConnectFailHandle:(int)arg1 reason:(int)arg2;
- (void)onConnectSuccessHandle:(int)arg1;
- (void)onConnectedHandle:(int)arg1;
- (void)onConnect:(int)arg1 withState:(int)arg2 andExParam:(void *)arg3;
- (_Bool)doConnect;
- (id)connClinetIP;
- (_Bool)connUseProxy;
- (int)connProtocol;
- (int)connNum;
- (int)connPort;
- (id)connIP;
- (_Bool)tryWrite;
- (_Bool)isConnected;
- (_Bool)isConnecting;
- (void)clearConnect:(int)arg1;
- (void)buildConnect:(const char *)arg1 reason:(int)arg2 source:(int)arg3 isWifi:(_Bool)arg4 isChangeIP:(_Bool)arg5;
- (id)getNetNameString;
- (void)resetConnLog;
- (void)setIMEI:(const char *)arg1;
- (void)setAppId:(int)arg1;
- (void)setUin:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

