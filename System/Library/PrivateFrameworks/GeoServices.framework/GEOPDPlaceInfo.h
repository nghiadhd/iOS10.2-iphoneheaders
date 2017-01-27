/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLatLng, GEOTimezone;

@interface GEOPDPlaceInfo : PBCodable <NSCopying> {

	double _area;
	GEOLatLng* _center;
	int _knownAccuracy;
	GEOTimezone* _timezone;
	BOOL _isApproximateCenter;
	SCD_Struct_GE20 _has;

}

@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center;                       //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) BOOL hasArea; 
@property (assign,nonatomic) double area;                              //@synthesize area=_area - In the implementation block
@property (nonatomic,readonly) BOOL hasTimezone; 
@property (nonatomic,retain) GEOTimezone * timezone;                   //@synthesize timezone=_timezone - In the implementation block
@property (assign,nonatomic) BOOL hasIsApproximateCenter; 
@property (assign,nonatomic) BOOL isApproximateCenter;                 //@synthesize isApproximateCenter=_isApproximateCenter - In the implementation block
@property (assign,nonatomic) BOOL hasKnownAccuracy; 
@property (assign,nonatomic) int knownAccuracy;                        //@synthesize knownAccuracy=_knownAccuracy - In the implementation block
+(id)placeInfoForPlaceData:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GEOLatLng *)center;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasCenter;
-(int)knownAccuracy;
-(void)setKnownAccuracy:(int)arg1 ;
-(void)setHasKnownAccuracy:(BOOL)arg1 ;
-(BOOL)hasKnownAccuracy;
-(id)knownAccuracyAsString:(int)arg1 ;
-(int)StringAsKnownAccuracy:(id)arg1 ;
-(void)setArea:(double)arg1 ;
-(void)setHasArea:(BOOL)arg1 ;
-(BOOL)hasArea;
-(BOOL)hasTimezone;
-(void)setIsApproximateCenter:(BOOL)arg1 ;
-(void)setHasIsApproximateCenter:(BOOL)arg1 ;
-(BOOL)hasIsApproximateCenter;
-(double)area;
-(GEOTimezone *)timezone;
-(void)setTimezone:(GEOTimezone *)arg1 ;
-(BOOL)isApproximateCenter;
@end

