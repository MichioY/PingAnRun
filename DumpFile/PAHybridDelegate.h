//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PAHybridDelegate : NSObject
{
    id <PAHybridHud> _hudDelegate;
    id <PAHybridZip> _zipDelegate;
    id <PAWebVContainerDelegate> _webDelegate;
    id <PARSADecryptDelegate> _decryptDelegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <PARSADecryptDelegate> decryptDelegate; // @synthesize decryptDelegate=_decryptDelegate;
@property(nonatomic) __weak id <PAWebVContainerDelegate> webDelegate; // @synthesize webDelegate=_webDelegate;
@property(nonatomic) __weak id <PAHybridZip> zipDelegate; // @synthesize zipDelegate=_zipDelegate;
@property(nonatomic) __weak id <PAHybridHud> hudDelegate; // @synthesize hudDelegate=_hudDelegate;
- (void).cxx_destruct;

@end
