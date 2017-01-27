/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class EKTravelEngineHypothesis, UIImage;

@interface UpNextWidget.DetailedViewController : UIViewController <CLLocationManagerDelegate> {

	 showExpandedMode;
	 needsNewMapSnapshot;
	 needsMapPlaceholder;
	 lastKnownHypothesis;
	 lastKnownMapImage;
	 lastKnownCoordinate;
	 detailedView;
	 largeEventView;
	 largeReminderView;
	 smallElementsView;
	 lastKnownViewWidth;
	 timelinessAuthority;
	 outstandingHypothesizer;
	 outstandingSnapshotter;
	 locationManager;

}

@property (assign,nonatomic) BOOL showExpandedMode; 
@property (retain,nonatomic) EKTravelEngineHypothesis * lastKnownHypothesis; 
@property (retain,nonatomic) UIImage * lastKnownMapImage; 
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(BOOL)showExpandedMode;
-(void)setShowExpandedMode:(BOOL)arg1 ;
-(EKTravelEngineHypothesis *)lastKnownHypothesis;
-(void)setLastKnownHypothesis:(EKTravelEngineHypothesis *)arg1 ;
-(UIImage *)lastKnownMapImage;
-(void)setLastKnownMapImage:(UIImage *)arg1 ;
-(void)refresh:(id)arg1 events:(id)arg2 reminders:(id)arg3 ;
@end

