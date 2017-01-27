/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDAnimationRandomGenerator;
#import <iWorkImport/iWorkImport-Structs.h>
@class TSDGLFrameBuffer, TSDGLShader, TSDGLDataBuffer, TSDGLState;

@interface TSDGLMotionBlurEffect : NSObject {

	CGSize _framebufferSize;
	CGSize _slideSize;
	TSDGLFrameBuffer* _combinedFramebuffer;
	TSDGLShader* _velocityVisualizerShader;
	TSDGLShader* _velocityCollectionShader;
	TSDGLFrameBuffer* _velocityFramebuffer;
	TSDGLShader* _defaultTextureShader;
	TSDGLFrameBuffer* _colorFramebuffer;
	TSDGLDataBuffer* _colorFBODataBuffer;
	TSDGLDataBuffer* _velocityFBODataBuffer;
	TSDGLDataBuffer* _velocitySquashedFBODataBuffer;
	TSDGLDataBuffer* _FBODataBuffer;
	TSDGLShader* _velocityTileMaxVerticalShader;
	TSDGLShader* _velocityTileMaxHorizontalShader;
	TSDGLShader* _velocityNeighborMaxHorizontalShader;
	TSDGLShader* _velocityNeighborMaxVerticalShader;
	int _originalViewport[4];
	id<TSDAnimationRandomGenerator> _randomGenerator;
	BOOL _isSingleObject;
	double _motionBlurStrength;
	long long _debugDrawMode;
	double _framebufferScale;
	TSDGLState* _GLState;

}

@property (assign,nonatomic) BOOL isSingleObject;                             //@synthesize isSingleObject=_isSingleObject - In the implementation block
@property (assign,nonatomic) double motionBlurStrength;                       //@synthesize motionBlurStrength=_motionBlurStrength - In the implementation block
@property (assign,nonatomic) long long debugDrawMode;                         //@synthesize debugDrawMode=_debugDrawMode - In the implementation block
@property (assign,nonatomic) double framebufferScale;                         //@synthesize framebufferScale=_framebufferScale - In the implementation block
@property (getter=LState,nonatomic,retain) TSDGLState * GLState;              //@synthesize GLState=_GLState - In the implementation block
-(void)p_updateMaxVelocityInShadersWithScale:(double)arg1 isColorFBO:(BOOL)arg2 ;
-(CGSize)velocityScaleForColorFBO:(BOOL)arg1 ;
-(double)motionBlurStrength;
-(void)setupMotionBlurEffectIfNecessary;
-(void)unbindFramebufferAndBindGLFramebuffer:(int)arg1 ;
-(long long)debugDrawMode;
-(void)p_blitIntoVelocityFramebufferWithCurrentGLFramebuffer:(int)arg1 ;
-(void)p_blitIntoColorFramebufferWithCurrentGLFramebuffer:(int)arg1 ;
-(void)p_dilateVelocityBufferWithCurrentGLFramebuffer:(int)arg1 ;
-(BOOL)isSingleObject;
-(CGSize)p_velocityFramebufferSize;
-(CGSize)p_squashedVelocityFramebufferSize;
-(void)p_setupShaders;
-(void)p_setupVelocityFramebufferIfNecessary;
-(CGSize)p_velocityFramebufferTextureScale;
-(id)initWithFramebufferSize:(CGSize)arg1 slideSize:(CGSize)arg2 randomGenerator:(id)arg3 ;
-(void)setMotionBlurStrength:(double)arg1 ;
-(void)updateVelocityScaleInShader:(id)arg1 ;
-(void)bindColorAndVelocityFramebuffer;
-(void)bindColorFramebuffer;
-(void)bindVelocityFramebuffer;
-(void)drawResultWithCurrentGLFramebuffer:(int)arg1 ;
-(void)setIsSingleObject:(BOOL)arg1 ;
-(void)setDebugDrawMode:(long long)arg1 ;
-(double)framebufferScale;
-(void)setFramebufferScale:(double)arg1 ;
-(TSDGLState *)GLState;
-(void)setGLState:(TSDGLState *)arg1 ;
-(void)dealloc;
-(id)description;
-(void)teardown;
@end

