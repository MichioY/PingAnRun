//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSDictionary, PAIMFaceToolBar, UIImageView, UIScrollView;

@interface PAIMPublicMeunView : UIView
{
    NSArray *subMeunArray;
    UIScrollView *contentView;
    UIImageView *arrowImageView;
    PAIMFaceToolBar *faceBar;
    NSDictionary *selectedMenu;
}

@property(retain, nonatomic) PAIMFaceToolBar *faceBar; // @synthesize faceBar;
- (void).cxx_destruct;
- (void)removeMeunSelf;
- (void)removeMeun;
- (void)showMeunUponFrame:(struct CGRect)arg1;
- (float)getMaxWith;
- (void)selectOrder:(id)arg1;
- (void)addBackButton;
- (void)addContentList;
- (id)initWithFrame:(struct CGRect)arg1 meunItem:(id)arg2;
- (void)dealloc;

@end
