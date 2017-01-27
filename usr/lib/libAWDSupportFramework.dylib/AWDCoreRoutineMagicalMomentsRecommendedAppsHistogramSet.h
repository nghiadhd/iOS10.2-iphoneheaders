/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:35:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDCoreRoutineMagicalMomentsRecommendedAppsHistogramSet : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _confidenceOfMostConfidentModel;
	int _durationSinceLastSuccessfulTraining;
	int _fallbackModelConfidence;
	NSMutableArray* _instances;
	int _modelType;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * instances;                               //@synthesize instances=_instances - In the implementation block
@property (assign,nonatomic) BOOL hasModelType; 
@property (assign,nonatomic) int modelType;                                            //@synthesize modelType=_modelType - In the implementation block
@property (assign,nonatomic) BOOL hasFallbackModelConfidence; 
@property (assign,nonatomic) int fallbackModelConfidence;                              //@synthesize fallbackModelConfidence=_fallbackModelConfidence - In the implementation block
@property (assign,nonatomic) BOOL hasConfidenceOfMostConfidentModel; 
@property (assign,nonatomic) int confidenceOfMostConfidentModel;                       //@synthesize confidenceOfMostConfidentModel=_confidenceOfMostConfidentModel - In the implementation block
@property (assign,nonatomic) BOOL hasDurationSinceLastSuccessfulTraining; 
@property (assign,nonatomic) int durationSinceLastSuccessfulTraining;                  //@synthesize durationSinceLastSuccessfulTraining=_durationSinceLastSuccessfulTraining - In the implementation block
+(Class)instanceType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setInstances:(NSMutableArray *)arg1 ;
-(void)addInstance:(id)arg1 ;
-(unsigned long long)instancesCount;
-(void)clearInstances;
-(id)instanceAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)instances;
-(void)setModelType:(int)arg1 ;
-(void)setHasModelType:(BOOL)arg1 ;
-(BOOL)hasModelType;
-(int)modelType;
-(void)setDurationSinceLastSuccessfulTraining:(int)arg1 ;
-(void)setHasDurationSinceLastSuccessfulTraining:(BOOL)arg1 ;
-(BOOL)hasDurationSinceLastSuccessfulTraining;
-(int)durationSinceLastSuccessfulTraining;
-(void)setFallbackModelConfidence:(int)arg1 ;
-(void)setHasFallbackModelConfidence:(BOOL)arg1 ;
-(BOOL)hasFallbackModelConfidence;
-(void)setConfidenceOfMostConfidentModel:(int)arg1 ;
-(void)setHasConfidenceOfMostConfidentModel:(BOOL)arg1 ;
-(BOOL)hasConfidenceOfMostConfidentModel;
-(int)fallbackModelConfidence;
-(int)confidenceOfMostConfidentModel;
@end

