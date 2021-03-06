//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseViewController.h"

@class NSMutableArray, UIScrollView;

@interface PARSHCInfoShowMoreMemberViewController : PARSBaseViewController
{
    id _delegate;
    UIScrollView *_baseScrollview;
    NSMutableArray *_updatedDatasource;
    NSMutableArray *_buttonArray;
    struct CGSize _contentSize;
}

@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) NSMutableArray *updatedDatasource; // @synthesize updatedDatasource=_updatedDatasource;
@property(retain, nonatomic) UIScrollView *baseScrollview; // @synthesize baseScrollview=_baseScrollview;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addBtn:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

