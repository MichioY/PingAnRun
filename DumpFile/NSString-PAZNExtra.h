//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (PAZNExtra)
+ (struct CGSize)getStringSize:(id)arg1 fontSize:(float)arg2;
+ (_Bool)validateMobile:(id)arg1;
+ (_Bool)validateEmail:(id)arg1;
+ (_Bool)isAllNumberCharacters:(id)arg1;
+ (double)boundingRectWithSize:(double)arg1 withAttributedString:(id)arg2;
+ (struct CGRect)getRectWithSize:(double)arg1 withAttributedString:(id)arg2;
+ (id)jsonStringWithObject:(id)arg1;
+ (id)jsonStringWithDictionary:(id)arg1;
+ (id)jsonStringWithArray:(id)arg1;
+ (id)jsonStringWithString:(id)arg1;
+ (id)base64StringFromString:(id)arg1;
+ (_Bool)isContainsEmoji:(id)arg1;
+ (id)formatMoneyString:(id)arg1;
+ (id)normaPhoneNumber:(id)arg1;
+ (id)encryptWithString:(id)arg1 AndPublicKey:(id)arg2;
+ (id)defaultVaule:(id)arg1 forString:(id)arg2;
+ (id)MD5StringFrom:(id)arg1;
- (id)md5;
- (id)urlDecodedString;
- (id)mk_urlEncodedString;
- (int)examineUserNameString;
- (_Bool)examinePassWordString;
- (_Bool)IsChinese:(id)arg1;
- (id)rgbColor;
- (id)attributedStringWithFont:(id)arg1 withColor:(id)arg2 withLineSpacing:(double)arg3;
- (id)attributedStringWithFont:(id)arg1 withLineSpacing:(double)arg2;
- (double)stringHeightWithSize:(struct CGSize)arg1 font:(id)arg2;
- (double)stringWidthWithSize:(struct CGSize)arg1 font:(id)arg2;
- (double)boundingRectWithSize:(double)arg1 withAttributedString:(id)arg2;
- (double)boundingRectWithSize:(double)arg1 withTextFont:(id)arg2 withLineSpacing:(double)arg3;
- (id)stringByReversed;
- (id)dataFromHex;
- (id)composedStringToIndex:(int)arg1;
- (id)composedStringFromIndex:(int)arg1;
- (id)composedSubstringWithRange:(struct _NSRange)arg1;
- (struct _NSRange)composedRangeWithRange:(struct _NSRange)arg1;
- (id)URLDecodedString;
- (id)milliSecondString2Second;
- (_Bool)stringContainsEmoji;
- (id)stringEncoded;
- (_Bool)hasRangeOfStringCaseSensitive:(id)arg1;
- (_Bool)hasRangeOfString:(id)arg1;
- (id)base64Decoding;
- (_Bool)isBase64Data;
- (id)PAZNURLEncodedString;
@end
