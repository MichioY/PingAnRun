//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PARSCustomerAgentShowInfo, PARSMineContainerCell, UITableView;

@interface PARSMineContainerCellPresenter : NSObject
{
    UITableView *_tableView;
    PARSMineContainerCell *_containerCell;
    PARSCustomerAgentShowInfo *_info;
}

@property(retain, nonatomic) PARSCustomerAgentShowInfo *info; // @synthesize info=_info;
@property(retain, nonatomic) PARSMineContainerCell *containerCell; // @synthesize containerCell=_containerCell;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)clickIconWithTitle:(id)arg1;
- (void)updateRedDot;
- (id)containerCellForIndexPath:(id)arg1;
- (id)initWithTableView:(id)arg1;

@end
