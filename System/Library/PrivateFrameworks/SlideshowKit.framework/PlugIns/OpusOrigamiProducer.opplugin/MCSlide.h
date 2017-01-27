/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MCObject.h>
#import <OpusOrigamiProducer/MCAnimationPathSupport.h>
#import <OpusOrigamiProducer/MCFilterSupport.h>

@class NSSet, NSArray, NSMutableDictionary, NSMutableSet, MCPlugSlide, MCSong, NSString, MCContainerEffect, MCAssetVideo, NSDictionary;

@interface MCSlide : MCObject <MCAnimationPathSupport, MCFilterSupport> {

	id* mSlideAsset;
	NSMutableDictionary* mFrameAttributes;
	NSMutableSet* mAnimationPaths;
	NSMutableSet* mFilters;
	NSArray* mCachedOrderedFilters;
	unsigned long long mFlags;
	float mAudioVolume;
	float mAudioDuckLevel;
	MCPlugSlide* mPlug;
	MCSong* mSong;
	unsigned long long mIndex;
	double mAudioFadeInDuration;
	double mAudioFadeOutDuration;
	double mAudioDuckInDuration;
	double mAudioDuckOutDuration;
	double mStartTime;
	double mDuration;
	NSString* mFrameID;
	MCContainerEffect* mContainer;

}

@property (readonly) NSSet * animationPaths; 
@property (readonly) unsigned long long countOfAnimationPaths; 
@property (readonly) NSSet * filters; 
@property (readonly) NSArray * orderedFilters; 
@property (nonatomic,readonly) unsigned long long countOfFilters; 
@property (assign) MCContainerEffect * container; 
@property (assign,nonatomic) unsigned long long index; 
@property (retain) MCAssetVideo * asset; 
@property (retain) MCPlugSlide * plug; 
@property (readonly) MCSong * song; 
@property (assign,nonatomic) float audioVolume; 
@property (assign,nonatomic) double audioFadeInDuration; 
@property (assign,nonatomic) double audioFadeOutDuration; 
@property (assign,nonatomic) float audioDuckLevel; 
@property (assign,nonatomic) double audioDuckInDuration; 
@property (assign,nonatomic) double audioDuckOutDuration; 
@property (readonly) BOOL startTimeIsDefined; 
@property (assign,nonatomic) double startTime; 
@property (readonly) BOOL durationIsDefined; 
@property (assign,nonatomic) double duration; 
@property (copy) NSString * frameID; 
@property (copy) NSDictionary * frameAttributes; 
@property (copy) NSString * kenBurnsType; 
@property (assign,nonatomic) CGPoint center; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) double rotation; 
@property (assign,nonatomic) unsigned char currentLayoutIndex; 
@property (readonly) unsigned char countOfLayouts; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)demolishAnimationPaths;
-(void)initAnimationPathsWithImprints:(id)arg1 ;
-(void)undefineDuration;
-(void)setAudioDuckLevel:(float)arg1 ;
-(void)removeFiltersAtIndices:(id)arg1 ;
-(void)undefineStartTime;
-(void)setFrameAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)moveFiltersAtIndices:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)setKenBurnsType:(NSString *)arg1 ;
-(void)setAudioDuckInDuration:(double)arg1 ;
-(id)imprintsForAnimationPaths;
-(double)audioDuckInDuration;
-(double)audioDuckOutDuration;
-(unsigned long long)countOfFilters;
-(unsigned char)countOfLayouts;
-(id)addFilterWithFilterID:(id)arg1 ;
-(void)demolishFilters;
-(void)observeFilter:(id)arg1 ;
-(NSString *)frameID;
-(BOOL)startTimeIsDefined;
-(NSString *)kenBurnsType;
-(void)setPlug:(MCPlugSlide *)arg1 ;
-(unsigned char)currentLayoutIndex;
-(BOOL)durationIsDefined;
-(id)animationPathForKey:(id)arg1 ;
-(NSSet *)animationPaths;
-(MCPlugSlide *)plug;
-(void)demolish;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)setCurrentLayoutIndex:(unsigned char)arg1 ;
-(id)insertFilterWithFilterID:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(void)initFiltersWithImprints:(id)arg1 ;
-(id)imprintsForFilters;
-(void)unobserveFilter:(id)arg1 ;
-(float)audioDuckLevel;
-(void)setFrameID:(NSString *)arg1 ;
-(NSDictionary *)frameAttributes;
-(unsigned long long)countOfAnimationPaths;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(void)addAnimationPath:(id)arg1 ;
-(void)setAudioDuckOutDuration:(double)arg1 ;
-(void)removeAllFilters;
-(void)setFrameAttributes:(NSDictionary *)arg1 ;
-(void)setSongForAsset:(id)arg1 ;
-(id)frameAttributeForKey:(id)arg1 ;
-(void)removeAllAnimationPaths;
-(NSArray *)orderedFilters;
-(id)init;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)setScale:(double)arg1 ;
-(CGPoint)center;
-(double)scale;
-(void)setCenter:(CGPoint)arg1 ;
-(MCContainerEffect *)container;
-(void)setContainer:(MCContainerEffect *)arg1 ;
-(NSSet *)filters;
-(double)startTime;
-(unsigned long long)index;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setRotation:(double)arg1 ;
-(double)rotation;
-(float)audioVolume;
-(void)setAudioVolume:(float)arg1 ;
-(MCAssetVideo *)asset;
-(void)setAsset:(MCAssetVideo *)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(id)filterAtIndex:(unsigned long long)arg1 ;
-(MCSong *)song;
-(void)setAudioFadeOutDuration:(double)arg1 ;
-(void)setAudioFadeInDuration:(double)arg1 ;
-(double)audioFadeInDuration;
-(double)audioFadeOutDuration;
-(id)imprint;
@end

