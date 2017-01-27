/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDAchievementDataStore.h>

@class NSMutableArray, NSMutableSet, NSMutableDictionary;

@interface HDTransientAchievementDataStore : HDAchievementDataStore {

	NSMutableArray* _achievements;
	NSMutableSet* _addedAchievements;
	NSMutableSet* _unalertedAchievements;
	NSMutableDictionary* _committedValues;
	NSMutableDictionary* _uncommittedValues;
	NSMutableArray* _commitExpects;

}

@property (nonatomic,retain) NSMutableArray * achievements;                        //@synthesize achievements=_achievements - In the implementation block
@property (nonatomic,retain) NSMutableSet * addedAchievements;                     //@synthesize addedAchievements=_addedAchievements - In the implementation block
@property (nonatomic,retain) NSMutableSet * unalertedAchievements;                 //@synthesize unalertedAchievements=_unalertedAchievements - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * committedValues;                //@synthesize committedValues=_committedValues - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * uncommittedValues;              //@synthesize uncommittedValues=_uncommittedValues - In the implementation block
@property (nonatomic,retain) NSMutableArray * commitExpects;                       //@synthesize commitExpects=_commitExpects - In the implementation block
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(id)initWithProfile:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(NSMutableSet *)addedAchievements;
-(BOOL)commit:(id*)arg1 ;
-(id)committedKeyValues;
-(id)_valueForKey:(id)arg1 ;
-(id)_cachedValueForKey:(id)arg1 ;
-(id)uncommittedAchievements;
-(id)allAchievements;
-(void)clearAddedAchievements;
-(void)expectCommitWithCompletion:(/*^block*/id)arg1 ;
-(id)modifiedKeyValues;
-(void)addAchievement:(id)arg1 ;
-(unsigned long long)countOfUnalertedAchievements;
-(NSMutableSet *)unalertedAchievements;
-(void)markAchievementAlerted:(id)arg1 ;
-(unsigned long long)unsignedIntegerForKey:(id)arg1 ;
-(long long)int64ForKey:(id)arg1 ;
-(id)dateForKey:(id)arg1 ;
-(id)cachedNumberValueForKey:(id)arg1 ;
-(id)cachedDateValueForKey:(id)arg1 ;
-(void)setUnsignedInteger:(unsigned long long)arg1 forKey:(id)arg2 ;
-(void)setInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)setDate:(id)arg1 forKey:(id)arg2 ;
-(id)earnedAchievementDefinitionIdentifiers;
-(NSMutableArray *)achievements;
-(void)setAchievements:(NSMutableArray *)arg1 ;
-(void)setAddedAchievements:(NSMutableSet *)arg1 ;
-(void)setUnalertedAchievements:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)committedValues;
-(void)setCommittedValues:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)uncommittedValues;
-(void)setUncommittedValues:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)commitExpects;
-(void)setCommitExpects:(NSMutableArray *)arg1 ;
@end

