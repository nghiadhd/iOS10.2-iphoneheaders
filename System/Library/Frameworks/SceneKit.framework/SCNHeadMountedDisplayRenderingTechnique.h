/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNTechnique.h>
#import <libobjc.A.dylib/SCNStereoscopicRenderingTechnique.h>

@interface SCNHeadMountedDisplayRenderingTechnique : SCNTechnique <SCNStereoscopicRenderingTechnique>

@property (assign,nonatomic) double barrelDistortionInputScale; 
@property (assign,nonatomic) double barrelDistortionOutputScale; 
@property (assign,nonatomic) CGPoint barrelDistortionLensCenter; 
@property (assign,nonatomic) SCNVector4 barrelDistortionWarpCoefficients; 
@property (assign,nonatomic) double interaxialDistance; 
-(id)init;
-(void)setInteraxialDistance:(double)arg1 ;
-(double)interaxialDistance;
-(void)setBarrelDistortionInputScale:(double)arg1 ;
-(void)setBarrelDistortionOutputScale:(double)arg1 ;
-(void)setBarrelDistortionLensCenter:(CGPoint)arg1 ;
-(void)setBarrelDistortionWarpCoefficients:(SCNVector4)arg1 ;
-(double)barrelDistortionInputScale;
-(double)barrelDistortionOutputScale;
-(CGPoint)barrelDistortionLensCenter;
-(SCNVector4)barrelDistortionWarpCoefficients;
@end

