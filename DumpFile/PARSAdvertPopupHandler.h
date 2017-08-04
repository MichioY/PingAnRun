//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseUserHandler.h"

@class PARSAdvertPopupProvider;

@interface PARSAdvertPopupHandler : PARSBaseUserHandler
{
    PARSAdvertPopupProvider *_dataProvider;
}

@property(retain, nonatomic) PARSAdvertPopupProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
- (void).cxx_destruct;
- (void)downImagesWithPopupInfo:(id)arg1;
- (void)cacheAdvertPopupInfo:(id)arg1;
- (void)updateAdvertPopupStateWithModuleType:(long long)arg1;
- (void)fetchAdvertVersion:(CDUnknownBlockType)arg1;
- (void)fetchAdvertPopupInfoWithModuleType:(long long)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)requestAdvertPopupInfoWithAdvertVersion:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;

@end
