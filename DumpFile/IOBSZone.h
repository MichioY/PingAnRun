//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IOBSServiceAddress;

@interface IOBSZone : NSObject
{
    IOBSServiceAddress *_up;
    IOBSServiceAddress *_upBackup;
}

+ (id)zone1;
+ (id)zone0;
+ (id)createWithHost:(id)arg1 backupHost:(id)arg2 ip1:(id)arg3 ip2:(id)arg4;
@property(readonly, nonatomic) IOBSServiceAddress *upBackup; // @synthesize upBackup=_upBackup;
@property(readonly, nonatomic) IOBSServiceAddress *up; // @synthesize up=_up;
- (void).cxx_destruct;
- (id)initWithUp:(id)arg1 upBackup:(id)arg2;

@end

