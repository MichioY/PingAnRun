//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@class NSArray, PARSModuleAdvertPopupInfo;

@interface PARSAdvertPopupInfo : PARSBaseInfo
{
    PARSModuleAdvertPopupInfo *_homeAdvertPopupInfo;
    PARSModuleAdvertPopupInfo *_financeAdvertPopupInfo;
    PARSModuleAdvertPopupInfo *_lifeAdvertPopupInfo;
    PARSModuleAdvertPopupInfo *_mineAdvertPopupInfo;
    NSArray *_popupInfos;
}

@property(retain, nonatomic) NSArray *popupInfos; // @synthesize popupInfos=_popupInfos;
@property(retain, nonatomic) PARSModuleAdvertPopupInfo *mineAdvertPopupInfo; // @synthesize mineAdvertPopupInfo=_mineAdvertPopupInfo;
@property(retain, nonatomic) PARSModuleAdvertPopupInfo *lifeAdvertPopupInfo; // @synthesize lifeAdvertPopupInfo=_lifeAdvertPopupInfo;
@property(retain, nonatomic) PARSModuleAdvertPopupInfo *financeAdvertPopupInfo; // @synthesize financeAdvertPopupInfo=_financeAdvertPopupInfo;
@property(retain, nonatomic) PARSModuleAdvertPopupInfo *homeAdvertPopupInfo; // @synthesize homeAdvertPopupInfo=_homeAdvertPopupInfo;
- (void).cxx_destruct;
- (id)initWithJson:(id)arg1;

@end

