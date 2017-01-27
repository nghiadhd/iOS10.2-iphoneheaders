/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDAWDHealthKitRoutineLocation;

@interface HDAWDHealthKitRoutineLocationVisitEvent : PBCodable <NSCopying> {

	long long _arrivalDate;
	unsigned long long _timestamp;
	HDAWDHealthKitRoutineLocation* _location;
	SCD_Struct_HD18 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) HDAWDHealthKitRoutineLocation * location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasArrivalDate; 
@property (assign,nonatomic) long long arrivalDate;                                 //@synthesize arrivalDate=_arrivalDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(HDAWDHealthKitRoutineLocation *)location;
-(void)setLocation:(HDAWDHealthKitRoutineLocation *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLocation;
-(long long)arrivalDate;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setArrivalDate:(long long)arg1 ;
-(void)setHasArrivalDate:(BOOL)arg1 ;
-(BOOL)hasArrivalDate;
@end

