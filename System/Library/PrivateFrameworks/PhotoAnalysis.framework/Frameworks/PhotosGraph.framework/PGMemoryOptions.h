/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, CLLocation, NSArray, NSDictionary;

@interface PGMemoryOptions : NSObject {

	unsigned long long _reason;
	NSDate* _universalDate;
	CLLocation* _location;
	NSArray* _peopleNames;
	NSArray* _existingMemories;
	NSArray* _blacklistedMemories;
	unsigned long long _precision;
	NSDate* _lastMemoryCreationUniversalDate;
	NSDate* _baseMemoryCreationUniversalDate;
	NSDictionary* _extraParameters;
	unsigned long long _randomSeed;

}

@property (assign) unsigned long long reason;                                       //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSDate * universalDate;                                //@synthesize universalDate=_universalDate - In the implementation block
@property (nonatomic,retain) CLLocation * location;                                 //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSArray * peopleNames;                                 //@synthesize peopleNames=_peopleNames - In the implementation block
@property (nonatomic,retain) NSArray * existingMemories;                            //@synthesize existingMemories=_existingMemories - In the implementation block
@property (nonatomic,retain) NSArray * blacklistedMemories;                         //@synthesize blacklistedMemories=_blacklistedMemories - In the implementation block
@property (assign,nonatomic) unsigned long long precision;                          //@synthesize precision=_precision - In the implementation block
@property (nonatomic,retain) NSDate * lastMemoryCreationUniversalDate;              //@synthesize lastMemoryCreationUniversalDate=_lastMemoryCreationUniversalDate - In the implementation block
@property (nonatomic,retain) NSDate * baseMemoryCreationUniversalDate;              //@synthesize baseMemoryCreationUniversalDate=_baseMemoryCreationUniversalDate - In the implementation block
@property (nonatomic,retain) NSDictionary * extraParameters;                        //@synthesize extraParameters=_extraParameters - In the implementation block
@property (assign,nonatomic) unsigned long long randomSeed;                         //@synthesize randomSeed=_randomSeed - In the implementation block
+(id)stringForReason:(unsigned long long)arg1 ;
-(id)description;
-(CLLocation *)location;
-(unsigned long long)reason;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSArray *)existingMemories;
-(void)setExistingMemories:(NSArray *)arg1 ;
-(NSArray *)blacklistedMemories;
-(void)setBlacklistedMemories:(NSArray *)arg1 ;
-(void)setReason:(unsigned long long)arg1 ;
-(void)setPrecision:(unsigned long long)arg1 ;
-(unsigned long long)randomSeed;
-(unsigned long long)precision;
-(NSDate *)universalDate;
-(id)initWithReason:(unsigned long long)arg1 universalDate:(id)arg2 location:(id)arg3 peopleNames:(id)arg4 ;
-(void)setUniversalDate:(NSDate *)arg1 ;
-(NSDate *)lastMemoryCreationUniversalDate;
-(void)setLastMemoryCreationUniversalDate:(NSDate *)arg1 ;
-(NSDate *)baseMemoryCreationUniversalDate;
-(void)setBaseMemoryCreationUniversalDate:(NSDate *)arg1 ;
-(void)setRandomSeed:(unsigned long long)arg1 ;
-(NSArray *)peopleNames;
-(void)setPeopleNames:(NSArray *)arg1 ;
-(NSDictionary *)extraParameters;
-(void)setExtraParameters:(NSDictionary *)arg1 ;
@end
