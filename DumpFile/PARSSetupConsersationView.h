//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UICollectionView, UILabel, UITableView;

@interface PARSSetupConsersationView : UIView
{
    id _delegate;
    UICollectionView *_topScrollView;
    UILabel *_placeHolder;
    UITableView *_tableview;
}

@property(retain, nonatomic) UITableView *tableview; // @synthesize tableview=_tableview;
@property(retain, nonatomic) UILabel *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(retain, nonatomic) UICollectionView *topScrollView; // @synthesize topScrollView=_topScrollView;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)topScrollItemAtIndexPath:(id)arg1;
- (void)changeTextFieldXWithCount:(unsigned long long)arg1;
- (void)reloadTopCollectionView;
- (void)reloadTableView;
- (void)buildSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

