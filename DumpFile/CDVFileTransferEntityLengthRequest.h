//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDVFileTransferDelegate, NSURLConnection;

@interface CDVFileTransferEntityLengthRequest : NSObject
{
    NSURLConnection *_connection;
    CDVFileTransferDelegate *_originalDelegate;
}

- (void).cxx_destruct;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)initWithOriginalRequest:(id)arg1 andDelegate:(id)arg2;

@end
