//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PAHybridViewController.h"

@class UserInfoEntity;

@interface PAKeplerAccountViewController : PAHybridViewController
{
    UserInfoEntity *_userEntity;
}

+ (id)pageViewControllerMap;
@property(retain, nonatomic) UserInfoEntity *userEntity; // @synthesize userEntity=_userEntity;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end

