//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PAZNFMTokenizerDelegate.h"

@interface PAZNFMSimpleTokenizer : NSObject <PAZNFMTokenizerDelegate>
{
    struct __CFLocale *m_locale;
}

- (void)closeTokenizerCursor:(struct PAZNFMTokenizerCursor *)arg1;
- (_Bool)nextTokenForCursor:(struct PAZNFMTokenizerCursor *)arg1;
- (void)openTokenizerCursor:(struct PAZNFMTokenizerCursor *)arg1;
- (void)dealloc;
- (id)initWithLocale:(struct __CFLocale *)arg1;

@end
