/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPContainedObject.h>
#import <iWorkImport/KNInspectableAnimation.h>
#import <iWorkImport/TSKModel.h>

@class KNTransitionAttributes, NSString, KNAnimationInfo, NSArray, KNAnimationPluginMenu, TSUColor, TSDBezierPathSource, NSSet;

@interface KNTransition : TSPContainedObject <KNInspectableAnimation, TSKModel> {

	KNTransitionAttributes* mAttributes;

}

@property (nonatomic,readonly) NSString * effect; 
@property (nonatomic,readonly) BOOL isMagicMove; 
@property (nonatomic,copy) KNTransitionAttributes * attributes; 
@property (nonatomic,readonly) KNAnimationInfo * animationInfo; 
@property (nonatomic,readonly) NSArray * localizedEventTriggerNames; 
@property (nonatomic,readonly) KNAnimationPluginMenu * directionMenu; 
@property (nonatomic,readonly) unsigned long long directionType; 
@property (nonatomic,readonly) BOOL supportsDirection; 
@property (nonatomic,readonly) BOOL supportsDuration; 
@property (nonatomic,readonly) BOOL supportsBounce; 
@property (nonatomic,readonly) BOOL supportsCustomEffectTimingCurve1; 
@property (nonatomic,readonly) BOOL supportsCustomEffectTimingCurve2; 
@property (nonatomic,readonly) BOOL supportsCustomEffectTimingCurve3; 
@property (nonatomic,readonly) BOOL hasAutomaticTrigger; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double delay; 
@property (nonatomic,readonly) unsigned long long direction; 
@property (nonatomic,readonly) BOOL documentIsRTL; 
@property (nonatomic,readonly) TSUColor * color; 
@property (nonatomic,readonly) float customTwist; 
@property (nonatomic,readonly) long long customMosaicSize; 
@property (nonatomic,readonly) long long customMosaicType; 
@property (nonatomic,readonly) BOOL customBounce; 
@property (nonatomic,readonly) BOOL customMotionBlur; 
@property (nonatomic,readonly) long long customTimingCurve; 
@property (nonatomic,readonly) long long randomNumberSeed; 
@property (nonatomic,readonly) TSDBezierPathSource * customEffectTimingCurve1; 
@property (nonatomic,readonly) TSDBezierPathSource * customEffectTimingCurve2; 
@property (nonatomic,readonly) TSDBezierPathSource * customEffectTimingCurve3; 
@property (nonatomic,readonly) NSString * customEffectTimingCurveThemeName1; 
@property (nonatomic,readonly) NSString * customEffectTimingCurveThemeName2; 
@property (nonatomic,readonly) NSString * customEffectTimingCurveThemeName3; 
@property (nonatomic,readonly) BOOL customMagicMoveFadeUnmatchedObjects; 
@property (nonatomic,readonly) long long customTextDelivery; 
@property (nonatomic,readonly) NSSet * inspectableAttributes; 
@property (nonatomic,readonly) BOOL canEditAnimations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)directionTypeForEffect:(id)arg1 ;
+(id)bindingMap;
+(BOOL)hasDirectionOptionForEffect:(id)arg1 ;
+(id)bindingKeyPathForAttributeKey:(id)arg1 ;
+(id)attributeKeyForBindingKeyPath:(id)arg1 ;
-(void)saveToArchive:(TransitionArchive*)arg1 archiver:(id)arg2 ;
-(BOOL)isMagicMove;
-(BOOL)documentIsRTL;
-(id)initWithArchive:(const TransitionArchive*)arg1 unarchiver:(id)arg2 owner:(id)arg3 ;
-(unsigned long long)directionType;
-(BOOL)canEditAnimations;
-(NSSet *)inspectableAttributes;
-(unsigned long long)p_keynoteVersionFromUnarchiver:(id)arg1 ;
-(BOOL)p_supportsCustomEffectTimingCurveForLayoutStyles:(id)arg1 ;
-(BOOL)supportsDuration;
-(BOOL)supportsRandomNumberSeedInspection;
-(BOOL)supportsCustomEffectTimingCurve3;
-(BOOL)supportsCustomEffectTimingCurve2;
-(BOOL)supportsCustomEffectTimingCurve1;
-(long long)customTextDelivery;
-(KNAnimationPluginMenu *)directionMenu;
-(BOOL)supportsBounce;
-(BOOL)customBounce;
-(BOOL)customMotionBlur;
-(long long)randomNumberSeed;
-(TSDBezierPathSource *)customEffectTimingCurve1;
-(TSDBezierPathSource *)customEffectTimingCurve2;
-(TSDBezierPathSource *)customEffectTimingCurve3;
-(NSString *)customEffectTimingCurveThemeName1;
-(NSString *)customEffectTimingCurveThemeName2;
-(NSString *)customEffectTimingCurveThemeName3;
-(id)initWithOwner:(id)arg1 attributes:(id)arg2 ;
-(BOOL)hasAutomaticTrigger;
-(BOOL)supportsTimingCurves;
-(NSArray *)localizedEventTriggerNames;
-(float)customTwist;
-(long long)customMosaicSize;
-(long long)customMosaicType;
-(long long)customTimingCurve;
-(BOOL)customMagicMoveFadeUnmatchedObjects;
-(void)dealloc;
-(NSString *)description;
-(double)duration;
-(double)delay;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSUColor *)color;
-(unsigned long long)direction;
-(KNTransitionAttributes *)attributes;
-(void)setAttributes:(KNTransitionAttributes *)arg1 ;
-(NSString *)effect;
-(id)initWithOwner:(id)arg1 ;
-(BOOL)supportsDirection;
-(KNAnimationInfo *)animationInfo;
@end

