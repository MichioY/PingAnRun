//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface Config : NSObject
{
    NSMutableDictionary *dictConfig;
    NSMutableDictionary *dictTableData;
    NSMutableDictionary *dictData;
    NSMutableDictionary *dictDataSign;
    NSMutableDictionary *dictInfo;
    NSMutableDictionary *dictCameraInfo;
    NSMutableDictionary *arraySignCamera;
    NSMutableDictionary *signCameraInfo;
    NSMutableDictionary *_pointStrDic;
}

@property(retain, nonatomic) NSMutableDictionary *pointStrDic; // @synthesize pointStrDic=_pointStrDic;
- (void)clearSignCameraInfo:(id)arg1;
- (id)getSignCamera:(id)arg1;
- (void)setSignCamera:(id)arg1 value:(id)arg2;
- (id)getSignCameraInfo:(id)arg1;
- (void)setSignCameraInfo:(id)arg1 value:(id)arg2;
- (void)reset;
- (void)resetCameraPre;
- (id)getCameraPreInfoValue:(id)arg1;
- (_Bool)setCameraPreInfo:(id)arg1 value:(id)arg2;
- (id)getMyAllInfo;
- (id)getMyInfo:(id)arg1;
- (_Bool)setInfoMyValue:(id)arg1 value:(id)arg2;
- (void)releaseMyConfig;
- (id)getMyValue:(id)arg1;
- (id)getTableValue:(id)arg1;
- (_Bool)setConfigMyValue:(id)arg1 value:(id)arg2;
- (_Bool)setTableValue:(id)arg1 value:(id)arg2;
- (void)clearTable;
- (void)clearConfig;
- (id)getSignCid;
- (id)getSignData:(id)arg1 value:(id)arg2;
- (_Bool)setSignDictionary:(id)arg1 value:(id)arg2;
- (id)getSignDictionary:(id)arg1;
- (id)getSignValue:(id)arg1;
- (_Bool)setSignValue:(id)arg1 value:(id)arg2;
- (id)getAllPackageDic:(id)arg1 NSDicTmp:(id)arg2 NSDic:(id)arg3;
- (void)setConfigTid;
- (id)getMyidPackageDic:(id)arg1;
- (id)getPackageDic:(id)arg1 value:(id)arg2 NSDic:(id)arg3;
- (id)getConfigValue:(id)arg1 value:(id)arg2;
- (int)setConfigValue:(id)arg1 value:(id)arg2;
- (id)getConfigNSDictionary:(id)arg1;
- (id)getxml:(id)arg1;
- (id)getItemValue:(id)arg1;
- (id)init;

@end
