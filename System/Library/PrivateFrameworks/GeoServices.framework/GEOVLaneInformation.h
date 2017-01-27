/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOVLaneInformation : PBCodable <NSCopying> {

	unsigned _style;
	unsigned _validityMask;

}

@property (assign,nonatomic) unsigned style;                     //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned validityMask;              //@synthesize validityMask=_validityMask - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)style;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStyle:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)validityMask;
-(void)setValidityMask:(unsigned)arg1 ;
@end

