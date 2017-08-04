//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MFMessageComposeViewControllerDelegate.h"
#import "UITextViewDelegate.h"

@class NSData, NSMutableArray, NSString, UIImage, UILabel, UITextView, UIViewController;

@interface PAShareActionView : UIView <UITextViewDelegate, MFMessageComposeViewControllerDelegate>
{
    NSString *_smsUrl;
    NSString *_donateBookShareType;
    long long _shareCount;
    NSString *_hasAdvise;
    NSString *_isActivityDetail;
    NSString *_type;
    long long _activityShareCount;
    id <PARSShareActionViewDelegate> _delegate;
    long long _shareComeFrom;
    NSString *_department;
    NSString *_activity_ID;
    CDUnknownBlockType _smsReslut;
    NSString *_weChatDescription;
    UIViewController *_containViewController;
    long long _actionCount;
    NSMutableArray *_actionsArr;
    UIView *_blackView;
    CDUnknownBlockType _smsaction;
    NSString *_shareTitle;
    NSString *_shareDescription;
    NSString *_shareExt;
    NSString *_imageUrl;
    NSData *_imageData;
    UIImage *_image;
    UILabel *_titleLabel;
    UIView *_shareMainView;
    UITextView *_textView;
    struct CGRect _lastFrame;
}

+ (void)shareToPlatform:(int)arg1 title:(id)arg2 description:(id)arg3 extensionURL:(id)arg4 imageURL:(id)arg5;
@property(nonatomic) struct CGRect lastFrame; // @synthesize lastFrame=_lastFrame;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *shareMainView; // @synthesize shareMainView=_shareMainView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *shareExt; // @synthesize shareExt=_shareExt;
@property(retain, nonatomic) NSString *shareDescription; // @synthesize shareDescription=_shareDescription;
@property(retain, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(copy, nonatomic) CDUnknownBlockType smsaction; // @synthesize smsaction=_smsaction;
@property(retain, nonatomic) UIView *blackView; // @synthesize blackView=_blackView;
@property(retain, nonatomic) NSMutableArray *actionsArr; // @synthesize actionsArr=_actionsArr;
@property(nonatomic) long long actionCount; // @synthesize actionCount=_actionCount;
@property(nonatomic) __weak UIViewController *containViewController; // @synthesize containViewController=_containViewController;
@property(copy, nonatomic) NSString *weChatDescription; // @synthesize weChatDescription=_weChatDescription;
@property(copy, nonatomic) CDUnknownBlockType smsReslut; // @synthesize smsReslut=_smsReslut;
@property(copy, nonatomic) NSString *activity_ID; // @synthesize activity_ID=_activity_ID;
@property(retain, nonatomic) NSString *department; // @synthesize department=_department;
@property(nonatomic) long long shareComeFrom; // @synthesize shareComeFrom=_shareComeFrom;
@property(nonatomic) __weak id <PARSShareActionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long activityShareCount; // @synthesize activityShareCount=_activityShareCount;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *isActivityDetail; // @synthesize isActivityDetail=_isActivityDetail;
@property(copy, nonatomic) NSString *hasAdvise; // @synthesize hasAdvise=_hasAdvise;
@property(nonatomic) long long shareCount; // @synthesize shareCount=_shareCount;
@property(retain, nonatomic) NSString *donateBookShareType; // @synthesize donateBookShareType=_donateBookShareType;
@property(retain, nonatomic) NSString *smsUrl; // @synthesize smsUrl=_smsUrl;
- (void).cxx_destruct;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)showSMSEditingView;
- (void)smsShare;
- (void)sinaShare;
- (void)weCharShare:(int)arg1;
- (id)wxSharedThumbData;
- (void)dismiss;
- (void)tapAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)closeActionSheet;
- (void)hideShareActionView;
- (void)actionButtonClick:(id)arg1;
- (void)drawDashLineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (void)tapGR;
- (void)addTopScroButton;
- (void)showShareView:(id)arg1;
- (void)hiddeShareView;
- (void)copyContent:(id)arg1;
- (void)setupScroButton;
- (void)setupAdviseContent;
- (void)setupLine;
- (void)setupTitleLabel;
- (void)showInView:(id)arg1;
- (void)show;
- (void)drawViewWithActionTitle:(id)arg1 image:(id)arg2 action:(CDUnknownBlockType)arg3;
- (void)addDefaultShareTypes:(id)arg1;
- (void)addActionWithTitle:(id)arg1 image:(id)arg2 action:(CDUnknownBlockType)arg3;
- (void)configureShareContentWithTitle:(id)arg1 shareDescription:(id)arg2 shareExt:(id)arg3 imageUrl:(id)arg4 image:(id)arg5 containerViewController:(id)arg6;
- (void)configureShareContentWithTitle:(id)arg1 shareDescription:(id)arg2 shareExt:(id)arg3 imageUrl:(id)arg4 imageData:(id)arg5 containerViewController:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
