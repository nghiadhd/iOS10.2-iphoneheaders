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

@interface GEORPVisibleTileSet : PBCodable <NSCopying> {

	GEORPVisibleTileKey* _tileKeys;
	unsigned long long _tileKeysCount;
	unsigned long long _tileKeysSpace;
	unsigned _identifier;
	int _style;
	SCD_Struct_GE45 _has;

}

@property (assign,nonatomic) BOOL hasStyle; 
@property (assign,nonatomic) int style;                                       //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL hasIdentifier; 
@property (assign,nonatomic) unsigned identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long tileKeysCount; 
@property (nonatomic,readonly) GEORPVisibleTileKey* tileKeys; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)identifier;
-(int)style;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(unsigned)arg1 ;
-(void)setStyle:(int)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)styleAsString:(int)arg1 ;
-(int)StringAsStyle:(id)arg1 ;
-(BOOL)hasIdentifier;
-(void)setHasStyle:(BOOL)arg1 ;
-(BOOL)hasStyle;
-(GEORPVisibleTileKey*)tileKeys;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(unsigned long long)tileKeysCount;
-(void)clearTileKeys;
-(void)addTileKey:(GEORPVisibleTileKey)arg1 ;
-(GEORPVisibleTileKey)tileKeyAtIndex:(unsigned long long)arg1 ;
-(void)setTileKeys:(GEORPVisibleTileKey*)arg1 count:(unsigned long long)arg2 ;
@end

