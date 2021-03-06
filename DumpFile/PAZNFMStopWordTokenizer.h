//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PAZNFMTokenizerDelegate.h"

@class NSSet;

@interface PAZNFMStopWordTokenizer : NSObject <PAZNFMTokenizerDelegate>
{
    id <PAZNFMTokenizerDelegate> m_baseTokenizer;
    NSSet *m_words;
}

+ (id)tokenizerWithFileURL:(id)arg1 baseTokenizer:(id)arg2 error:(id *)arg3;
@property(copy) NSSet *words; // @synthesize words=m_words;
- (void).cxx_destruct;
- (void)closeTokenizerCursor:(struct PAZNFMTokenizerCursor *)arg1;
- (_Bool)nextTokenForCursor:(struct PAZNFMTokenizerCursor *)arg1;
- (void)openTokenizerCursor:(struct PAZNFMTokenizerCursor *)arg1;
- (id)initWithWords:(id)arg1 baseTokenizer:(id)arg2;

@end

