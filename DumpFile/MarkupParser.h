//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, UIColor;

@interface MarkupParser : NSObject
{
    NSString *font;
    UIColor *color;
    UIColor *strokeColor;
    float stokeWidth;
    NSMutableArray *images;
    float strokeWidth;
}

@property(retain, nonatomic) NSMutableArray *images; // @synthesize images;
@property float strokeWidth; // @synthesize strokeWidth;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color;
@property(retain, nonatomic) NSString *font; // @synthesize font;
- (void)dealloc;
- (id)attrStringFromMarkup:(id)arg1;
- (id)escapedString:(id)arg1;
- (id)init;

@end
