//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PAIMMediaQiniuDownloaderDelegate.h"
#import "PAIMMediaUploaderDelegate.h"

@class NSLock, NSMutableArray, NSMutableDictionary, NSString, PAIMMediaUploader;

@interface PAIMMediaManager : NSObject <PAIMMediaUploaderDelegate, PAIMMediaQiniuDownloaderDelegate>
{
    NSLock *_lock;
    PAIMMediaUploader *_uploader;
    NSMutableArray *_downloaders;
    id <PAIMApiMessageDelegate> _delegate;
    id <PAIMApiMessageDelegate> _downloadDelegate;
    NSMutableDictionary *_uploadDic;
    NSMutableDictionary *_downloadDic;
}

+ (id)share;
@property(retain, nonatomic) NSMutableDictionary *downloadDic; // @synthesize downloadDic=_downloadDic;
@property(retain, nonatomic) NSMutableDictionary *uploadDic; // @synthesize uploadDic=_uploadDic;
@property(nonatomic) id <PAIMApiMessageDelegate> downloadDelegate; // @synthesize downloadDelegate=_downloadDelegate;
@property(nonatomic) id <PAIMApiMessageDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)savePermanentBytempPath:(id)arg1 style:(id)arg2 msgModel:(id)arg3;
- (void)cancelDownloadRequestByMsgId:(id)arg1 conversationId:(id)arg2;
- (void)removeDownloadersByMsgId:(id)arg1 conversationId:(id)arg2;
- (void)downloadMediaProgress:(double)arg1 userInfo:(id)arg2;
- (void)downloadMediaDone:(id)arg1 userInfo:(id)arg2;
- (void)downLoadMediaWithKey:(id)arg1 stylename:(id)arg2 contentType:(unsigned long long)arg3 userInfo:(id)arg4;
- (void)cancelUploadRequest;
- (void)removeUploaderByMsgId:(id)arg1 conversationID:(id)arg2;
- (void)addUploaderObject:(id)arg1 withConversationID:(id)arg2;
- (id)getUploaderArray:(id)arg1;
- (void)uploadMediaDidSuccessWithKey:(id)arg1 andObject:(id)arg2;
- (void)uploadMediaProgressUpdated:(float)arg1 object:(id)arg2;
- (void)uploadMediaDidFail:(id)arg1 object:(id)arg2;
- (unsigned long long)contentType2fileType:(unsigned long long)arg1;
- (void)uploadMessageModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

