//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSOldBaseUserHTTPRequest.h"

@class PARSCommentReportParmInfo;

@interface PARSCommentReportRequest : PARSOldBaseUserHTTPRequest
{
    PARSCommentReportParmInfo *_parmInfo;
}

@property(retain, nonatomic) PARSCommentReportParmInfo *parmInfo; // @synthesize parmInfo=_parmInfo;
- (void).cxx_destruct;
- (_Bool)shouldEncryptPhoneWithTimstamp;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (id)url;

@end
