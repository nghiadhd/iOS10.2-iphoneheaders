/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@interface SCNPyramid : SCNGeometry {

	double _pyramidwidth;
	double _pyramidheight;
	double _pyramidlength;
	long long _pyramidwidthSegmentCount;
	long long _pyramidheightSegmentCount;
	long long _pyramidlengthSegmentCount;
	long long _pyramidprimitiveType;

}

@property (assign,nonatomic) double width; 
@property (assign,nonatomic) double height; 
@property (assign,nonatomic) double length; 
@property (assign,nonatomic) long long widthSegmentCount; 
@property (assign,nonatomic) long long heightSegmentCount; 
@property (assign,nonatomic) long long lengthSegmentCount; 
+(BOOL)supportsSecureCoding;
+(id)pyramidWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copy;
-(double)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)width;
-(double)height;
-(void)setLength:(double)arg1 ;
-(void)setWidth:(double)arg1 ;
-(void)setHeight:(double)arg1 ;
-(long long)primitiveType;
-(BOOL)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(void)setPrimitiveType:(long long)arg1 ;
-(_C3DAnimationChannel*)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(id)presentationGeometry;
-(BOOL)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2 ;
-(_C3DGeometry*)__createCFObject;
-(void)_setupObjCModelFrom:(id)arg1 ;
-(void)_syncObjCModel:(_C3DParametricGeometry*)arg1 ;
-(id)initPresentationParametricGeometryWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(long long)widthSegmentCount;
-(void)setWidthSegmentCount:(long long)arg1 ;
-(long long)heightSegmentCount;
-(void)setHeightSegmentCount:(long long)arg1 ;
-(id)initWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(long long)lengthSegmentCount;
-(void)setLengthSegmentCount:(long long)arg1 ;
-(id)presentationPyramid;
@end

