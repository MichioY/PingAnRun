//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PARSAlertAction : NSObject
{
    NSString *_title;
    long long _titleStyle;
    CDUnknownBlockType _handler;
    long long _alignment;
    long long _alertViewBtnAlignment;
}

+ (id)actionWithTitle:(id)arg1 titleStyle:(long long)arg2 alignment:(long long)arg3 handler:(CDUnknownBlockType)arg4;
@property(nonatomic) long long alertViewBtnAlignment; // @synthesize alertViewBtnAlignment=_alertViewBtnAlignment;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) long long titleStyle; // @synthesize titleStyle=_titleStyle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
