//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

@interface CDVInAppBrowserNavigationController : UINavigationController
{
    id <CDVScreenOrientationDelegate> _orientationDelegate;
}

@property(nonatomic) __weak id <CDVScreenOrientationDelegate> orientationDelegate; // @synthesize orientationDelegate=_orientationDelegate;
- (void).cxx_destruct;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;

@end
