/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MCPlug.h>

@class NSString, MCContainerParallelizer;

@interface MCPlugParallel : MCPlug {

	void* mGeometry;
	short mZIndex;
	short mAudioPriority;
	NSString* mIDInSupercontainer;
	MCContainerParallelizer* mSupercontainer;
	double mTimeIn;
	double mOpacity;

}

@property (setter=setIDInSupercontainer:,getter=idInSupercontainer,copy) NSString * idInSupercontainer; 
@property (assign) MCContainerParallelizer * supercontainer; 
@property (assign,nonatomic) BOOL isTriggered; 
@property (assign,nonatomic) BOOL resetsTimeOnTrigger; 
@property (readonly) BOOL hasAbsoluteAspectRatio; 
@property (readonly) BOOL hasValidWidth; 
@property (assign,nonatomic) BOOL clipsContainer; 
@property (assign,nonatomic) double timeIn; 
@property (assign,nonatomic) short zIndex; 
@property (assign,nonatomic) short audioPriority; 
@property (assign,nonatomic) double opacity; 
@property (assign,nonatomic) CGPoint position; 
@property (assign,nonatomic) CGSize size; 
@property (readonly) double width; 
@property (readonly) double height; 
@property (readonly) double aspectRatio; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) double rotation; 
@property (assign,nonatomic) double rotationAngle; 
@property (assign,nonatomic) double positionZ; 
@property (assign,nonatomic) double zPosition; 
@property (assign,nonatomic) double rotationX; 
@property (assign,nonatomic) double xRotationAngle; 
@property (assign,nonatomic) double rotationY; 
@property (assign,nonatomic) double yRotationAngle; 
@property (assign,nonatomic) unsigned char currentLayoutIndex; 
@property (readonly) unsigned char countOfLayouts; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(BOOL)resetsTimeOnTrigger;
-(void)setXRotationAngle:(double)arg1 ;
-(unsigned char)countOfLayouts;
-(MCContainerParallelizer *)supercontainer;
-(void)setPositionZ:(double)arg1 ;
-(double)positionZ;
-(short)audioPriority;
-(CGSize)sizeForParentAspectRatio:(double)arg1 ;
-(void)setTimeIn:(double)arg1 ;
-(unsigned char)currentLayoutIndex;
-(double)xRotationAngle;
-(BOOL)isTriggered;
-(BOOL)clipsContainer;
-(void)demolish;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(NSString *)idInSupercontainer;
-(void)setYRotationAngle:(double)arg1 ;
-(void)setCurrentLayoutIndex:(unsigned char)arg1 ;
-(double)aspectRatioForParentAspectRatio:(double)arg1 ;
-(void)setIsTriggered:(BOOL)arg1 ;
-(double)yRotationAngle;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(double)timeIn;
-(void)setSupercontainer:(MCContainerParallelizer *)arg1 ;
-(void)setIDInSupercontainer:(id)arg1 ;
-(void)setAudioPriority:(short)arg1 ;
-(void)setClipsContainer:(BOOL)arg1 ;
-(void)setResetsTimeOnTrigger:(BOOL)arg1 ;
-(BOOL)hasValidWidth;
-(void)setWidth:(double)arg1 andAbsoluteAspectRatio:(double)arg2 ;
-(BOOL)hasAbsoluteAspectRatio;
-(void)setHeight:(double)arg1 andAbsoluteAspectRatio:(double)arg2 ;
-(id)init;
-(CGSize)size;
-(id)description;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(void)setSize:(CGSize)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(double)width;
-(void)setZPosition:(double)arg1 ;
-(double)height;
-(void)setRotation:(double)arg1 ;
-(double)rotation;
-(void)setZIndex:(short)arg1 ;
-(short)zIndex;
-(double)zPosition;
-(double)aspectRatio;
-(void)setRotationX:(double)arg1 ;
-(void)setRotationY:(double)arg1 ;
-(double)rotationX;
-(double)rotationY;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(id)imprint;
@end

