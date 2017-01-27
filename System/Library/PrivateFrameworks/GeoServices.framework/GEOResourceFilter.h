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

@interface GEOResourceFilter : PBCodable <NSCopying> {

	SCD_Struct_GE1* _scales;
	SCD_Struct_GE1* _scenarios;

}

@property (nonatomic,readonly) unsigned long long scalesCount; 
@property (nonatomic,readonly) int* scales; 
@property (nonatomic,readonly) unsigned long long scenariosCount; 
@property (nonatomic,readonly) int* scenarios; 
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
-(unsigned long long)scalesCount;
-(int*)scales;
-(void)clearScales;
-(void)addScale:(int)arg1 ;
-(int)scaleAtIndex:(unsigned long long)arg1 ;
-(void)setScales:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)scalesAsString:(int)arg1 ;
-(int)StringAsScales:(id)arg1 ;
-(unsigned long long)scenariosCount;
-(int*)scenarios;
-(void)clearScenarios;
-(void)addScenario:(int)arg1 ;
-(int)scenarioAtIndex:(unsigned long long)arg1 ;
-(void)setScenarios:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)scenariosAsString:(int)arg1 ;
-(int)StringAsScenarios:(id)arg1 ;
@end

