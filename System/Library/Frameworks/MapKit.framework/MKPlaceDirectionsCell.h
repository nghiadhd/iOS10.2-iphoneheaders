/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>
#import <libobjc.A.dylib/MKQuickRouteManagerDelegate.h>
#import <libobjc.A.dylib/MKQuickRouteConfigurableView.h>
#import <libobjc.A.dylib/MKLocationManagerObserver.h>

@class UIButton, UILabel, NSLayoutConstraint, _MKQuickRouteManager, NSMutableArray, MKMapItem, NSString;

@interface MKPlaceDirectionsCell : MKPlaceSectionRowView <MKQuickRouteManagerDelegate, MKQuickRouteConfigurableView, MKLocationManagerObserver> {

	UIButton* _directionsButton;
	UIButton* _walkButton;
	UIButton* _transitButton;
	UIButton* _driveButton;
	UILabel* _walkTimeLabel;
	UILabel* _transitTimeLabel;
	UILabel* _driveTimeLabel;
	NSLayoutConstraint* _directionsToWalkButtonConstraint;
	NSLayoutConstraint* _directionsToTransitButtonConstraint;
	NSLayoutConstraint* _directionsToDriveButtonConstraint;
	NSLayoutConstraint* _walkButtonToTransitButtonConstraint;
	NSLayoutConstraint* _walkButtonToDriveButtonConstraint;
	NSLayoutConstraint* _transitButtonToDriveButtonConstraint;
	NSLayoutConstraint* _directionsTrailingConstraint;
	NSLayoutConstraint* _walkButtonTrailingConstraint;
	NSLayoutConstraint* _transitButtonTrailingConstraint;
	NSLayoutConstraint* _driveButtonTrailingConstraint;
	_MKQuickRouteManager* _quickRouteManager;
	NSMutableArray* _baseConstraints;
	NSMutableArray* _buttonBaselineConstraints;
	BOOL _offlineMode;
	MKMapItem* _mapItem;
	/*^block*/id _requestDirectionsBlock;

}

@property (nonatomic,retain) MKMapItem * mapItem;                   //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,copy) id requestDirectionsBlock;               //@synthesize requestDirectionsBlock=_requestDirectionsBlock - In the implementation block
@property (assign,nonatomic) BOOL offlineMode;                      //@synthesize offlineMode=_offlineMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(void)updateConstraints;
-(void)contentSizeDidChange;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(BOOL)offlineMode;
-(void)setOfflineMode:(BOOL)arg1 ;
-(void)quickRouteManager:(id)arg1 didUpdateETA:(id)arg2 error:(id)arg3 animated:(BOOL)arg4 ;
-(unsigned long long)preferredDirectionsTypeForQuickRoute;
-(BOOL)quickRouteShouldOnlyUseAutomobile;
-(BOOL)quickRouteShouldIncludeTransit;
-(id)timeEstimateFont;
-(id)newButtonWithImage:(id)arg1 andSelector:(SEL)arg2 ;
-(id)newLabel;
-(void)updateETAs:(BOOL)arg1 constraintsOnly:(BOOL)arg2 ;
-(void)updateETAFor:(unsigned long long)arg1 button:(id)arg2 label:(id)arg3 ;
-(void)_quickDirectionsTapped:(id)arg1 ;
-(void)_walkingDirectionsTapped:(id)arg1 ;
-(void)_transitDirectionsTapped:(id)arg1 ;
-(void)_drivingDirectionsTapped:(id)arg1 ;
-(id)requestDirectionsBlock;
-(void)setRequestDirectionsBlock:(id)arg1 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
@end

