//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CommentViewDelegate.h"

@class CommentViewController, NSString;

@interface PARSH5CommentManager : NSObject <CommentViewDelegate>
{
    CDUnknownBlockType _completionBlock;
    CommentViewController *_commentVC;
}

+ (id)sharedManager;
@property(retain, nonatomic) CommentViewController *commentVC; // @synthesize commentVC=_commentVC;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)reloadData:(id)arg1;
- (void)commentDone;
- (void)showCommentViewControllerWithActivityInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

