/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, HDCodableProvenance, HDCodableSource, NSString;

@interface HDCodableObjectCollection : PBCodable <NSCopying> {

	NSMutableArray* _activityCaches;
	NSMutableArray* _binarySamples;
	NSMutableArray* _categorySamples;
	NSMutableArray* _cdaDocumentSamples;
	NSMutableArray* _correlations;
	NSMutableArray* _deletedSamples;
	NSMutableArray* _fitnessFriendAchievements;
	NSMutableArray* _fitnessFriendActivitySnapshots;
	NSMutableArray* _fitnessFriendWorkouts;
	NSMutableArray* _locationSeries;
	HDCodableProvenance* _provenance;
	NSMutableArray* _quantitySamples;
	HDCodableSource* _source;
	NSString* _sourceBundleIdentifier;
	NSMutableArray* _workouts;

}

@property (nonatomic,readonly) BOOL hasSourceBundleIdentifier; 
@property (nonatomic,retain) NSString * sourceBundleIdentifier;                            //@synthesize sourceBundleIdentifier=_sourceBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasSource; 
@property (nonatomic,retain) HDCodableSource * source;                                     //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSMutableArray * categorySamples;                             //@synthesize categorySamples=_categorySamples - In the implementation block
@property (nonatomic,retain) NSMutableArray * quantitySamples;                             //@synthesize quantitySamples=_quantitySamples - In the implementation block
@property (nonatomic,retain) NSMutableArray * workouts;                                    //@synthesize workouts=_workouts - In the implementation block
@property (nonatomic,retain) NSMutableArray * correlations;                                //@synthesize correlations=_correlations - In the implementation block
@property (nonatomic,retain) NSMutableArray * activityCaches;                              //@synthesize activityCaches=_activityCaches - In the implementation block
@property (nonatomic,retain) NSMutableArray * binarySamples;                               //@synthesize binarySamples=_binarySamples - In the implementation block
@property (nonatomic,retain) NSMutableArray * deletedSamples;                              //@synthesize deletedSamples=_deletedSamples - In the implementation block
@property (nonatomic,retain) NSMutableArray * locationSeries;                              //@synthesize locationSeries=_locationSeries - In the implementation block
@property (nonatomic,retain) NSMutableArray * cdaDocumentSamples;                          //@synthesize cdaDocumentSamples=_cdaDocumentSamples - In the implementation block
@property (nonatomic,retain) NSMutableArray * fitnessFriendActivitySnapshots;              //@synthesize fitnessFriendActivitySnapshots=_fitnessFriendActivitySnapshots - In the implementation block
@property (nonatomic,retain) NSMutableArray * fitnessFriendAchievements;                   //@synthesize fitnessFriendAchievements=_fitnessFriendAchievements - In the implementation block
@property (nonatomic,retain) NSMutableArray * fitnessFriendWorkouts;                       //@synthesize fitnessFriendWorkouts=_fitnessFriendWorkouts - In the implementation block
@property (nonatomic,readonly) BOOL hasProvenance; 
@property (nonatomic,retain) HDCodableProvenance * provenance;                             //@synthesize provenance=_provenance - In the implementation block
-(unsigned long long)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setSource:(HDCodableSource *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(HDCodableSource *)source;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasSource;
-(NSMutableArray *)binarySamples;
-(void)addBinarySamples:(id)arg1 ;
-(NSMutableArray *)categorySamples;
-(void)addCategorySamples:(id)arg1 ;
-(NSString *)sourceBundleIdentifier;
-(void)addQuantitySamples:(id)arg1 ;
-(void)addWorkouts:(id)arg1 ;
-(void)addCorrelations:(id)arg1 ;
-(void)addActivityCaches:(id)arg1 ;
-(void)addDeletedSamples:(id)arg1 ;
-(void)addLocationSeries:(id)arg1 ;
-(void)addCdaDocumentSamples:(id)arg1 ;
-(void)addFitnessFriendActivitySnapshots:(id)arg1 ;
-(void)addFitnessFriendAchievements:(id)arg1 ;
-(void)addFitnessFriendWorkouts:(id)arg1 ;
-(void)setSourceBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)categorySamplesCount;
-(void)clearCategorySamples;
-(id)categorySamplesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)quantitySamplesCount;
-(void)clearQuantitySamples;
-(id)quantitySamplesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)workoutsCount;
-(void)clearWorkouts;
-(id)workoutsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)correlationsCount;
-(void)clearCorrelations;
-(id)correlationsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)activityCachesCount;
-(void)clearActivityCaches;
-(id)activityCachesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)binarySamplesCount;
-(void)clearBinarySamples;
-(id)binarySamplesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)deletedSamplesCount;
-(void)clearDeletedSamples;
-(id)deletedSamplesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)locationSeriesCount;
-(void)clearLocationSeries;
-(id)locationSeriesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)cdaDocumentSamplesCount;
-(void)clearCdaDocumentSamples;
-(id)cdaDocumentSamplesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)fitnessFriendActivitySnapshotsCount;
-(void)clearFitnessFriendActivitySnapshots;
-(id)fitnessFriendActivitySnapshotsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)fitnessFriendAchievementsCount;
-(void)clearFitnessFriendAchievements;
-(id)fitnessFriendAchievementsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)fitnessFriendWorkoutsCount;
-(void)clearFitnessFriendWorkouts;
-(id)fitnessFriendWorkoutsAtIndex:(unsigned long long)arg1 ;
-(void)setProvenance:(HDCodableProvenance *)arg1 ;
-(BOOL)hasSourceBundleIdentifier;
-(BOOL)hasProvenance;
-(void)setCategorySamples:(NSMutableArray *)arg1 ;
-(NSMutableArray *)quantitySamples;
-(void)setQuantitySamples:(NSMutableArray *)arg1 ;
-(NSMutableArray *)workouts;
-(void)setWorkouts:(NSMutableArray *)arg1 ;
-(NSMutableArray *)correlations;
-(void)setCorrelations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)activityCaches;
-(void)setActivityCaches:(NSMutableArray *)arg1 ;
-(void)setBinarySamples:(NSMutableArray *)arg1 ;
-(NSMutableArray *)deletedSamples;
-(void)setDeletedSamples:(NSMutableArray *)arg1 ;
-(NSMutableArray *)locationSeries;
-(void)setLocationSeries:(NSMutableArray *)arg1 ;
-(NSMutableArray *)cdaDocumentSamples;
-(void)setCdaDocumentSamples:(NSMutableArray *)arg1 ;
-(NSMutableArray *)fitnessFriendActivitySnapshots;
-(void)setFitnessFriendActivitySnapshots:(NSMutableArray *)arg1 ;
-(NSMutableArray *)fitnessFriendAchievements;
-(void)setFitnessFriendAchievements:(NSMutableArray *)arg1 ;
-(NSMutableArray *)fitnessFriendWorkouts;
-(void)setFitnessFriendWorkouts:(NSMutableArray *)arg1 ;
-(HDCodableProvenance *)provenance;
-(id)decodedObjects;
-(BOOL)isEquivalentToObjectCollection:(id)arg1 ;
@end

