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

@class NSMutableArray;

@interface GEOServiceVersion : PBCodable <NSCopying> {

	unsigned _minimumVersion;
	NSMutableArray* _versionDomains;
	SCD_Struct_GE15 _has;

}

@property (nonatomic,retain) NSMutableArray * versionDomains;              //@synthesize versionDomains=_versionDomains - In the implementation block
@property (assign,nonatomic) BOOL hasMinimumVersion; 
@property (assign,nonatomic) unsigned minimumVersion;                      //@synthesize minimumVersion=_minimumVersion - In the implementation block
+(Class)versionDomainType;
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
-(void)clearVersionDomains;
-(void)addVersionDomain:(id)arg1 ;
-(unsigned long long)versionDomainsCount;
-(id)versionDomainAtIndex:(unsigned long long)arg1 ;
-(void)setMinimumVersion:(unsigned)arg1 ;
-(void)setHasMinimumVersion:(BOOL)arg1 ;
-(BOOL)hasMinimumVersion;
-(NSMutableArray *)versionDomains;
-(void)setVersionDomains:(NSMutableArray *)arg1 ;
-(unsigned)minimumVersion;
@end

