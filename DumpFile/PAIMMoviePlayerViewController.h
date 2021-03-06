//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PAIMTXBaseViewController.h"

@class MPMoviePlayerController, NSString, PAIMApiMessageModel, UIButton, UIImageView, UILabel, UIProgressView;

@interface PAIMMoviePlayerViewController : PAIMTXBaseViewController
{
    UIProgressView *loadingIndicator;
    UIImageView *downloadingView;
    UILabel *downloadingLabel;
    UIImageView *downErrorView;
    UIButton *redownloadBtn;
    int i;
    _Bool _isSelect;
    _Bool _existVideoFile;
    MPMoviePlayerController *_moviePlayer;
    NSString *_movieUrl;
    PAIMApiMessageModel *_chatData;
}

@property(nonatomic) _Bool existVideoFile; // @synthesize existVideoFile=_existVideoFile;
@property(retain, nonatomic) PAIMApiMessageModel *chatData; // @synthesize chatData=_chatData;
@property(nonatomic) _Bool isSelect; // @synthesize isSelect=_isSelect;
@property(retain, nonatomic) NSString *movieUrl; // @synthesize movieUrl=_movieUrl;
@property(retain, nonatomic) MPMoviePlayerController *moviePlayer; // @synthesize moviePlayer=_moviePlayer;
- (void).cxx_destruct;
- (void)moviePlayBackDidFinish:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)selectVideo;
- (void)play;
- (void)redownload;
- (void)addDownloadErrorView;
- (void)downloadMediaWithProgress:(double)arg1;
- (void)finishDownloadMedia:(id)arg1;
- (void)downloadVideo;
- (void)addDownloadingView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)onBackBarButtonItem:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (id)init;
- (void)dealloc;

@end

