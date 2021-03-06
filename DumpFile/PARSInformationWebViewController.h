//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSMiliShopWebViewController.h"

#import "PARSShareActionHandlerDelegate.h"

@class NSString, PARSInformationInfo, PARSShareActionHandler, PARSShareActionView, UIButton;

@interface PARSInformationWebViewController : PARSMiliShopWebViewController <PARSShareActionHandlerDelegate>
{
    _Bool _showMoreBtn;
    PARSInformationInfo *_information;
    UIButton *_moreBtn;
    PARSShareActionHandler *_shareHandler;
    PARSShareActionView *_shareView;
}

@property(retain, nonatomic) PARSShareActionView *shareView; // @synthesize shareView=_shareView;
@property(retain, nonatomic) PARSShareActionHandler *shareHandler; // @synthesize shareHandler=_shareHandler;
@property(retain, nonatomic) UIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(nonatomic) PARSInformationInfo *information; // @synthesize information=_information;
@property(nonatomic) _Bool showMoreBtn; // @synthesize showMoreBtn=_showMoreBtn;
- (void).cxx_destruct;
- (void)shareView:(id)arg1 didSelectToShareWithType:(unsigned long long)arg2;
- (void)parsWebViewDidFinishLoad:(id)arg1;
- (void)pressShareBtn;
- (void)pressMoreBtn;
- (void)layoutSubview;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

