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

@interface GEORouteDetails : PBCodable <NSCopying> {

	double _timeSinceRouteResponse;
	int _resultIndex;
	unsigned _stepID;
	BOOL _isNearCurrentlyDisplayedStep;
	BOOL _isNearRoute;
	BOOL _isUserTrackingOn;
	SCD_Struct_LO18 _has;

}

@property (assign,nonatomic) BOOL hasResultIndex; 
@property (assign,nonatomic) int resultIndex;                                   //@synthesize resultIndex=_resultIndex - In the implementation block
@property (assign,nonatomic) BOOL hasStepID; 
@property (assign,nonatomic) unsigned stepID;                                   //@synthesize stepID=_stepID - In the implementation block
@property (assign,nonatomic) BOOL hasIsNearRoute; 
@property (assign,nonatomic) BOOL isNearRoute;                                  //@synthesize isNearRoute=_isNearRoute - In the implementation block
@property (assign,nonatomic) BOOL hasIsNearCurrentlyDisplayedStep; 
@property (assign,nonatomic) BOOL isNearCurrentlyDisplayedStep;                 //@synthesize isNearCurrentlyDisplayedStep=_isNearCurrentlyDisplayedStep - In the implementation block
@property (assign,nonatomic) BOOL hasIsUserTrackingOn; 
@property (assign,nonatomic) BOOL isUserTrackingOn;                             //@synthesize isUserTrackingOn=_isUserTrackingOn - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceRouteResponse; 
@property (assign,nonatomic) double timeSinceRouteResponse;                     //@synthesize timeSinceRouteResponse=_timeSinceRouteResponse - In the implementation block
+(id)routeDetailsWithResultIndex:(int)arg1 ;
+(id)routeDetailsWithResultIndex:(int)arg1 stepID:(int)arg2 ;
+(id)routeDetailsWithResultIndex:(int)arg1 stepID:(int)arg2 nearRoute:(BOOL)arg3 nearCurrentlyDisplayedStep:(BOOL)arg4 userTrackingOn:(BOOL)arg5 timeSinceResponse:(double)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setStepID:(unsigned)arg1 ;
-(void)setHasStepID:(BOOL)arg1 ;
-(BOOL)hasStepID;
-(unsigned)stepID;
-(void)setResultIndex:(int)arg1 ;
-(void)setHasResultIndex:(BOOL)arg1 ;
-(BOOL)hasResultIndex;
-(void)setIsNearRoute:(BOOL)arg1 ;
-(void)setHasIsNearRoute:(BOOL)arg1 ;
-(BOOL)hasIsNearRoute;
-(void)setIsNearCurrentlyDisplayedStep:(BOOL)arg1 ;
-(void)setHasIsNearCurrentlyDisplayedStep:(BOOL)arg1 ;
-(BOOL)hasIsNearCurrentlyDisplayedStep;
-(void)setIsUserTrackingOn:(BOOL)arg1 ;
-(void)setHasIsUserTrackingOn:(BOOL)arg1 ;
-(BOOL)hasIsUserTrackingOn;
-(void)setTimeSinceRouteResponse:(double)arg1 ;
-(void)setHasTimeSinceRouteResponse:(BOOL)arg1 ;
-(BOOL)hasTimeSinceRouteResponse;
-(int)resultIndex;
-(BOOL)isNearRoute;
-(BOOL)isNearCurrentlyDisplayedStep;
-(BOOL)isUserTrackingOn;
-(double)timeSinceRouteResponse;
-(id)initWithResultIndex:(int)arg1 ;
@end

