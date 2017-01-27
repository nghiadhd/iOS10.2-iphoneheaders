/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOResource;

@interface GEOStaleResource : PBCodable <NSCopying> {

	double _originalTimestamp;
	GEOResource* _desiredResource;
	GEOResource* _fallbackResource;
	SCD_Struct_GE15 _has;

}

@property (nonatomic,readonly) BOOL hasDesiredResource; 
@property (nonatomic,retain) GEOResource * desiredResource;               //@synthesize desiredResource=_desiredResource - In the implementation block
@property (nonatomic,readonly) BOOL hasFallbackResource; 
@property (nonatomic,retain) GEOResource * fallbackResource;              //@synthesize fallbackResource=_fallbackResource - In the implementation block
@property (assign,nonatomic) BOOL hasOriginalTimestamp; 
@property (assign,nonatomic) double originalTimestamp;                    //@synthesize originalTimestamp=_originalTimestamp - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)originalTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDesiredResource;
-(BOOL)hasFallbackResource;
-(void)setOriginalTimestamp:(double)arg1 ;
-(void)setHasOriginalTimestamp:(BOOL)arg1 ;
-(BOOL)hasOriginalTimestamp;
-(GEOResource *)desiredResource;
-(void)setDesiredResource:(GEOResource *)arg1 ;
-(GEOResource *)fallbackResource;
-(void)setFallbackResource:(GEOResource *)arg1 ;
@end

