//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath;

@protocol PARSBreakRuleMainTableViewCellDelegate <NSObject>
- (void)cellDidDeleteWithIndexPath:(NSIndexPath *)arg1;
- (void)cellDidEditWithIndexPath:(NSIndexPath *)arg1;
- (void)scrollCanceled:(NSIndexPath *)arg1;
- (void)scrollEnded:(NSIndexPath *)arg1;
- (void)scrollBegan:(NSIndexPath *)arg1;
@end

