/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MPActionableSupportInternal.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <OpusOrigamiProducer/MPFilterSupport.h>
#import <OpusOrigamiProducer/MPAudioSupport.h>
#import <OpusOrigamiProducer/MPActionableSupport.h>

@class MCPlug, MCContainerParallelizer, NSMutableArray, NSMutableDictionary, MPTransition, MPLayer, MPAudioPlaylist, NSString;

@interface MPEffectContainer : NSObject <MPActionableSupportInternal, NSCoding, NSCopying, MPFilterSupport, MPAudioSupport, MPActionableSupport> {

	MCPlug* _containerPlug;
	MCContainerParallelizer* _containerParallelizer;
	NSMutableArray* _effects;
	NSMutableArray* _filters;
	NSMutableDictionary* _attributes;
	MPTransition* _transition;
	MPLayer* _parentLayer;
	MPAudioPlaylist* _audioPlaylist;
	BOOL _transitionDisconnected;
	double _startTime;
	double _duration;
	CGColorRef _backgroundColor;
	NSString* _uuid;

}

@property (assign,nonatomic) CGColorRef backgroundCGColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) MPTransition * transition;                 //@synthesize transition=_transition - In the implementation block
@property (assign,nonatomic) double duration;                           //@synthesize duration=_duration - In the implementation block
+(id)effectContainer;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)setUserInfoAttribute:(id)arg1 forKey:(id)arg2 ;
-(BOOL)shouldBeParallelizer;
-(id)nearestLayerGroup;
-(void)setContainerParallelizer:(id)arg1 ;
-(void)setContainerPlug:(id)arg1 ;
-(void)calculateDurationToSmallest:(BOOL)arg1 ;
-(void)insertFilters:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeFiltersAtIndices:(id)arg1 ;
-(id)objectInEffectsAtIndex:(long long)arg1 ;
-(double)outroTransitionDuration;
-(long long)textCount;
-(id)userInfoAttributeForKey:(id)arg1 ;
-(CGColorRef)backgroundCGColor;
-(long long)countOfFilters;
-(void)copyAudioPlaylist:(id)arg1 ;
-(void)setBackgroundCGColor:(CGColorRef)arg1 ;
-(void)copyEffects:(id)arg1 ;
-(void)copyTransition:(id)arg1 ;
-(void)reconnectTransition;
-(double)findMinDuration;
-(void)copyFilters:(id)arg1 ;
-(long long)countOfEffects;
-(id)plug;
-(id)plugID;
-(void)convertFromParallelizerToEffectContainer;
-(void)convertFromEffectContainerToParallelizer;
-(void)removeEffectsAtIndices:(id)arg1 ;
-(void)insertEffects:(id)arg1 atIndex:(long long)arg2 ;
-(id)fullDebugLog;
-(void)adjustPhasesWithDuration:(double)arg1 ;
-(void)moveFiltersFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(void)copyVars:(id)arg1 ;
-(double)introTransitionDuration;
-(BOOL)isTransitionConnected;
-(void)removeAllFilters;
-(void)setScriptingTransition:(id)arg1 ;
-(void)insertObject:(id)arg1 inEffectsAtIndex:(long long)arg2 ;
-(void)disconnectTransition;
-(void)removeObjectFromEffectsAtIndex:(long long)arg1 ;
-(void)moveEffectsFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(id)objectInFiltersAtIndex:(long long)arg1 ;
-(void)removeObjectFromFiltersAtIndex:(long long)arg1 ;
-(void)insertObject:(id)arg1 inFiltersAtIndex:(long long)arg2 ;
-(void)replaceObjectInFiltersAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(void)setBackgroundColorString:(id)arg1 ;
-(void)replaceObjectInEffectsAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(void)setContainerEffect:(id)arg1 ;
-(id)scriptingTransition;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)container;
-(id)filters;
-(void)setTransition:(MPTransition *)arg1 ;
-(MPTransition *)transition;
-(double)startTime;
-(long long)index;
-(void)cleanup;
-(id)uuid;
-(void)addFilter:(id)arg1 ;
-(id)objectID;
-(void)removeAllEffects;
-(id)audioPlaylist;
-(void)setAudioPlaylist:(id)arg1 ;
-(id)parentLayer;
-(void)setParentLayer:(id)arg1 ;
-(void)dump;
-(id)effects;
-(void)addEffect:(id)arg1 ;
-(void)addEffects:(id)arg1 ;
-(long long)slideCount;
-(void)addFilters:(id)arg1 ;
-(id)parentDocument;
@end

