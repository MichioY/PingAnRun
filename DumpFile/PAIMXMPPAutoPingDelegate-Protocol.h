//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class PAIMXMPPAutoPing;

@protocol PAIMXMPPAutoPingDelegate

@optional
- (void)xmppAutoPingDidTimeout:(PAIMXMPPAutoPing *)arg1;
- (void)xmppAutoPingDidReceivePong:(PAIMXMPPAutoPing *)arg1;
- (void)xmppAutoPingDidSendPing:(PAIMXMPPAutoPing *)arg1;
@end
