//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, PARSPolicyServiceListCell;

@protocol PARSPolicyServiceListCellDelegate <NSObject>
- (void)cell:(PARSPolicyServiceListCell *)arg1 moveFromIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;
- (void)cell:(PARSPolicyServiceListCell *)arg1 didPressAtIndexPath:(NSIndexPath *)arg2;
- (void)cell:(PARSPolicyServiceListCell *)arg1 longPressBeforeEdit:(NSIndexPath *)arg2;
@end

