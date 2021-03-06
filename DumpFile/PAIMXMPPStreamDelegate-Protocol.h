//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSError, NSMutableDictionary, NSString, PAIMDDXMLElement, PAIMGCDAsyncSocket, PAIMXMPPIQ, PAIMXMPPMessage, PAIMXMPPPresence, PAIMXMPPStream;

@protocol PAIMXMPPStreamDelegate

@optional
- (void)xmppStream:(PAIMXMPPStream *)arg1 willUnregisterModule:(id)arg2;
- (void)xmppStream:(PAIMXMPPStream *)arg1 didRegisterModule:(id)arg2;
- (void)xmppStream:(PAIMXMPPStream *)arg1 willSendP2PFeatures:(PAIMDDXMLElement *)arg2;
- (void)xmppStream:(PAIMXMPPStream *)arg1 didReceiveP2PFeatures:(PAIMDDXMLElement *)arg2;
- (void)xmppStreamDidDisconnect:(PAIMXMPPStream *)arg1 withError:(NSError *)arg2;
- (void)xmppStreamConnectDidTimeout:(PAIMXMPPStream *)arg1;
- (void)xmppStreamWasToldToDisconnect:(PAIMXMPPStream *)arg1;
- (void)xmppStreamDidChangeMyJID:(PAIMXMPPStream *)arg1;
- (void)xmppStream:(PAIMXMPPStream *)arg1 didFailToSendPresence:(PAIMXMPPPresence *)arg2 error:(NSError *)arg3;
- (void)xmppStream:(PAIMXMPPStream *)arg1 didFailToSendMessage:(PAIMXMPPMessage *)arg2 error:(NSError *)arg3;
- (void)xmppStream:(PAIMXMPPStream *)arg1 didFailToSendIQ:(PAIMXMPPIQ *)arg2 error:(NSError *)arg3;
- (void)xmppStream:(PAIMXMPPStream *)arg1 didSendPresence:(PAIMXMPPPresence *)arg2;
- (void)xmppStream:(PAIMXMPPStream *)arg1 didSendMessage:(PAIMXMPPMessage *)arg2;
- (void)xmppStream:(PAIMXMPPStream *)arg1 didSendIQ:(PAIMXMPPIQ *)arg2;
- (PAIMXMPPPresence *)xmppStream:(PAIMXMPPStream *)arg1 willSendPresence:(PAIMXMPPPresence *)arg2;
- (PAIMXMPPMessage *)xmppStream:(PAIMXMPPStream *)arg1 willSendMessage:(PAIMXMPPMessage *)arg2;
- (PAIMXMPPIQ *)xmppStream:(PAIMXMPPStream *)arg1 willSendIQ:(PAIMXMPPIQ *)arg2;
- (void)xmppStream:(PAIMXMPPStream *)arg1 didReceiveError:(PAIMDDXMLElement *)arg2;
- (void)xmppStream:(PAIMXMPPStream *)arg1 didReceivePresence:(PAIMXMPPPresence *)arg2;
- (void)xmppStream:(PAIMXMPPStream *)arg1 didReceiveMessage:(PAIMXMPPMessage *)arg2;
- (_Bool)xmppStream:(PAIMXMPPStream *)arg1 didReceiveIQ:(PAIMXMPPIQ *)arg2;
- (PAIMXMPPPresence *)xmppStream:(PAIMXMPPStream *)arg1 willReceivePresence:(PAIMXMPPPresence *)arg2;
- (PAIMXMPPMessage *)xmppStream:(PAIMXMPPStream *)arg1 willReceiveMessage:(PAIMXMPPMessage *)arg2;
- (PAIMXMPPIQ *)xmppStream:(PAIMXMPPStream *)arg1 willReceiveIQ:(PAIMXMPPIQ *)arg2;
- (NSString *)xmppStream:(PAIMXMPPStream *)arg1 alternativeResourceForConflictingResource:(NSString *)arg2;
- (void)xmppStream:(PAIMXMPPStream *)arg1 didNotAuthenticate:(PAIMDDXMLElement *)arg2;
- (void)xmppStreamDidAuthenticate:(PAIMXMPPStream *)arg1;
- (void)xmppStream:(PAIMXMPPStream *)arg1 didNotRegister:(PAIMDDXMLElement *)arg2;
- (void)xmppStreamDidRegister:(PAIMXMPPStream *)arg1;
- (void)xmppStreamDidConnect:(PAIMXMPPStream *)arg1;
- (void)xmppStreamDidSecure:(PAIMXMPPStream *)arg1;
- (void)xmppStream:(PAIMXMPPStream *)arg1 willSecureWithSettings:(NSMutableDictionary *)arg2;
- (void)xmppStreamDidStartNegotiation:(PAIMXMPPStream *)arg1;
- (void)xmppStream:(PAIMXMPPStream *)arg1 socketDidConnect:(PAIMGCDAsyncSocket *)arg2;
- (void)xmppStreamWillConnect:(PAIMXMPPStream *)arg1;
@end

