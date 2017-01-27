/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DRenderPipeline.h>

@class TSCH3DScene, TSCH3DGLFramebuffer, TSCH3DSceneRenderSetup, TSCH3DCamera, NSNumber;

@interface TSCH3DSceneRenderPipeline : TSCH3DRenderPipeline {

	TSCH3DSceneRenderPipeline* mOriginal;
	TSCH3DScene* mScene;
	TSCH3DGLFramebuffer* mFramebuffer;
	TSCH3DSceneRenderSetup* mSetup;
	TSCH3DCamera* mCamera;
	NSNumber* mScale;
	NSNumber* mSamples;
	NSNumber* mSuperSamples;
	NSNumber* mPreserveFramebufferContent;

}

@property (nonatomic,retain) TSCH3DSceneRenderPipeline * original; 
@property (nonatomic,readonly) TSCH3DCamera * camera; 
@property (nonatomic,retain) TSCH3DScene * scene; 
@property (nonatomic,retain) TSCH3DGLFramebuffer * framebuffer; 
@property (nonatomic,retain) TSCH3DSceneRenderSetup * setup; 
@property (assign,nonatomic) float scale; 
@property (nonatomic,readonly) float renderScale; 
@property (assign,nonatomic) float samples; 
@property (assign,nonatomic) float superSamples; 
@property (assign,nonatomic) BOOL preserveFramebufferContent; 
+(id)pipelineWithProcessor:(id)arg1 session:(id)arg2 scene:(id)arg3 ;
-(void)setSetup:(TSCH3DSceneRenderSetup *)arg1 ;
-(id)initWithProcessor:(id)arg1 session:(id)arg2 scene:(id)arg3 ;
-(void)setupRendering;
-(void)setObjectRenderMode:(int)arg1 ;
-(TSCH3DSceneRenderPipeline *)original;
-(id)baseRecloneWithProcessor:(id)arg1 scene:(id)arg2 ;
-(void)setOriginal:(TSCH3DSceneRenderPipeline *)arg1 ;
-(id)recloneWithPipelineClass:(Class)arg1 processor:(id)arg2 scene:(id)arg3 ;
-(id)recloneWithPipelineClass:(Class)arg1 retargetProcessor:(id)arg2 scene:(id)arg3 ;
-(float)superSamples;
-(BOOL)preserveFramebufferContent;
-(id)concreteSetup;
-(tvec4<float>)backgroundClearColor;
-(void)renderSelector:(SEL)arg1 ;
-(BOOL)activateFramebuffer:(id)arg1 ;
-(BOOL)renderWithFramebuffer:(id)arg1 ;
-(id)cloneWithProcessor:(id)arg1 scene:(id)arg2 ;
-(id)baseRecloneWithRetargetProcessor:(id)arg1 scene:(id)arg2 ;
-(id)cloneWithRetargetProcessor:(id)arg1 scene:(id)arg2 ;
-(void)setFramebuffer:(TSCH3DGLFramebuffer *)arg1 ;
-(void)setSuperSamples:(float)arg1 ;
-(void)setPreserveFramebufferContent:(BOOL)arg1 ;
-(void)clearCamera;
-(void)clearFramebuffer;
-(BOOL)shouldSkipLabelsIfHidden;
-(Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1 ;
-(id)labelsMeshRendererForLabelsRenderer:(id)arg1 ;
-(id)processor;
-(void)dealloc;
-(void)setScale:(float)arg1 ;
-(float)scale;
-(BOOL)run;
-(float)samples;
-(void)setSamples:(float)arg1 ;
-(id)session;
-(BOOL)render;
-(TSCH3DCamera *)camera;
-(void)setupCamera:(id)arg1 ;
-(float)renderScale;
-(void)setScene:(TSCH3DScene *)arg1 ;
-(TSCH3DScene *)scene;
-(TSCH3DSceneRenderSetup *)setup;
-(TSCH3DGLFramebuffer *)framebuffer;
@end

