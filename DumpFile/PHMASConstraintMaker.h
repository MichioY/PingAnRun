//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MASConstraintDelegate.h"

@class NSMutableArray, NSString, PHMASConstraint, UIView;

@interface PHMASConstraintMaker : NSObject <MASConstraintDelegate>
{
    _Bool _updateExisting;
    _Bool _removeExisting;
    UIView *_view;
    NSMutableArray *_constraints;
}

@property(retain, nonatomic) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) _Bool removeExisting; // @synthesize removeExisting=_removeExisting;
@property(nonatomic) _Bool updateExisting; // @synthesize updateExisting=_updateExisting;
- (void).cxx_destruct;
- (CDUnknownBlockType)group;
@property(readonly, nonatomic) PHMASConstraint *center;
@property(readonly, nonatomic) PHMASConstraint *size;
@property(readonly, nonatomic) PHMASConstraint *edges;
@property(readonly, nonatomic) CDUnknownBlockType attributes;
@property(readonly, nonatomic) PHMASConstraint *baseline;
@property(readonly, nonatomic) PHMASConstraint *centerY;
@property(readonly, nonatomic) PHMASConstraint *centerX;
@property(readonly, nonatomic) PHMASConstraint *height;
@property(readonly, nonatomic) PHMASConstraint *width;
@property(readonly, nonatomic) PHMASConstraint *trailing;
@property(readonly, nonatomic) PHMASConstraint *leading;
@property(readonly, nonatomic) PHMASConstraint *bottom;
@property(readonly, nonatomic) PHMASConstraint *right;
@property(readonly, nonatomic) PHMASConstraint *top;
@property(readonly, nonatomic) PHMASConstraint *left;
- (id)addConstraintWithLayoutAttribute:(long long)arg1;
- (id)addConstraintWithAttributes:(long long)arg1;
- (id)constraint:(id)arg1 addConstraintWithLayoutAttribute:(long long)arg2;
- (void)constraint:(id)arg1 shouldBeReplacedWithConstraint:(id)arg2;
- (id)install;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
