/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKAnnotationCalloutControllerDelegate;
#import <MapKit/MapKit-Structs.h>
@class MKAnnotationView;

@interface MKAnnotationCalloutController : NSObject {

	id<MKAnnotationCalloutControllerDelegate> _delegate;
	MKAnnotationView* _annotationView;
	SCD_Struct_MK13 _mapDisplayStyle;
	BOOL _needsCalloutUpdate;

}

@property (nonatomic,retain) MKAnnotationView * annotationView;                                      //@synthesize annotationView=_annotationView - In the implementation block
@property (assign,nonatomic,__weak) id<MKAnnotationCalloutControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK13 mapDisplayStyle;                                        //@synthesize mapDisplayStyle=_mapDisplayStyle - In the implementation block
-(void)setDelegate:(id<MKAnnotationCalloutControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MKAnnotationCalloutControllerDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_setTitle:(id)arg1 ;
-(BOOL)calloutContainsPoint:(CGPoint)arg1 ;
-(BOOL)isCalloutExpanded;
-(double)defaultCalloutHeight;
-(void)_updateCallout;
-(BOOL)_isShowingCallout;
-(void)_setSubtitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setLeftAccessoryView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setRightAccessoryView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setDetailAccessoryView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setAnnotationView:(MKAnnotationView *)arg1 ;
-(void)_calloutAccessoryControlTapped:(id)arg1 ;
-(void)_addAccessoryTargetForView:(id)arg1 ;
-(void)_removeAccessoryTargetForView:(id)arg1 ;
-(void)_removeAccessoryTargets;
-(void)_updateCalloutAnimated:(BOOL)arg1 ;
-(CGRect)_visibleCenteringRectInView:(id)arg1 ;
-(void)showCalloutForAnnotationView:(id)arg1 animated:(BOOL)arg2 scrollToFit:(BOOL)arg3 avoid:(CGRect)arg4 ;
-(void)hideCalloutAnimated:(BOOL)arg1 ;
-(void)_setNeedsCalloutUpdate;
-(MKAnnotationView *)annotationView;
-(SCD_Struct_MK13)mapDisplayStyle;
-(void)setMapDisplayStyle:(SCD_Struct_MK13)arg1 ;
-(id)_subtitle;
@end

