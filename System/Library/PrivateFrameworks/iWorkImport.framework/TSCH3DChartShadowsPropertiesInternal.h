/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSCH3DShadowsRenderer;
#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3DCamera, TSCH3DDataBufferResource, NSObject;

@interface TSCH3DChartShadowsPropertiesInternal : NSObject {

	BOOL mEnabled;
	TSCH3DCamera* mCamera;
	TSCH3DDataBufferResource* mQuad;
	TSCH3DDataBufferResource* mTexcoords;
	TSCH3DDataBufferResource* mFadecoords;
	NSObject*<TSCH3DShadowsRenderer> mRenderer;
	box<glm::detail::tvec3<float> > mShadowPlanePadding;

}

@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) BOOL shadowPlaneValid; 
@property (nonatomic,retain) TSCH3DCamera * camera; 
@property (nonatomic,retain) TSCH3DDataBufferResource * quad; 
@property (nonatomic,retain) TSCH3DDataBufferResource * texcoords; 
@property (nonatomic,retain) TSCH3DDataBufferResource * fadecoords; 
@property (nonatomic,readonly) NSObject*<TSCH3DShadowsRenderer> renderer; 
-(TSCH3DDataBufferResource *)texcoords;
-(void)setTexcoords:(TSCH3DDataBufferResource *)arg1 ;
-(void)setupResources;
-(id)initWithCamera:(id)arg1 renderer:(id)arg2 ;
-(BOOL)shadowPlaneValid;
-(TSCH3DDataBufferResource *)fadecoords;
-(void)setFadecoords:(TSCH3DDataBufferResource *)arg1 ;
-(BOOL)enabled;
-(void)dealloc;
-(void)invalidate;
-(void)setEnabled:(BOOL)arg1 ;
-(TSCH3DDataBufferResource *)quad;
-(void)setQuad:(TSCH3DDataBufferResource *)arg1 ;
-(void)setCamera:(TSCH3DCamera *)arg1 ;
-(NSObject*<TSCH3DShadowsRenderer>)renderer;
-(TSCH3DCamera *)camera;
@end

