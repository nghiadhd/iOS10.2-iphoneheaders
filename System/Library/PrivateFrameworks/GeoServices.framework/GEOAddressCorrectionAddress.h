/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOLocation;

@interface GEOAddressCorrectionAddress : PBCodable <NSCopying> {

	NSString* _addressID;
	GEOLocation* _addressLocation;

}

@property (nonatomic,readonly) BOOL hasAddressLocation; 
@property (nonatomic,retain) GEOLocation * addressLocation;              //@synthesize addressLocation=_addressLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressID; 
@property (nonatomic,retain) NSString * addressID;                       //@synthesize addressID=_addressID - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasAddressID;
-(NSString *)addressID;
-(void)setAddressID:(NSString *)arg1 ;
-(BOOL)hasAddressLocation;
-(GEOLocation *)addressLocation;
-(void)setAddressLocation:(GEOLocation *)arg1 ;
@end

