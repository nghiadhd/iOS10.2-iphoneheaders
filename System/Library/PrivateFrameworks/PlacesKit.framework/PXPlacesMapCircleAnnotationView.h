/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <MapKit/MKAnnotationView.h>

@class CATextLayer;

@interface PXPlacesMapCircleAnnotationView : MKAnnotationView {

	double _circleAnnotationSize;
	CATextLayer* _textLayer;

}

@property (nonatomic,retain) CATextLayer * textLayer;                  //@synthesize textLayer=_textLayer - In the implementation block
@property (assign,nonatomic) double circleAnnotationSize;              //@synthesize circleAnnotationSize=_circleAnnotationSize - In the implementation block
+(CGColorRef)colorForCircle;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setCircleAnnotationSize:(double)arg1 ;
-(double)circleAnnotationSize;
-(id)renderCircleWithRadius:(double)arg1 ;
-(id)renderTextLayerWithSize:(CGSize)arg1 usingFontName:(id)arg2 fontSize:(long long)arg3 text:(id)arg4 ;
-(void)setTextLayer:(CATextLayer *)arg1 ;
-(CATextLayer *)textLayer;
-(void)setCircleText:(id)arg1 ;
@end

