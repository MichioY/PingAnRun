//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PAIMTXBaseViewController.h"

#import "MKMapViewDelegate.h"

@class MKMapView, NSString;

@interface PAIMDisplayFriendLocationViewController : PAIMTXBaseViewController <MKMapViewDelegate>
{
    MKMapView *innerMap;
    NSString *strLatitude;
    NSString *strLongitude;
    NSString *locationString;
    NSString *usernameString;
}

@property(retain, nonatomic) NSString *usernameString; // @synthesize usernameString;
@property(retain, nonatomic) NSString *strLongitude; // @synthesize strLongitude;
@property(retain, nonatomic) NSString *strLatitude; // @synthesize strLatitude;
@property(retain, nonatomic) NSString *locationString; // @synthesize locationString;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)createAnnotationWithCoords:(struct CLLocationCoordinate2D)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
