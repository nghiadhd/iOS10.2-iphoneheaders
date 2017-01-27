/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayRenderer.h>

@interface MKTileOverlayRenderer : MKOverlayRenderer
-(void)reloadData;
-(id)initWithOverlay:(id)arg1 ;
-(void)drawMapRect:(SCD_Struct_MK1)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(BOOL)canDrawMapRect:(SCD_Struct_MK1)arg1 zoomScale:(double)arg2 ;
-(id)initWithTileOverlay:(id)arg1 ;
@end

