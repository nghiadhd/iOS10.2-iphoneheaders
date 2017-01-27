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

@interface GEOCacheHitLogMessage : PBCodable <NSCopying> {

	unsigned _cacheHitCount;
	unsigned _cacheMissCount;
	int _cacheType;
	int _tileSetStyle;
	SCD_Struct_GE69 _has;

}

@property (assign,nonatomic) BOOL hasCacheType; 
@property (assign,nonatomic) int cacheType;                        //@synthesize cacheType=_cacheType - In the implementation block
@property (assign,nonatomic) BOOL hasTileSetStyle; 
@property (assign,nonatomic) int tileSetStyle;                     //@synthesize tileSetStyle=_tileSetStyle - In the implementation block
@property (assign,nonatomic) BOOL hasCacheHitCount; 
@property (assign,nonatomic) unsigned cacheHitCount;               //@synthesize cacheHitCount=_cacheHitCount - In the implementation block
@property (assign,nonatomic) BOOL hasCacheMissCount; 
@property (assign,nonatomic) unsigned cacheMissCount;              //@synthesize cacheMissCount=_cacheMissCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)cacheType;
-(void)setCacheType:(int)arg1 ;
-(void)setHasCacheType:(BOOL)arg1 ;
-(BOOL)hasCacheType;
-(id)cacheTypeAsString:(int)arg1 ;
-(int)StringAsCacheType:(id)arg1 ;
-(void)setCacheHitCount:(unsigned)arg1 ;
-(void)setHasCacheHitCount:(BOOL)arg1 ;
-(BOOL)hasCacheHitCount;
-(void)setCacheMissCount:(unsigned)arg1 ;
-(void)setHasCacheMissCount:(BOOL)arg1 ;
-(BOOL)hasCacheMissCount;
-(unsigned)cacheHitCount;
-(unsigned)cacheMissCount;
-(int)tileSetStyle;
-(void)setTileSetStyle:(int)arg1 ;
-(void)setHasTileSetStyle:(BOOL)arg1 ;
-(BOOL)hasTileSetStyle;
-(id)tileSetStyleAsString:(int)arg1 ;
-(int)StringAsTileSetStyle:(id)arg1 ;
@end

