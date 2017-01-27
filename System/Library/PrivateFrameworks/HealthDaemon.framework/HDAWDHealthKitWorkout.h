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

@interface HDAWDHealthKitWorkout : PBCodable <NSCopying> {

	long long _durationMs;
	long long _endDate;
	long long _startDate;
	unsigned long long _timestamp;
	long long _totalDistance;
	long long _totalEnergyBurned;
	long long _totalSteps;
	int _activityType;
	SCD_Struct_HD16 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasActivityType; 
@property (assign,nonatomic) int activityType;                          //@synthesize activityType=_activityType - In the implementation block
@property (assign,nonatomic) BOOL hasDurationMs; 
@property (assign,nonatomic) long long durationMs;                      //@synthesize durationMs=_durationMs - In the implementation block
@property (assign,nonatomic) BOOL hasTotalEnergyBurned; 
@property (assign,nonatomic) long long totalEnergyBurned;               //@synthesize totalEnergyBurned=_totalEnergyBurned - In the implementation block
@property (assign,nonatomic) BOOL hasTotalDistance; 
@property (assign,nonatomic) long long totalDistance;                   //@synthesize totalDistance=_totalDistance - In the implementation block
@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) long long startDate;                       //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) long long endDate;                         //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) BOOL hasTotalSteps; 
@property (assign,nonatomic) long long totalSteps;                      //@synthesize totalSteps=_totalSteps - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(long long)totalDistance;
-(void)setTotalDistance:(long long)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)activityType;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setEndDate:(long long)arg1 ;
-(void)setStartDate:(long long)arg1 ;
-(long long)startDate;
-(long long)endDate;
-(void)setHasStartDate:(BOOL)arg1 ;
-(BOOL)hasStartDate;
-(void)setHasEndDate:(BOOL)arg1 ;
-(BOOL)hasEndDate;
-(void)setActivityType:(int)arg1 ;
-(void)setHasActivityType:(BOOL)arg1 ;
-(BOOL)hasActivityType;
-(id)activityTypeAsString:(int)arg1 ;
-(int)StringAsActivityType:(id)arg1 ;
-(void)setDurationMs:(long long)arg1 ;
-(void)setHasDurationMs:(BOOL)arg1 ;
-(BOOL)hasDurationMs;
-(void)setTotalEnergyBurned:(long long)arg1 ;
-(void)setHasTotalEnergyBurned:(BOOL)arg1 ;
-(BOOL)hasTotalEnergyBurned;
-(void)setHasTotalDistance:(BOOL)arg1 ;
-(BOOL)hasTotalDistance;
-(void)setTotalSteps:(long long)arg1 ;
-(void)setHasTotalSteps:(BOOL)arg1 ;
-(BOOL)hasTotalSteps;
-(long long)durationMs;
-(long long)totalEnergyBurned;
-(long long)totalSteps;
@end

