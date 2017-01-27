/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDRep.h>

@class CALayer, TSDMutableReflection, TSDShadow, TSDReflection;

@interface TSDStyledRep : TSDRep {

	CALayer* mShadowLayer;
	CALayer* mReflectionLayer;
	CGPoint mOriginalReflectionLayerPositionInScaledCanvas;
	BOOL mIsUpdatingReflectionOpacity;
	TSDMutableReflection* mDynamicReflection;
	BOOL mIsUpdatingShadow;
	TSDShadow* mDynamicShadow;
	struct {
		unsigned shadowInvalid : 1;
	}  mFlags;

}

@property (nonatomic,readonly) CALayer * shadowLayer; 
@property (nonatomic,readonly) CALayer * reflectionLayer; 
@property (nonatomic,readonly) TSDReflection * reflection; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) TSDShadow * shadow; 
-(id)textureForContext:(id)arg1 ;
-(void)setTextureAttributes:(id)arg1 textureBounds:(CGRect)arg2 ;
-(id)styledLayout;
-(void)drawInContextWithoutEffects:(CGContextRef)arg1 withContent:(BOOL)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6 ;
-(CGRect)strokeBoundsWithOptions:(unsigned long long)arg1 fallbackBounds:(CGRect)arg2 ;
-(BOOL)canDrawShadowInOneStepWithChildren:(BOOL)arg1 ;
-(BOOL)shouldShowReflection;
-(void)calculateTextureClipBounds:(CGRect*)arg1 andOffset:(CGPoint*)arg2 withTransform:(CGAffineTransform*)arg3 andRectOnCanvas:(CGRect*)arg4 textureContext:(id)arg5 isUsingImageTexture:(BOOL)arg6 ;
-(void)drawGradientWithAlphaOverReflection:(CGContextRef)arg1 applyingOpacity:(BOOL)arg2 reflectionSize:(CGSize)arg3 ;
-(CGImageRef)newFrameMaskForViewScale:(double)arg1 frameRect:(CGRect*)arg2 ;
-(CGRect)clipRectWithoutEffects;
-(CGRect)rectWithEffectsAppliedToRect:(CGRect)arg1 ;
-(CGRect)p_rectWithEffectsAppliedToRect:(CGRect)arg1 additionalTransform:(CGAffineTransform)arg2 includeShadow:(BOOL)arg3 includeReflection:(BOOL)arg4 ;
-(CGRect)reflectionLayerFrameInRoot;
-(void)drawReflectionIntoReflectionFrameInContext:(CGContextRef)arg1 withTransparencyLayer:(BOOL)arg2 applyingOpacity:(BOOL)arg3 drawChildren:(BOOL)arg4 ;
-(id)styledInfo;
-(void)drawInContextWithoutEffectsForAlphaOnly:(CGContextRef)arg1 ;
-(void)drawInContextWithoutEffectsOrChildrenForAlphaOnly:(CGContextRef)arg1 ;
-(CGImageRef)newShadowImageWithSize:(CGSize)arg1 shadow:(id)arg2 drawSelector:(SEL)arg3 unflipped:(BOOL)arg4 ;
-(void)p_drawReflectionIntoReflectionFrameInContext:(CGContextRef)arg1 withTransparencyLayer:(BOOL)arg2 applyingOpacity:(BOOL)arg3 shouldClipGradient:(BOOL)arg4 withBlock:(/*^block*/id)arg5 ;
-(CGImageRef)newShadowImageWithSize:(CGSize)arg1 unflipped:(BOOL)arg2 withChildren:(BOOL)arg3 ;
-(CGImageRef)p_newReflectionImageWithSize:(CGSize)arg1 applyOpacity:(BOOL)arg2 viewScale:(double)arg3 withBlock:(/*^block*/id)arg4 ;
-(void)drawReflectionInContext:(CGContextRef)arg1 withTransparencyLayer:(BOOL)arg2 applyingOpacity:(BOOL)arg3 shouldClipGradient:(BOOL)arg4 withBlock:(/*^block*/id)arg5 ;
-(void)drawShadowInContext:(CGContextRef)arg1 withChildren:(BOOL)arg2 withDrawableOpacity:(BOOL)arg3 ;
-(void)drawReflectionInContext:(CGContextRef)arg1 drawChildren:(BOOL)arg2 ;
-(CGRect)p_clipRectInRootForTransform:(CGAffineTransform)arg1 includeShadow:(BOOL)arg2 includeReflection:(BOOL)arg3 ;
-(void)p_drawReflectionInContext:(CGContextRef)arg1 ;
-(void)drawInContextWithoutEffects:(CGContextRef)arg1 ;
-(void)drawInContextWithoutEffectsOrChildren:(CGContextRef)arg1 ;
-(CALayer *)reflectionLayer;
-(void)dealloc;
-(id)description;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(double)opacity;
-(void)drawInContext:(CGContextRef)arg1 ;
-(TSDShadow *)shadow;
-(BOOL)shouldShowShadow;
-(BOOL)isInvisible;
-(CGRect)clipRect;
-(CALayer *)shadowLayer;
-(TSDReflection *)reflection;
@end

