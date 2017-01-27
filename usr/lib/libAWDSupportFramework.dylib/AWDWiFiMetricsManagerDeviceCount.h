/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:35:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricsManagerDeviceCount : PBCodable <NSCopying> {

	double _timeSinceBoot;
	unsigned long long _timestamp;
	unsigned _deviceCount;
	unsigned _deviceIdentifierMap;
	unsigned _deviceInitFailureReason;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceCount; 
@property (assign,nonatomic) unsigned deviceCount;                          //@synthesize deviceCount=_deviceCount - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceBoot; 
@property (assign,nonatomic) double timeSinceBoot;                          //@synthesize timeSinceBoot=_timeSinceBoot - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceIdentifierMap; 
@property (assign,nonatomic) unsigned deviceIdentifierMap;                  //@synthesize deviceIdentifierMap=_deviceIdentifierMap - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceInitFailureReason; 
@property (assign,nonatomic) unsigned deviceInitFailureReason;              //@synthesize deviceInitFailureReason=_deviceInitFailureReason - In the implementation block
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
-(void)setDeviceCount:(unsigned)arg1 ;
-(void)setHasDeviceCount:(BOOL)arg1 ;
-(BOOL)hasDeviceCount;
-(void)setTimeSinceBoot:(double)arg1 ;
-(void)setHasTimeSinceBoot:(BOOL)arg1 ;
-(BOOL)hasTimeSinceBoot;
-(void)setDeviceIdentifierMap:(unsigned)arg1 ;
-(void)setHasDeviceIdentifierMap:(BOOL)arg1 ;
-(BOOL)hasDeviceIdentifierMap;
-(void)setDeviceInitFailureReason:(unsigned)arg1 ;
-(void)setHasDeviceInitFailureReason:(BOOL)arg1 ;
-(BOOL)hasDeviceInitFailureReason;
-(unsigned)deviceCount;
-(double)timeSinceBoot;
-(unsigned)deviceIdentifierMap;
-(unsigned)deviceInitFailureReason;
@end

