//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAEmitterLayer, CALayer, NSDictionary, NSMutableDictionary;

@interface PARSConversationAnimationTrigger : NSObject
{
    CALayer *_containerLayer;
    NSDictionary *_triggerMessageQueue;
    NSMutableDictionary *_internalTriggerMessageDict;
    CAEmitterLayer *_eLayer;
}

+ (id)trigger;
@property(retain, nonatomic) CAEmitterLayer *eLayer; // @synthesize eLayer=_eLayer;
@property(retain, nonatomic) NSMutableDictionary *internalTriggerMessageDict; // @synthesize internalTriggerMessageDict=_internalTriggerMessageDict;
@property(retain, nonatomic) NSDictionary *triggerMessageQueue; // @synthesize triggerMessageQueue=_triggerMessageQueue;
@property(nonatomic) __weak CALayer *containerLayer; // @synthesize containerLayer=_containerLayer;
- (void).cxx_destruct;
- (id)getSmallSizeCakeCell;
- (id)getMiddleSizeCakeCell;
- (id)getLargeSizeCakeCell;
- (id)getSmallSizeSoleCell;
- (id)getMiddleSizeSoleCell;
- (id)getLargeSizeSoleCell;
- (id)getSmallSizeAppleCell;
- (id)getMiddleSizeAppleCell;
- (id)getLargeSizeAppleCell;
- (id)getSmallSizeEnvelopCell;
- (id)getMiddleSizeEnvelopCell;
- (id)getLargeSizeEnvelopCell;
- (id)getSmallSizeCoinCell;
- (id)getMiddleSizeCoinCell;
- (id)getLargeSizeCoinCell;
- (id)getSmallSizeLanternCell;
- (id)getMiddleSizeLanternCell;
- (id)getLargeSizeLanternCell;
- (id)getSmallSizeLikeCell;
- (id)getMiddleSizeLikeCell;
- (id)getLargeSizeLikeCell;
- (id)getBaseCell;
- (void)triggerAnimation:(id)arg1;
- (void)addTriggerMessage:(id)arg1 content:(id)arg2;
- (id)addItemWithKey:(id)arg1 cells:(id)arg2;
- (void)triggerAnimationByMessage:(id)arg1;
- (id)initWithContainerLayer:(id)arg1;

@end

