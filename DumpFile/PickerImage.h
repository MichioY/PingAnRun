//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALAsset, UIImage;

@interface PickerImage : NSObject
{
    _Bool _isSeleceted;
    _Bool _isVideo;
    UIImage *_image;
    long long _index;
    ALAsset *_asset;
}

@property(retain, nonatomic) ALAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(nonatomic) _Bool isSeleceted; // @synthesize isSeleceted=_isSeleceted;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;

@end
