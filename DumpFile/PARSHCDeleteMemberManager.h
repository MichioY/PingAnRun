//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface PARSHCDeleteMemberManager : NSObject
{
    NSArray *_memberListInfo;
    NSMutableArray *_selectedMemberListInfo;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *selectedMemberListInfo; // @synthesize selectedMemberListInfo=_selectedMemberListInfo;
@property(copy, nonatomic) NSArray *memberListInfo; // @synthesize memberListInfo=_memberListInfo;
- (void).cxx_destruct;
- (void)handleMemberListCellSelect:(id)arg1;
- (void)handleSelectedMemberInfo:(id)arg1;
- (unsigned long long)selectedMemberCount;
- (id)getCollectionListInfo;
- (void)clearAllData;

@end
