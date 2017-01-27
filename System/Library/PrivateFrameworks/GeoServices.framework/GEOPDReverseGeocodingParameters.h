/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDReverseGeocodingParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _locations;
	int _placeTypeLimit;
	BOOL _preserveOriginalLocation;
	SCD_Struct_GE45 _has;

}

@property (nonatomic,retain) NSMutableArray * locations;                     //@synthesize locations=_locations - In the implementation block
@property (assign,nonatomic) BOOL hasPlaceTypeLimit; 
@property (assign,nonatomic) int placeTypeLimit;                             //@synthesize placeTypeLimit=_placeTypeLimit - In the implementation block
@property (assign,nonatomic) BOOL hasPreserveOriginalLocation; 
@property (assign,nonatomic) BOOL preserveOriginalLocation;                  //@synthesize preserveOriginalLocation=_preserveOriginalLocation - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)locationType;
-(void)setLocations:(NSMutableArray *)arg1 ;
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
-(PBUnknownFields *)unknownFields;
-(int)placeTypeLimit;
-(void)setPlaceTypeLimit:(int)arg1 ;
-(void)setHasPlaceTypeLimit:(BOOL)arg1 ;
-(BOOL)hasPlaceTypeLimit;
-(id)placeTypeLimitAsString:(int)arg1 ;
-(int)StringAsPlaceTypeLimit:(id)arg1 ;
-(NSMutableArray *)locations;
-(void)clearLocations;
-(void)addLocation:(id)arg1 ;
-(unsigned long long)locationsCount;
-(id)locationAtIndex:(unsigned long long)arg1 ;
-(void)setPreserveOriginalLocation:(BOOL)arg1 ;
-(void)setHasPreserveOriginalLocation:(BOOL)arg1 ;
-(BOOL)hasPreserveOriginalLocation;
-(BOOL)preserveOriginalLocation;
@end

