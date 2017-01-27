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

@interface AWDWiFiMetricIPv4DHCPLatency : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _dhcpLatencyMilliSecs;
	unsigned _dhcpLeaseMins;
	unsigned _securityType;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasDhcpLatencyMilliSecs; 
@property (assign,nonatomic) unsigned dhcpLatencyMilliSecs;              //@synthesize dhcpLatencyMilliSecs=_dhcpLatencyMilliSecs - In the implementation block
@property (assign,nonatomic) BOOL hasSecurityType; 
@property (assign,nonatomic) unsigned securityType;                      //@synthesize securityType=_securityType - In the implementation block
@property (assign,nonatomic) BOOL hasDhcpLeaseMins; 
@property (assign,nonatomic) unsigned dhcpLeaseMins;                     //@synthesize dhcpLeaseMins=_dhcpLeaseMins - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
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
-(void)setDhcpLatencyMilliSecs:(unsigned)arg1 ;
-(void)setHasDhcpLatencyMilliSecs:(BOOL)arg1 ;
-(BOOL)hasDhcpLatencyMilliSecs;
-(void)setSecurityType:(unsigned)arg1 ;
-(void)setHasSecurityType:(BOOL)arg1 ;
-(BOOL)hasSecurityType;
-(void)setDhcpLeaseMins:(unsigned)arg1 ;
-(void)setHasDhcpLeaseMins:(BOOL)arg1 ;
-(BOOL)hasDhcpLeaseMins;
-(unsigned)dhcpLatencyMilliSecs;
-(unsigned)securityType;
-(unsigned)dhcpLeaseMins;
@end

