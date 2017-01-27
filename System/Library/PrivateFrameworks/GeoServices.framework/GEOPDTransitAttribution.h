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

@class NSMutableArray;

@interface GEOPDTransitAttribution : PBCodable <NSCopying> {

	NSMutableArray* _providerNames;

}

@property (nonatomic,retain) NSMutableArray * providerNames;              //@synthesize providerNames=_providerNames - In the implementation block
+(id)transitAttributionForPlaceData:(id)arg1 ;
+(Class)providerNameType;
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
-(void)clearProviderNames;
-(void)addProviderName:(id)arg1 ;
-(unsigned long long)providerNamesCount;
-(id)providerNameAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)providerNames;
-(void)setProviderNames:(NSMutableArray *)arg1 ;
@end

