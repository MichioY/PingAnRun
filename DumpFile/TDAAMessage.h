//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TDAAAppException, TDAAInitProfile, TDAASession;

@interface TDAAMessage : NSObject
{
    int _msgType;
    TDAASession *_session;
    TDAAInitProfile *_initProfile;
    TDAAAppException *_appException;
}

@property(retain, nonatomic) TDAAAppException *appException; // @synthesize appException=_appException;
@property(retain, nonatomic) TDAAInitProfile *initProfile; // @synthesize initProfile=_initProfile;
@property(retain, nonatomic) TDAASession *session; // @synthesize session=_session;
@property(nonatomic) int msgType; // @synthesize msgType=_msgType;
- (void).cxx_destruct;
- (void)messagePack:(struct msgpack_packer *)arg1;

@end

