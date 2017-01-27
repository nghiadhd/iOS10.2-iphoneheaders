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

@class NSData;

@interface AWDWiFiMetricsKnownNetworksEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _eventType;
	unsigned _networkSecurity;
	unsigned _networkTypeBitMap;
	NSData* _oui;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) unsigned eventType;                        //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkTypeBitMap; 
@property (assign,nonatomic) unsigned networkTypeBitMap;                //@synthesize networkTypeBitMap=_networkTypeBitMap - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkSecurity; 
@property (assign,nonatomic) unsigned networkSecurity;                  //@synthesize networkSecurity=_networkSecurity - In the implementation block
@property (nonatomic,readonly) BOOL hasOui; 
@property (nonatomic,retain) NSData * oui;                              //@synthesize oui=_oui - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)eventType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setEventType:(unsigned)arg1 ;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(void)setOui:(NSData *)arg1 ;
-(BOOL)hasOui;
-(NSData *)oui;
-(void)setNetworkTypeBitMap:(unsigned)arg1 ;
-(void)setHasNetworkTypeBitMap:(BOOL)arg1 ;
-(BOOL)hasNetworkTypeBitMap;
-(void)setNetworkSecurity:(unsigned)arg1 ;
-(void)setHasNetworkSecurity:(BOOL)arg1 ;
-(BOOL)hasNetworkSecurity;
-(unsigned)networkTypeBitMap;
-(unsigned)networkSecurity;
@end

