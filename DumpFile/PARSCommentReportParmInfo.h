//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@class NSString;

@interface PARSCommentReportParmInfo : PARSBaseInfo
{
    NSString *_activityId;
    NSString *_commentId;
    NSString *_floor;
    NSString *_commentDate;
    NSString *_reportReason;
    NSString *_commentContent;
    NSString *_imageUrl;
    NSString *_thumbnailUrl;
}

@property(copy, nonatomic) NSString *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *commentContent; // @synthesize commentContent=_commentContent;
@property(copy, nonatomic) NSString *reportReason; // @synthesize reportReason=_reportReason;
@property(copy, nonatomic) NSString *commentDate; // @synthesize commentDate=_commentDate;
@property(copy, nonatomic) NSString *floor; // @synthesize floor=_floor;
@property(copy, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(copy, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
- (void).cxx_destruct;

@end

