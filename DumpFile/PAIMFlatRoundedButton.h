//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class PAIMApiFriendModel, UIColor;

@interface PAIMFlatRoundedButton : UIButton
{
    UIColor *borderColor;
    double borderWidth;
    PAIMApiFriendModel *touchedFriendModel;
}

@property(retain, nonatomic) PAIMApiFriendModel *touchedFriendModel; // @synthesize touchedFriendModel;
@property(nonatomic) double borderWidth; // @synthesize borderWidth;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor;
- (void).cxx_destruct;
- (void)PAIMsetImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3;

@end

