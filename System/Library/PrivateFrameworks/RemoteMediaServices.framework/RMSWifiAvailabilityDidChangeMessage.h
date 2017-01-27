/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RMSWifiAvailabilityDidChangeMessage : PBCodable <NSCopying> {

	int _sessionIdentifier;
	BOOL _wifiAvailable;
	SCD_Struct_RM4 _has;

}

@property (assign,nonatomic) BOOL hasSessionIdentifier; 
@property (assign,nonatomic) int sessionIdentifier;                  //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasWifiAvailable; 
@property (assign,nonatomic) BOOL wifiAvailable;                     //@synthesize wifiAvailable=_wifiAvailable - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)sessionIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasSessionIdentifier;
-(void)setSessionIdentifier:(int)arg1 ;
-(void)setHasSessionIdentifier:(BOOL)arg1 ;
-(BOOL)wifiAvailable;
-(void)setWifiAvailable:(BOOL)arg1 ;
-(void)setHasWifiAvailable:(BOOL)arg1 ;
-(BOOL)hasWifiAvailable;
@end

