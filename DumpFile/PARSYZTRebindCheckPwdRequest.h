//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSProtalBaseUserHTTPRequest.h"

@class NSString;

@interface PARSYZTRebindCheckPwdRequest : PARSProtalBaseUserHTTPRequest
{
    NSString *_cellPhoneNum;
    NSString *_password;
    NSString *_loginUuid;
}

@property(copy, nonatomic) NSString *loginUuid; // @synthesize loginUuid=_loginUuid;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *cellPhoneNum; // @synthesize cellPhoneNum=_cellPhoneNum;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (id)url;

@end

