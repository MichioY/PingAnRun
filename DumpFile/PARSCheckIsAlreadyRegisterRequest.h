//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSOldHTTPRequest.h"

@class NSDictionary, NSString;

@interface PARSCheckIsAlreadyRegisterRequest : PARSOldHTTPRequest
{
    NSString *_phoneNo;
    NSDictionary *_result;
}

@property(retain, nonatomic) NSDictionary *result; // @synthesize result=_result;
@property(retain, nonatomic) NSString *phoneNo; // @synthesize phoneNo=_phoneNo;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (id)url;

@end
