/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/SCNAnimatable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, SCNOrderedDictionary, UIColor, NSArray;

@interface SCNMaterialProperty : NSObject <SCNAnimatable, NSSecureCoding> {

	unsigned _isPresentationInstance : 1;
	unsigned _isCommonProfileProperty : 1;
	id _parent;
	int _propertyType;
	NSString* _customSlotName;
	SCNOrderedDictionary* _animations;
	UIColor* _borderColor;
	unsigned char _contentType;
	id _contents;
	long long _mappingChannel;
	float _intensity;
	float _maxAnisotropy;
	long long _minificationFilter;
	long long _magnificationFilter;
	long long _mipFilter;
	long long _wrapS;
	long long _wrapT;
	_C3DEffectSlot* _customSlot;
	C3DImageRef _c3dImage;
	C3DTextureProxyRef _textureProxy;
	SCNMatrix4* _contentTransform;

}

@property (nonatomic,retain) id contents; 
@property (assign,nonatomic) double intensity; 
@property (assign,nonatomic) long long minificationFilter; 
@property (assign,nonatomic) long long magnificationFilter; 
@property (assign,nonatomic) long long mipFilter; 
@property (assign,nonatomic) SCNMatrix4 contentsTransform; 
@property (assign,nonatomic) long long wrapS; 
@property (assign,nonatomic) long long wrapT; 
@property (nonatomic,retain) id borderColor; 
@property (assign,nonatomic) long long mappingChannel; 
@property (assign,nonatomic) double maxAnisotropy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * animationKeys; 
+(BOOL)supportsSecureCoding;
+(C3DImageRef)copyC3DImageFromImage:(id)arg1 ;
+(id)copyImageFromC3DImage:(C3DImageRef)arg1 ;
+(C3DImageRef)copyC3DImageFromImage:(id)arg1 textureOptions:(int)arg2 ;
+(C3DImageRef)_copyC3DImageFromImageData:(id)arg1 typeID:(unsigned long long)arg2 ;
+(id)_copyImageFromC3DImage:(C3DImageRef)arg1 ;
+(id)materialPropertyWithContents:(id)arg1 ;
-(id)init;
-(id)layer;
-(void)setImage:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)_setParent:(id)arg1 ;
-(id)content;
-(id)image;
-(id)floatValue;
-(id)color;
-(void)setColor:(id)arg1 ;
-(void)setLayer:(id)arg1 ;
-(NSArray *)animationKeys;
-(id)animationForKey:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(id)contents;
-(void)setBorderColor:(id)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)setMagnificationFilter:(long long)arg1 ;
-(void)removeAllAnimations;
-(void)setContents:(id)arg1 ;
-(void)setContentsTransform:(SCNMatrix4)arg1 ;
-(id)borderColor;
-(void)_clearContents;
-(void)_setColor:(id)arg1 ;
-(void)addAnimation:(id)arg1 ;
-(void)setAttachment:(id)arg1 ;
-(id)attachment;
-(void)setMinificationFilter:(long long)arg1 ;
-(void)setContent:(id)arg1 ;
-(void)setMipFilter:(long long)arg1 ;
-(void)setMaxAnisotropy:(double)arg1 ;
-(id)parent;
-(long long)mappingChannel;
-(void)setMappingChannel:(long long)arg1 ;
-(void)setWrapS:(long long)arg1 ;
-(void)setWrapT:(long long)arg1 ;
-(const void*)__CFObject;
-(C3DSceneRef)sceneRef;
-(void)_syncObjCAnimations;
-(_C3DAnimationManager*)animationManager;
-(void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2 ;
-(void)pauseAnimationForKey:(id)arg1 ;
-(void)resumeAnimationForKey:(id)arg1 ;
-(BOOL)isAnimationForKeyPaused:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2 ;
-(void)setSpeed:(double)arg1 forAnimationKey:(id)arg2 ;
-(BOOL)__removeAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4 ;
-(void)unbindAnimatablePath:(id)arg1 ;
-(_C3DAnimationChannel*)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(BOOL)isPausedOrPausedByInheritance;
-(id)presentationInstance;
-(void)_syncObjCModel;
-(void)parentWillDie:(id)arg1 ;
-(id)initWithParent:(id)arg1 propertyType:(int)arg2 ;
-(double)intensity;
-(void)setIntensity:(double)arg1 ;
-(_C3DEffectCommonProfile*)commonProfile;
-(void)_setC3DImageRef:(C3DImageRef)arg1 ;
-(id)presentationMaterialProperty;
-(id)slotName;
-(void)unlinkCustomPropertyWithParent:(id)arg1 ;
-(void)linkCustomPropertyWithParent:(id)arg1 andCustomName:(id)arg2 ;
-(_C3DEffectSlot*)effectSlot;
-(C3DImageRef)getC3DImageRef;
-(id)_animationPathForKey:(id)arg1 ;
-(void)_updateMaterialColor:(id)arg1 ;
-(void)_updateMaterialNumber:(id)arg1 ;
-(_C3DTextureSampler*)textureSampler;
-(void)_updateMaterialFilters;
-(long long)_presentationMappingChannel;
-(void)_updateMaterialBorderColor:(id)arg1 ;
-(void)_updateMaterialAttachment:(id)arg1 ;
-(int)_textureOptions;
-(void)_updateMaterialImage:(id)arg1 ;
-(void)_updateMaterialSKScene:(id)arg1 ;
-(void)_updateMaterialSKTexture:(id)arg1 ;
-(void)_updateMaterialLayer:(id)arg1 ;
-(void)_layerDidChange:(id)arg1 ;
-(void)_updateMaterialUIComponent:(id)arg1 ;
-(void)setSkScene:(id)arg1 ;
-(void)setSkTexture:(id)arg1 ;
-(void)setMtlTexture:(id)arg1 ;
-(void)setUIView:(id)arg1 ;
-(void)setUIWindow:(id)arg1 ;
-(_C3DEffectSlot*)effectSlotCreateIfNeeded:(BOOL)arg1 ;
-(void)_updateMaterialProceduralContents:(id)arg1 ;
-(void)_updateMaterialMTLTexture:(id)arg1 ;
-(void)__allocateContentTransformIfNeeded;
-(void)_updateMaterialPropertyTransform:(C3DMatrix4x4)arg1 ;
-(long long)mipFilter;
-(long long)wrapS;
-(long long)wrapT;
-(id)initPresentationMaterialPropertyWithModelProperty:(id)arg1 ;
-(C3DColor4)borderColor4;
-(void)_customEncodingOfSCNMaterialProperty:(id)arg1 ;
-(void)_customDecodingOfSCNMaterialProperty:(id)arg1 ;
-(void)_didDecodeSCNMaterialProperty:(id)arg1 ;
-(id)initWithParent:(id)arg1 andCustomName:(id)arg2 ;
-(C3DColor4)color4;
-(id)pvrtcData;
-(id)skScene;
-(id)skTexture;
-(id)UIView;
-(double)maxAnisotropy;
-(void)setProceduralContents:(id)arg1 ;
-(id)proceduralContents;
-(id)mtlTexture;
-(int)propertyType;
-(SCNMatrix4)contentsTransform;
-(long long)magnificationFilter;
-(long long)minificationFilter;
-(void)setFloatValue:(id)arg1 ;
-(void)copyPropertiesFrom:(id)arg1 ;
@end

