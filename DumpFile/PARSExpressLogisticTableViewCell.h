//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class PARSExpressLogisticDetailInfo, UIImageView, UILabel;

@interface PARSExpressLogisticTableViewCell : UITableViewCell
{
    PARSExpressLogisticDetailInfo *_detailInfo;
    long long _position;
    UIImageView *_timeLine;
    UILabel *_line;
    UILabel *_detailLabel;
    UILabel *_dateLabel;
}

@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *line; // @synthesize line=_line;
@property(retain, nonatomic) UIImageView *timeLine; // @synthesize timeLine=_timeLine;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(retain, nonatomic) PARSExpressLogisticDetailInfo *detailInfo; // @synthesize detailInfo=_detailInfo;
- (void).cxx_destruct;
- (void)reloadData;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
