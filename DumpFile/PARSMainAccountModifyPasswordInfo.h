//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@class NSString;

@interface PARSMainAccountModifyPasswordInfo : PARSBaseInfo
{
    NSString *_modifyResult;
    NSString *_memo;
}

@property(readonly, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(readonly, nonatomic) NSString *modifyResult; // @synthesize modifyResult=_modifyResult;
- (void).cxx_destruct;
- (id)initWithJson:(id)arg1;

@end
