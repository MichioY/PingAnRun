//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PAIMXMPPModule.h"

@interface PAIMXMPPUserInfo : PAIMXMPPModule
{
    _Bool _bindWLT;
}

+ (id)sharedInstance;
@property(nonatomic, getter=isBindWLT) _Bool bindWLT; // @synthesize bindWLT=_bindWLT;
- (void)searchUserAgain:(id)arg1;
- (void)sendSearchNewUser:(id)arg1 withQueryType:(id)arg2 andID:(id)arg3;

@end

