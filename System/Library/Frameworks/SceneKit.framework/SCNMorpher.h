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

@class SCNOrderedDictionary, NSArray, NSMutableArray, NSString;

@interface SCNMorpher : NSObject <SCNAnimatable, NSSecureCoding> {

	C3DMorphRef _morpher;
	unsigned _isPresentationInstance : 1;
	long long _calculationMode;
	SCNOrderedDictionary* _animations;
	NSArray* _targets;
	NSMutableArray* _weights;
	NSString* _name;
	BOOL _shouldMorphNormals;
	BOOL _useSparseTargets;

}

@property (nonatomic,copy) NSArray * targets; 
@property (assign,nonatomic) long long calculationMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * animationKeys; 
+(BOOL)supportsSecureCoding;
+(id)morpher;
+(id)morpherWithMorphRef:(C3DMorphRef)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)copy;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)animationKeys;
-(id)animationForKey:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)setCalculationMode:(long long)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(void)removeAllAnimations;
-(void)addAnimation:(id)arg1 ;
-(void)setWantsCPUMorphing:(BOOL)arg1 ;
-(void)setTargets:(NSArray *)arg1 ;
-(const void*)__CFObject;
-(NSArray *)targets;
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
-(void)_syncEntityObjCModel;
-(C3DMorphRef)morphRef;
-(long long)calculationMode;
-(id)initWithMorphRef:(C3DMorphRef)arg1 ;
-(id)initPresentationMorpherWithMorphRef:(C3DMorphRef)arg1 ;
-(id)presentationMorpher;
-(void)setWeight:(double)arg1 forTargetAtIndex:(unsigned long long)arg2 ;
-(double)weightForTargetAtIndex:(unsigned long long)arg1 ;
-(void)_customEncodingOfSCNMorpher:(id)arg1 ;
-(void)_customDecodingOfSCNMorpher:(id)arg1 ;
-(void)setWeights:(id)arg1 ;
-(void)setShouldMorphNormals:(BOOL)arg1 ;
-(void)_didDecodeSCNMorpher:(id)arg1 ;
-(BOOL)shouldMorphNormals;
-(BOOL)wantsCPUMorphing;
-(void)convertToAdditiveWithBaseGeometry:(id)arg1 ;
-(BOOL)_isUsingSparseTargets;
-(void)convertToSparseWithBaseGeometry:(id)arg1 ;
-(id)scene;
@end

