//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PARSMineHeaderCell, UITableView;

@interface PARSMineHeaderCellPresenter : NSObject
{
    UITableView *_tableView;
    PARSMineHeaderCell *_headerCell;
}

@property(retain, nonatomic) PARSMineHeaderCell *headerCell; // @synthesize headerCell=_headerCell;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)updateUserInfo;
- (id)headerCellForIndexPath:(id)arg1;
- (id)initWithTableView:(id)arg1;

@end

