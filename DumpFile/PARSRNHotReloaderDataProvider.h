//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSYYBaseCommonCacheProvider.h"

@class NSString, RACSignal;

@interface PARSRNHotReloaderDataProvider : PARSYYBaseCommonCacheProvider
{
    NSString *_rnDirPath;
    NSString *_rnFilesFatherDirPath;
    RACSignal *_rnDirPathSignal;
    RACSignal *_rnFilesFatherDirPathSignal;
}

@property(retain, nonatomic) RACSignal *rnFilesFatherDirPathSignal; // @synthesize rnFilesFatherDirPathSignal=_rnFilesFatherDirPathSignal;
@property(retain, nonatomic) RACSignal *rnDirPathSignal; // @synthesize rnDirPathSignal=_rnDirPathSignal;
@property(copy, nonatomic) NSString *rnFilesFatherDirPath; // @synthesize rnFilesFatherDirPath=_rnFilesFatherDirPath;
@property(copy, nonatomic) NSString *rnDirPath; // @synthesize rnDirPath=_rnDirPath;
- (void).cxx_destruct;
- (id)decompressZipFile:(id)arg1;
- (id)rnBundleDirOfVersion:(long long)arg1;
- (void)clearOldRNBundles;
- (id)queryRNCacheInfo;
- (id)saveRNUpdateInfo:(id)arg1;
- (id)checkRNFilesValid:(id)arg1;
- (id)queryRNFile:(id)arg1 ofVersion:(long long)arg2 md5:(id)arg3;
- (id)saveRNZipData:(id)arg1;
- (id)init;

@end
