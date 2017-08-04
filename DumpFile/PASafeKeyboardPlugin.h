//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIWebView;

@interface PASafeKeyboardPlugin : NSObject
{
    NSString *_callbackId;
    NSString *_textFieldID;
    UIWebView *_webView;
}

@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSString *textFieldID; // @synthesize textFieldID=_textFieldID;
@property(retain, nonatomic) NSString *callbackId; // @synthesize callbackId=_callbackId;
- (void).cxx_destruct;
- (void)dealloc;
- (void)keyboardInput:(id)arg1;

@end
