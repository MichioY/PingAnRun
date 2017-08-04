//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface PAZNDbObject : NSObject
{
    int _pk;
    NSMutableArray *_columeNames;
    NSMutableArray *_columeTypes;
}

+ (id)getAllProperties;
+ (id)getPropertys;
+ (id)transients;
+ (id)stringAsPropertyString:(id)arg1;
+ (id)getColumeAndTypeString;
+ (id)tableName;
@property(readonly, retain, nonatomic) NSMutableArray *columeTypes; // @synthesize columeTypes=_columeTypes;
@property(readonly, retain, nonatomic) NSMutableArray *columeNames; // @synthesize columeNames=_columeNames;
@property(nonatomic) int pk; // @synthesize pk=_pk;
- (void).cxx_destruct;
- (id)init;

@end
