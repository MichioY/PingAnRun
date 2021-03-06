//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSString, PAIMUIExpandingTextView;

@protocol UIExpandingTextViewDelegate

@optional
- (void)inputMarkSymbol;
- (void)expandingTextViewPasteWithType:(unsigned long long)arg1 Data:(NSData *)arg2;
- (_Bool)expandingTextViewShouldReturn:(PAIMUIExpandingTextView *)arg1;
- (void)expandingTextViewDidChangeSelection:(PAIMUIExpandingTextView *)arg1;
- (void)expandingTextView:(PAIMUIExpandingTextView *)arg1 didChangeHeight:(float)arg2;
- (void)expandingTextView:(PAIMUIExpandingTextView *)arg1 willChangeHeight:(float)arg2;
- (void)expandingTextViewDidChange:(PAIMUIExpandingTextView *)arg1;
- (_Bool)expandingTextView:(PAIMUIExpandingTextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)expandingTextViewDidEndEditing:(PAIMUIExpandingTextView *)arg1;
- (void)expandingTextViewDidBeginEditing:(PAIMUIExpandingTextView *)arg1;
- (_Bool)expandingTextViewShouldEndEditing:(PAIMUIExpandingTextView *)arg1;
- (_Bool)expandingTextViewShouldBeginEditing:(PAIMUIExpandingTextView *)arg1;
@end

