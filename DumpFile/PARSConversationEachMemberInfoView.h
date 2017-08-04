//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class PARSConversationMemberInfo, UIButton, UIImageView, UILabel;

@interface PARSConversationEachMemberInfoView : UIView
{
    id <PARSConversationEachMemberInfoViewDelegate> _delegate;
    PARSConversationMemberInfo *_member;
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UIButton *_deleteBtn;
}

@property(retain, nonatomic) UIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) PARSConversationMemberInfo *member; // @synthesize member=_member;
@property(nonatomic) __weak id <PARSConversationEachMemberInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)shake;
- (id)initWithMember:(id)arg1 withType:(unsigned long long)arg2;

@end
