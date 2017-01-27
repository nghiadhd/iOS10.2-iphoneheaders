/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MZMediaManagement;
#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class EAGLContext, MRImageManager, MRContextState, NSMutableDictionary, MRShader, MRImage;

@interface MRContext : NSObject {

	MRContext* mBaseContext;
	EAGLContext* mGLContext;
	CGPoint mPixelOffset;
	CGSize mPixelSize;
	unsigned long long mVRAM;
	int mMaxTextureSize;
	float mFieldOfViewFactor;
	float mProjectionMatrix[16];
	float mProjectionMatrixWithOrientationCorrection[16];
	int mOrientation;
	id<MZMediaManagement> mAssetManager;
	MRImageManager* mImageManager;
	BOOL mIsLocalContext;
	BOOL mIsFlipped;
	MRContextState* mOuterState;
	MRContextState* mInnerState;
	NSMutableDictionary* mVertexAttributes;
	BOOL mCurrentVBOWasUpdated;
	BOOL mForceShaderUpdate;
	float mLocalAspectRatio;
	int mScissorRect[4];
	MRShader* mCurrentShader;
	MRImage* mTextureUnitImages[4];
	unsigned mActiveTextureUnit;
	int mRenderBuffer;
	MRImage* mBlackImage;
	BOOL _meshIsBound;
	int _dimensionalMode;

}

