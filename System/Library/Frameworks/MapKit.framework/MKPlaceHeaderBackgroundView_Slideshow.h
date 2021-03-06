/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceHeaderBackgroundView.h>

@class NSTimer, NSMutableArray, NSArray;

@interface MKPlaceHeaderBackgroundView_Slideshow : MKPlaceHeaderBackgroundView {

	NSTimer* _timer;
	NSMutableArray* _images;
	long long _nextImageIndex;
	unsigned long long _iteration;
	NSArray* _slides;
	struct {
		unsigned hasMultiplePhotos;
		unsigned isFirstImageRequested;
		unsigned isFirstImagePreloaded;
	}  _slideShowFlags;

}
+(BOOL)canDisplayImagesForMapItem:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)reset;
-(void)resume;
-(void)present;
-(void)pause;
-(void)prepareForPresentation;
-(void)addSlideShowImage:(id)arg1 ;
-(void)clearSlideShowImages;
-(void)loadBusinessImages:(unsigned long long)arg1 ;
-(void)preloadBackgroundContent;
-(void)loadBackgroundContent;
-(void)startBackgroundAnimation;
-(void)pauseBackgroundAnimation;
-(id)nextSlide;
-(id)currentSlide;
-(void)showNextImage;
@end

