//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHMASConstraint.h"

@class PHMASLayoutConstraint, PHMASViewAttribute, UIView;

@interface PHMASViewConstraint : PHMASConstraint
{
    _Bool _hasLayoutRelation;
    _Bool _useAnimator;
    float _layoutPriority;
    PHMASViewAttribute *_firstViewAttribute;
    PHMASViewAttribute *_secondViewAttribute;
    UIView *_installedView;
    PHMASLayoutConstraint *_layoutConstraint;
    long long _layoutRelation;
    double _layoutMultiplier;
    double _layoutConstant;
    id _mas_key;
}

+ (id)installedConstraintsForView:(id)arg1;
@property(nonatomic) _Bool useAnimator; // @synthesize useAnimator=_useAnimator;
@property(retain, nonatomic) id mas_key; // @synthesize mas_key=_mas_key;
@property(nonatomic) _Bool hasLayoutRelation; // @synthesize hasLayoutRelation=_hasLayoutRelation;
@property(nonatomic) double layoutConstant; // @synthesize layoutConstant=_layoutConstant;
@property(nonatomic) double layoutMultiplier; // @synthesize layoutMultiplier=_layoutMultiplier;
@property(nonatomic) float layoutPriority; // @synthesize layoutPriority=_layoutPriority;
@property(nonatomic) long long layoutRelation; // @synthesize layoutRelation=_layoutRelation;
@property(nonatomic) __weak PHMASLayoutConstraint *layoutConstraint; // @synthesize layoutConstraint=_layoutConstraint;
@property(nonatomic) __weak UIView *installedView; // @synthesize installedView=_installedView;
@property(retain, nonatomic) PHMASViewAttribute *secondViewAttribute; // @synthesize secondViewAttribute=_secondViewAttribute;
@property(readonly, nonatomic) PHMASViewAttribute *firstViewAttribute; // @synthesize firstViewAttribute=_firstViewAttribute;
- (void).cxx_destruct;
- (void)uninstall;
- (id)layoutConstraintSimilarTo:(id)arg1;
- (void)install;
- (void)deactivate;
- (void)activate;
- (void)setCenterOffset:(struct CGPoint)arg1;
- (void)setSizeOffset:(struct CGSize)arg1;
- (void)setOffset:(double)arg1;
- (void)setInset:(double)arg1;
- (void)setInsets:(struct UIEdgeInsets)arg1;
- (CDUnknownBlockType)key;
- (id)addConstraintWithLayoutAttribute:(long long)arg1;
- (id)and;
- (id)with;
- (CDUnknownBlockType)equalToWithRelation;
- (CDUnknownBlockType)priority;
- (CDUnknownBlockType)dividedBy;
- (CDUnknownBlockType)multipliedBy;
- (_Bool)hasBeenInstalled;
- (_Bool)isActive;
- (_Bool)supportsActiveProperty;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFirstViewAttribute:(id)arg1;

@end