@property (readonly) MRContext * baseContext; 
@property (readonly) EAGLContext * glContext; 
@property (retain) id<MZMediaManagement> assetManager; 
@property (readonly) MRImageManager * imageManager; 
@property (readonly) CGColorSpaceRef colorSpace; 
@property (readonly) CGColorSpaceRef monochromaticColorSpace; 
@property (nonatomic,readonly) unsigned long long virtualScreen; 
@property (assign,nonatomic) CGPoint pixelOffset; 
@property (assign,nonatomic) CGSize pixelSize; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) float aspectRatio; 
@property (assign,nonatomic) int orientation; 
@property (assign,nonatomic) float localAspectRatio; 
@property (nonatomic,readonly) unsigned long long vram; 
@property (readonly) int maxTextureSize; 
@property (assign,nonatomic) BOOL isFlipped; 
@property (nonatomic,readonly) BOOL isDoubleBuffered; 
@property (nonatomic,readonly) unsigned maxDimension; 
@property (nonatomic,readonly) const float* foreColor; 
@property (nonatomic,readonly) BOOL foreColorIsOpaqueWhite; 
@property (nonatomic,readonly) const float* backColor; 
@property (nonatomic,readonly) const float* modelViewMatrix; 
@property (nonatomic,readonly) const float* projectionMatrix; 
@property (assign,nonatomic) int dimensionalMode;                             //@synthesize dimensionalMode=_dimensionalMode - In the implementation block
-(void)setVertex3DPointer:(const float*)arg1 ;
-(CGColorSpaceRef)monochromaticColorSpace;
-(id)imageSetOnTextureUnit:(unsigned long long)arg1 ;
-(void)setInSpriteCoordinatesPointer:(const float*)arg1 ;
-(id)retainedByUserBlackImage;
-(void)drawTrianglesFromOffset:(unsigned long long)arg1 count:(unsigned long long)arg2 ;
-(void)unsetInSpriteCoordinatesPointer;
-(void)restoreBackColor:(const float*)arg1 ;
-(void)unsetColorsPointer;
-(void)setVertex2DPointer:(const float*)arg1 ;
-(SCD_Struct_MR7)clippedSizeWithSize:(CGSize)arg1 ;
-(void)setShaderUniformVec4:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4 forKey:(id)arg5 ;
-(void)unsetVertexPointer;
-(MRContext *)baseContext;
-(unsigned long long)vram;
-(void)unsetImage:(id)arg1 onTextureUnit:(unsigned long long)arg2 state:(const SCD_Struct_MR11*)arg3 ;
-(unsigned)maxDimension;
-(void)setNormal:(float)arg1 :(float)arg2 :(float)arg3 ;
-(void)composeModelViewMatrix:(float)arg1 saveTo:(float*)arg2 ;
-(void)restoreModelViewMatrix:(float)arg1 ;
-(void)setBackColor:(const float*)arg1 saveTo:(float*)arg2 ;
-(int)dimensionalMode;
-(void)unsetShader;
-(void)blend:(int)arg1 ;
-(const float*)modelViewMatrix;
-(BOOL)foreColorIsOpaqueWhite;
-(void)restoreForeColor:(const float*)arg1 ;
-(id)beginLocalContextWithSize:(CGSize)arg1 backgroundColor:(const float*)arg2 state:(SCD_Struct_MR22*)arg3 ;
-(id)retainedByUserImageByEndingLocalContext:(id)arg1 andRestoreState:(const SCD_Struct_MR22*)arg2 ;
-(void)composeForeColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 saveTo:(float*)arg5 ;
-(void)setLocalAspectRatio:(float)arg1 ;
-(float)localAspectRatio;
-(void)setImage:(id)arg1 onTextureUnit:(unsigned long long)arg2 withReferenceAspectRatio:(float)arg3 state:(SCD_Struct_MR11*)arg4 ;
-(id)initWithEAGLContext:(id)arg1 andAssetManager:(id)arg2 ;
-(void)setForeColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 saveTo:(float*)arg5 ;
-(void)snapshotWithTextureName:(int)arg1 offset:(CGPoint)arg2 size:(CGSize)arg3 ;
-(id)initLocalWithContext:(id)arg1 glContext:(id)arg2 andSize:(CGSize)arg3 ;
-(void)setTextureCoordinatesPointer:(const float*)arg1 onTextureUnit:(unsigned long long)arg2 ;
-(void)drawTriangleStripFromOffset:(unsigned long long)arg1 count:(unsigned long long)arg2 ;
-(void)unsetTextureCoordinatesPointerOnTextureUnit:(unsigned long long)arg1 ;
-(void)setBackColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 saveTo:(float*)arg5 ;
-(void)drawTriangleFanFromOffset:(unsigned long long)arg1 count:(unsigned long long)arg2 ;
-(void)setModelViewMatrix:(float)arg1 saveTo:(float*)arg2 ;
-(void)restoreScissorRect:(const int*)arg1 ;
-(void)setScissorRect:(const int*)arg1 saveTo:(int*)arg2 ;
-(void)updateGeometry;
-(void)cull:(int)arg1 ;
-(void)purgeResources:(BOOL)arg1 ;
-(BOOL)shaderIsSet;
-(void)uploadBuffer:(void*)arg1 withSize:(int)arg2 toVertexBuffer2D:(unsigned)arg3 usage:(unsigned)arg4 ;
-(void)setVertexBuffer2D:(unsigned)arg1 withFeatures:(unsigned long long)arg2 ;
-(void)_computeProjectionMatrixWithOrientationCorrection;
-(id)initLocalWithContext:(id)arg1 texture:(id)arg2 andSize:(CGSize)arg3 ;
-(void)setForeColor:(const float*)arg1 saveTo:(float*)arg2 ;
-(void)setTextureMatrix:(float)arg1 onTextureUnit:(unsigned long long)arg2 ;
-(void)setShaderUniformInt:(int)arg1 forKey:(id)arg2 ;
-(void)_commitOuterToInner;
-(void)_updateTextureOnUnit:(unsigned long long)arg1 ;
-(BOOL)commitShaderChange;
-(void)setPixelOffset:(CGPoint)arg1 ;
-(void)setColorsPointer:(const float*)arg1 ;
-(void)depthTest:(BOOL)arg1 ;
-(void)composeForeColor:(const float*)arg1 saveTo:(float*)arg2 ;
-(void)setShaderUniformFloat:(float)arg1 forKey:(id)arg2 ;
-(void)setShaderUniformVec2:(float)arg1 :(float)arg2 forKey:(id)arg3 ;
-(BOOL)isDoubleBuffered;
-(void)setShaderUniformMat3:(float)arg1 forKey:(id)arg2 ;
-(void)setDimensionalMode:(int)arg1 ;
-(void)setShaderUniformVec3:(float)arg1 :(float)arg2 :(float)arg3 forKey:(id)arg4 ;
-(void)setShaderUniformMat4:(float)arg1 forKey:(id)arg2 ;
-(void)drawLinesFromOffset:(unsigned long long)arg1 count:(unsigned long long)arg2 ;
-(void)drawIndexedTriangleStrip:(const unsigned short*)arg1 count:(unsigned long long)arg2 ;
-(void)setNormalsPointer:(const float*)arg1 ;
-(void)setVertexPointer:(float*)arg1 flags:(unsigned short)arg2 ;
-(unsigned)bindBuffer:(unsigned)arg1 ;
-(void)bindMesh;
-(BOOL)supportsMirroredRepeatForImage:(id)arg1 ;
-(void)translateModelViewMatrixByX:(float)arg1 Y:(float)arg2 Z:(float)arg3 saveTo:(float*)arg4 ;
-(CGPoint)pixelOffset;
-(void)unbindMesh;
-(void)unsetVertexAttributePointerForKey:(id)arg1 ;
-(int)maxTextureSize;
-(void)setVertexAttributePointer:(const float*)arg1 ofSize:(unsigned long long)arg2 forKey:(id)arg3 ;
-(unsigned long long)virtualScreen;
-(unsigned)createVBO;
-(void)unsetNormalsPointer;
-(void)setVertexBuffer2D:(unsigned)arg1 withStride:(unsigned long long)arg2 inSpriteCoordinatesOffset:(unsigned long long)arg3 texture0CoordinatesOffset:(unsigned long long)arg4 ;
-(CGSize)size;
-(void)dealloc;
-(void)flush;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(void)lock;
-(void)unlock;
-(void)startFrame;
-(CGColorSpaceRef)colorSpace;
-(id<MZMediaManagement>)assetManager;
-(void)cleanup;
-(void)clear:(int)arg1 ;
-(const float*)projectionMatrix;
-(EAGLContext *)glContext;
-(float)aspectRatio;
-(void)setPixelSize:(CGSize)arg1 ;
-(MRImageManager *)imageManager;
-(BOOL)isFlipped;
-(void)setAssetManager:(id<MZMediaManagement>)arg1 ;
-(void)setShader:(id)arg1 ;
-(void)setIsFlipped:(BOOL)arg1 ;
-(const float*)foreColor;
-(const float*)backColor;
-(CGSize)pixelSize;
-(void)deleteVBO:(unsigned)arg1 ;
@end

