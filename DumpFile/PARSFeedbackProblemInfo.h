//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@class NSArray, NSString;

@interface PARSFeedbackProblemInfo : PARSBaseInfo
{
    NSString *_name;
    NSString *_feedbackId;
    NSString *_isSync;
    NSArray *_list;
}

@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(retain, nonatomic) NSString *isSync; // @synthesize isSync=_isSync;
@property(retain, nonatomic) NSString *feedbackId; // @synthesize feedbackId=_feedbackId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)buildItem:(id)arg1;
- (id)initWithJson:(id)arg1;

@end

