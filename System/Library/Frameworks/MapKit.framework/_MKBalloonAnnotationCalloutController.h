/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKAnnotationCalloutController.h>

@class _MKBalloonCalloutView, UITapGestureRecognizer, MKAnnotationView;

@interface _MKBalloonAnnotationCalloutController : MKAnnotationCalloutController {

	_MKBalloonCalloutView* _calloutView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	MKAnnotationView* _annotationView;

}

@property (nonatomic,retain) MKAnnotationView * annotationView;              //@synthesize annotationView=_annotationView - In the implementation block
-(BOOL)calloutContainsPoint:(CGPoint)arg1 ;
-(BOOL)_isShowingCallout;
-(void)setAnnotationView:(MKAnnotationView *)arg1 ;
-(void)showCalloutForAnnotationView:(id)arg1 animated:(BOOL)arg2 scrollToFit:(BOOL)arg3 avoid:(CGRect)arg4 ;
-(void)hideCalloutAnimated:(BOOL)arg1 ;
-(MKAnnotationView *)annotationView;
-(void)_showCalloutAnimated:(BOOL)arg1 scrollToFit:(BOOL)arg2 avoid:(CGRect)arg3 ;
-(void)_handleTapOnCallout:(id)arg1 ;
@end

