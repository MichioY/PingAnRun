//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIToolbar.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIExpandingTextViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "facialViewDelegate.h"

@class NSData, NSDictionary, NSMutableArray, NSMutableString, NSString, PAIMUIExpandingTextView, UIButton, UICollectionView, UIImageView, UIPageControl, UIScrollView, UIView;

@interface PARSLiveChatToolBar : UIToolbar <facialViewDelegate, UIExpandingTextViewDelegate, UIScrollViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    PAIMUIExpandingTextView *textView;
    UIButton *faceButton;
    UIButton *sendButton;
    _Bool toolBarIsUp;
    _Bool keyboardIsShow;
    UICollectionView *scrollView;
    UIPageControl *pageControl;
    UIView *allEmijoView;
    _Bool isRecording;
    _Bool isPlaying;
    NSData *pasteData;
    unsigned long long currentPasteType;
    unsigned long long currentFace;
    NSString *_msgTo;
    NSMutableArray *meunList;
    long long currentShowMeun;
    NSMutableString *resultStr;
    int recordVolume;
    double expandedToolBarHeight;
    UIScrollView *facialListScrollView;
    UIImageView *preImage;
    int totalPage;
    int faceHasLoaded;
    _Bool _enableSendRedPacket;
    UIView *theSuperView;
    id <PARSLiveChatToolBarDelegate> barDelegate;
    NSDictionary *currentFaceMap;
    UIToolbar *toolBar;
    UIView *allEmojiView;
}

@property(nonatomic) _Bool enableSendRedPacket; // @synthesize enableSendRedPacket=_enableSendRedPacket;
@property(retain, nonatomic) UIView *allEmojiView; // @synthesize allEmojiView;
@property(nonatomic) _Bool toolBarIsUp; // @synthesize toolBarIsUp;
@property(retain, nonatomic) UIToolbar *toolBar; // @synthesize toolBar;
@property(retain, nonatomic) PAIMUIExpandingTextView *textView; // @synthesize textView;
@property(nonatomic) long long currentShowMeun; // @synthesize currentShowMeun;
@property(retain, nonatomic) NSMutableArray *meunList; // @synthesize meunList;
@property(retain, nonatomic) NSDictionary *currentFaceMap; // @synthesize currentFaceMap;
@property(nonatomic) unsigned long long currentPasteType; // @synthesize currentPasteType;
@property(retain, nonatomic) NSData *pasteData; // @synthesize pasteData;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying;
@property(nonatomic) __weak id <PARSLiveChatToolBarDelegate> barDelegate; // @synthesize barDelegate;
@property(retain, nonatomic) UIView *theSuperView; // @synthesize theSuperView;
- (void).cxx_destruct;
- (void)expandingTextView:(id)arg1 didChangeHeight:(float)arg2;
- (id)MyEncodedString:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)expandingTextViewPasteWithType:(unsigned long long)arg1 Data:(id)arg2;
- (void)dealloc;
- (void)selectedFacialView:(id)arg1;
- (void)inputKeyboardWillChangeFrame:(id)arg1;
- (void)inputKeyboardWillHide:(id)arg1;
- (void)inputKeyboardWillShow:(id)arg1;
- (float)superViewHeight;
- (void)disFaceKeyboard:(id)arg1;
- (void)showEmojiBoard;
- (void)dismiss;
- (void)sendAction;
- (_Bool)expandingTextViewShouldReturn:(id)arg1;
- (void)expandingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (void)expandingTextViewDidBeginEditing:(id)arg1;
- (_Bool)expandingTextViewShouldBeginEditing:(id)arg1;
- (void)inputMarkSymbol;
- (void)rePlaceButtons;
- (void)resetButtonFrame:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)caculatePageControl:(long long)arg1;
- (void)changeFaceViewByScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)loadAllFaceImages;
- (void)changeFaceView:(id)arg1;
- (void)selectMeun:(id)arg1;
- (void)removeNotification;
- (void)addNotification;
- (void)showKeyboard;
- (void)loadFacialPanel;
- (void)resetToolBar;
- (id)initWithFrame:(struct CGRect)arg1 msgTo:(id)arg2 superView:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)initToolBarWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

