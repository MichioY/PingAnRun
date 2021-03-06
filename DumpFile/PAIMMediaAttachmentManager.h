//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GetTokenDelegate.h"

@class NSString, PAIMApiMessageModel, PAIMGetTokenTool;

@interface PAIMMediaAttachmentManager : NSObject <GetTokenDelegate>
{
    CDUnknownBlockType _endBlock;
    CDUnknownBlockType _completionBlock;
    PAIMGetTokenTool *_tokenTool;
    PAIMApiMessageModel *_msgModel;
}

@property(retain, nonatomic) PAIMApiMessageModel *msgModel; // @synthesize msgModel=_msgModel;
@property(retain, nonatomic) PAIMGetTokenTool *tokenTool; // @synthesize tokenTool=_tokenTool;
- (void).cxx_destruct;
- (void)dealloc;
- (void)token:(id)arg1;
- (void)asyncGetLargePhotoUrlForMessageModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createEndBlock;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

