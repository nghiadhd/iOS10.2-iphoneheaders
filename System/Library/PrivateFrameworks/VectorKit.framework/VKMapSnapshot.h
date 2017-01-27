/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class VKCamera;

@interface VKMapSnapshot : NSObject <NSSecureCoding> {

	CGImageRef _image;
	unsigned long long _width;
	unsigned long long _height;
	double _scale;
	VKCamera* _camera;
	BOOL _showingNoDataPlaceholders;

}

@property (nonatomic,readonly) double scale;                                                                   //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) CGImageRef image;                                                               //@synthesize image=_image - In the implementation block
@property (getter=isShowingNoDataPlaceholders,nonatomic,readonly) BOOL showingNoDataPlaceholders;              //@synthesize showingNoDataPlaceholders=_showingNoDataPlaceholders - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(CGImageRef)image;
-(double)scale;
-(id)_initWithImage:(CGImageRef)arg1 scale:(double)arg2 camera:(id)arg3 showingNoDataPlaceholders:(BOOL)arg4 ;
-(BOOL)writeImageToFile:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)imageDataInFormat:(unsigned long long)arg1 ;
-(BOOL)isShowingNoDataPlaceholders;
-(CGPoint)pointForCoordinate:(CGSize)arg1 ;
-(CGSize)coordinateForPoint:(CGPoint)arg1 ;
@end

