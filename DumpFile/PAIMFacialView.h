//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface PAIMFacialView : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    long long currentPage;
    unsigned long long currentFaceType;
    int currentFaceCount;
    NSMutableDictionary *emojiButtonQQ;
    NSMutableDictionary *emojiButtonDymic;
    struct CGPoint prevPoint;
    long long prevFaceBtnTag;
    _Bool _supportLongPress;
    id <facialViewDelegate> delegate;
    NSDictionary *currentFaceMap;
    NSArray *_facialArray;
}

@property(nonatomic) _Bool supportLongPress; // @synthesize supportLongPress=_supportLongPress;
@property(nonatomic) NSArray *facialArray; // @synthesize facialArray=_facialArray;
@property(retain, nonatomic) NSMutableDictionary *emojiButtonQQ; // @synthesize emojiButtonQQ;
@property(retain, nonatomic) NSMutableDictionary *emojiButtonDymic; // @synthesize emojiButtonDymic;
@property(nonatomic) NSDictionary *currentFaceMap; // @synthesize currentFaceMap;
@property(nonatomic) __weak id <facialViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)selected:(id)arg1;
- (void)loadDynamicFace;
- (void)loadQQFaceFromIndex:(int)arg1;
- (void)loadFacialView:(long long)arg1 type:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
