//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PAIMMediaBaseDownLoader.h"

#import "GetTokenDelegate.h"

@class NSString, PAIMGetTokenTool;

@interface PAIMMediaQiniuDownloader : PAIMMediaBaseDownLoader <GetTokenDelegate>
{
    PAIMGetTokenTool *_downloadToken;
    id _delegate;
    id _object;
}

@property(retain, nonatomic) id object; // @synthesize object=_object;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)setProgress:(float)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)token:(id)arg1;
- (void)downLoadMediaWithKey:(id)arg1 stylename:(id)arg2 contentType:(unsigned long long)arg3 userInfo:(id)arg4;
- (void)downloadThumbnailImageForVideo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
