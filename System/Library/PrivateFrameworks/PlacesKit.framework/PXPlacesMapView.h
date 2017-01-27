/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <MapKit/MKMapView.h>

@interface PXPlacesMapView : MKMapView {

	double _currentScale;

}

@property (assign) unsigned long long pkMapType; 
@property (assign) double pitch; 
+(SCD_Struct_PX4)MKMapRectForCoordinateRegion:(SCD_Struct_PX4)arg1 ;
+(SCD_Struct_PX4)canonicalMapRect:(SCD_Struct_PX4)arg1 ;
+(SCD_Struct_PX4)mapRectForNearbyQueriesFromRect:(SCD_Struct_PX4)arg1 atScale:(double)arg2 targetViewSize:(CGSize)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(void)awakeFromNib;
-(void)setPitch:(double)arg1 ;
-(double)pitch;
-(double)zoomLevel;
-(unsigned long long)pkMapType;
-(void)setPkMapType:(unsigned long long)arg1 ;
-(id)currentViewPort;
-(id)currentViewPortWithThumbnailOverscan;
-(double)_radiansFromDegrees:(double)arg1 ;
-(double)_sampleMapDistanceFromViewPoint:(CGPoint)arg1 toViewPoint:(CGPoint)arg2 ;
-(void)deselectAllAnnotationsAnimated:(BOOL)arg1 ;
@end

