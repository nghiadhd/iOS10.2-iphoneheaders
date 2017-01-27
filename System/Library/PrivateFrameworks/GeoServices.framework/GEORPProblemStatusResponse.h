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

@class NSMutableArray;

@interface GEORPProblemStatusResponse : PBCodable <NSCopying> {

	NSMutableArray* _problemStatus;
	int _statusCode;
	SCD_Struct_GE15 _has;

}

@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode;                              //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,retain) NSMutableArray * problemStatus;              //@synthesize problemStatus=_problemStatus - In the implementation block
+(Class)problemStatusType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)statusCode;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setStatusCode:(int)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(BOOL)hasStatusCode;
-(id)statusCodeAsString:(int)arg1 ;
-(int)StringAsStatusCode:(id)arg1 ;
-(void)clearProblemStatus;
-(void)addProblemStatus:(id)arg1 ;
-(unsigned long long)problemStatusCount;
-(id)problemStatusAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)problemStatus;
-(void)setProblemStatus:(NSMutableArray *)arg1 ;
@end

