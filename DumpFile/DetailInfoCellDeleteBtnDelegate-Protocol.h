//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSIndexPath, PARSMessageDetailInfo;

@protocol DetailInfoCellDeleteBtnDelegate <NSObject>
- (void)remarksCellShowContrntWithDic:(NSDictionary *)arg1 andCellIndexPath:(NSIndexPath *)arg2;
- (void)updateCellBackView:(NSIndexPath *)arg1 data:(PARSMessageDetailInfo *)arg2;
- (void)selectedDetailInfo:(PARSMessageDetailInfo *)arg1;
@end
