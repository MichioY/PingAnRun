//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseSearchModule.h"

@class NSArray;

@interface PARSActivitySearchModule : PARSBaseSearchModule
{
    NSArray *_activities;
    NSArray *_searchItems;
}

@property(retain, nonatomic) NSArray *searchItems; // @synthesize searchItems=_searchItems;
@property(retain, nonatomic) NSArray *activities; // @synthesize activities=_activities;
- (void).cxx_destruct;
- (id)buildSearchableItems;
- (id)domainIdentifier;
- (id)initWithActivitiyInfos:(id)arg1;

@end

