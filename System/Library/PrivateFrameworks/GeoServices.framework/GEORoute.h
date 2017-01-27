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

@class NSMutableArray, NSData, NSString, GEORouteInformation;

@interface GEORoute : PBCodable <NSCopying> {

	SCD_Struct_GE1* _advisorys;
	SCD_Struct_GE19* _incidentEndOffsetsInRoutes;
	SCD_Struct_GE19* _incidentIndices;
	SCD_Struct_GE19* _trafficColorOffsets;
	SCD_Struct_GE19* _trafficColors;
	NSMutableArray* _advisoryNotices;
	NSData* _arrivalRouteID;
	unsigned _arrivalStepID;
	NSData* _basicPoints;
	NSData* _departureRouteID;
	unsigned _departureStepID;
	unsigned _distance;
	int _drivingSide;
	NSMutableArray* _endingRouteInstructions;
	unsigned _expectedTime;
	unsigned _historicTravelTime;
	NSString* _name;
	NSString* _phoneticName;
	NSMutableArray* _routeDescriptions;
	NSData* _routeID;
	NSMutableArray* _routeNames;
	GEORouteInformation* _routePlanningDescription;
	int _routeType;
	NSMutableArray* _startingRouteInstructions;
	unsigned _staticTravelTime;
	NSMutableArray* _steps;
	NSString* _trafficDescription;
	NSString* _trafficDescriptionLong;
	int _transportType;
	unsigned _travelTimeAggressiveEstimate;
	unsigned _travelTimeConservativeEstimate;
	NSData* _unpackedLatLngVertices;
	NSData* _zilchPoints;
	BOOL _avoidsHighways;
	BOOL _avoidsTolls;
	BOOL _avoidsTraffic;
	SCD_Struct_GE81 _has;

}

@property (readonly) unsigned pointCount; 
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType;                                                 //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,retain) NSMutableArray * steps;                                            //@synthesize steps=_steps - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticName; 
@property (nonatomic,retain) NSString * phoneticName;                                           //@synthesize phoneticName=_phoneticName - In the implementation block
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance;                                                 //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) BOOL hasExpectedTime; 
@property (assign,nonatomic) unsigned expectedTime;                                             //@synthesize expectedTime=_expectedTime - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteID; 
@property (nonatomic,retain) NSData * routeID;                                                  //@synthesize routeID=_routeID - In the implementation block
@property (assign,nonatomic) BOOL hasRouteType; 
@property (assign,nonatomic) int routeType;                                                     //@synthesize routeType=_routeType - In the implementation block
@property (nonatomic,readonly) BOOL hasZilchPoints; 
@property (nonatomic,retain) NSData * zilchPoints;                                              //@synthesize zilchPoints=_zilchPoints - In the implementation block
@property (assign,nonatomic) BOOL hasDrivingSide; 
@property (assign,nonatomic) int drivingSide;                                                   //@synthesize drivingSide=_drivingSide - In the implementation block
@property (nonatomic,readonly) BOOL hasDepartureRouteID; 
@property (nonatomic,retain) NSData * departureRouteID;                                         //@synthesize departureRouteID=_departureRouteID - In the implementation block
@property (assign,nonatomic) BOOL hasDepartureStepID; 
@property (assign,nonatomic) unsigned departureStepID;                                          //@synthesize departureStepID=_departureStepID - In the implementation block
@property (nonatomic,readonly) BOOL hasArrivalRouteID; 
@property (nonatomic,retain) NSData * arrivalRouteID;                                           //@synthesize arrivalRouteID=_arrivalRouteID - In the implementation block
@property (assign,nonatomic) BOOL hasArrivalStepID; 
@property (assign,nonatomic) unsigned arrivalStepID;                                            //@synthesize arrivalStepID=_arrivalStepID - In the implementation block
@property (nonatomic,readonly) BOOL hasBasicPoints; 
@property (nonatomic,retain) NSData * basicPoints;                                              //@synthesize basicPoints=_basicPoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * advisoryNotices;                                  //@synthesize advisoryNotices=_advisoryNotices - In the implementation block
@property (nonatomic,readonly) unsigned long long trafficColorsCount; 
@property (nonatomic,readonly) unsigned* trafficColors; 
@property (nonatomic,readonly) unsigned long long trafficColorOffsetsCount; 
@property (nonatomic,readonly) unsigned* trafficColorOffsets; 
@property (nonatomic,retain) NSMutableArray * routeNames;                                       //@synthesize routeNames=_routeNames - In the implementation block
@property (assign,nonatomic) BOOL hasHistoricTravelTime; 
@property (assign,nonatomic) unsigned historicTravelTime;                                       //@synthesize historicTravelTime=_historicTravelTime - In the implementation block
@property (nonatomic,readonly) unsigned long long advisorysCount; 
@property (nonatomic,readonly) int* advisorys; 
@property (assign,nonatomic) BOOL hasTravelTimeAggressiveEstimate; 
@property (assign,nonatomic) unsigned travelTimeAggressiveEstimate;                             //@synthesize travelTimeAggressiveEstimate=_travelTimeAggressiveEstimate - In the implementation block
@property (assign,nonatomic) BOOL hasTravelTimeConservativeEstimate; 
@property (assign,nonatomic) unsigned travelTimeConservativeEstimate;                           //@synthesize travelTimeConservativeEstimate=_travelTimeConservativeEstimate - In the implementation block
@property (assign,nonatomic) BOOL hasStaticTravelTime; 
@property (assign,nonatomic) unsigned staticTravelTime;                                         //@synthesize staticTravelTime=_staticTravelTime - In the implementation block
@property (assign,nonatomic) BOOL hasAvoidsTolls; 
@property (assign,nonatomic) BOOL avoidsTolls;                                                  //@synthesize avoidsTolls=_avoidsTolls - In the implementation block
@property (assign,nonatomic) BOOL hasAvoidsHighways; 
@property (assign,nonatomic) BOOL avoidsHighways;                                               //@synthesize avoidsHighways=_avoidsHighways - In the implementation block
@property (assign,nonatomic) BOOL hasAvoidsTraffic; 
@property (assign,nonatomic) BOOL avoidsTraffic;                                                //@synthesize avoidsTraffic=_avoidsTraffic - In the implementation block
@property (nonatomic,readonly) BOOL hasUnpackedLatLngVertices; 
@property (nonatomic,retain) NSData * unpackedLatLngVertices;                                   //@synthesize unpackedLatLngVertices=_unpackedLatLngVertices - In the implementation block
@property (nonatomic,readonly) unsigned long long incidentIndicesCount; 
@property (nonatomic,readonly) unsigned* incidentIndices; 
@property (nonatomic,readonly) unsigned long long incidentEndOffsetsInRoutesCount; 
@property (nonatomic,readonly) unsigned* incidentEndOffsetsInRoutes; 
@property (nonatomic,readonly) BOOL hasRoutePlanningDescription; 
@property (nonatomic,retain) GEORouteInformation * routePlanningDescription;                    //@synthesize routePlanningDescription=_routePlanningDescription - In the implementation block
@property (nonatomic,retain) NSMutableArray * routeDescriptions;                                //@synthesize routeDescriptions=_routeDescriptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * startingRouteInstructions;                        //@synthesize startingRouteInstructions=_startingRouteInstructions - In the implementation block
@property (nonatomic,retain) NSMutableArray * endingRouteInstructions;                          //@synthesize endingRouteInstructions=_endingRouteInstructions - In the implementation block
@property (nonatomic,readonly) BOOL hasTrafficDescription; 
@property (nonatomic,retain) NSString * trafficDescription;                                     //@synthesize trafficDescription=_trafficDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasTrafficDescriptionLong; 
@property (nonatomic,retain) NSString * trafficDescriptionLong;                                 //@synthesize trafficDescriptionLong=_trafficDescriptionLong - In the implementation block
+(Class)stepType;
+(Class)advisoryNoticeType;
+(Class)routeNameType;
+(Class)routeDescriptionType;
+(Class)startingRouteInstructionType;
+(Class)endingRouteInstructionType;
-(id)maneuverImageForStep:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(id)instructionsForStep:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDistance:(unsigned)arg1 ;
-(unsigned)distance;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRouteID;
-(BOOL)hasZilchPoints;
-(NSData *)routeID;
-(void)setRouteID:(NSData *)arg1 ;
-(NSData *)zilchPoints;
-(void)setZilchPoints:(NSData *)arg1 ;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(BOOL)hasName;
-(BOOL)hasPhoneticName;
-(NSString *)phoneticName;
-(void)setPhoneticName:(NSString *)arg1 ;
-(int)routeType;
-(void)clearSteps;
-(void)addStep:(id)arg1 ;
-(unsigned long long)stepsCount;
-(id)stepAtIndex:(unsigned long long)arg1 ;
-(void)setHasDistance:(BOOL)arg1 ;
-(BOOL)hasDistance;
-(void)setExpectedTime:(unsigned)arg1 ;
-(void)setHasExpectedTime:(BOOL)arg1 ;
-(BOOL)hasExpectedTime;
-(void)setRouteType:(int)arg1 ;
-(void)setHasRouteType:(BOOL)arg1 ;
-(BOOL)hasRouteType;
-(id)routeTypeAsString:(int)arg1 ;
-(int)StringAsRouteType:(id)arg1 ;
-(int)drivingSide;
-(void)setDrivingSide:(int)arg1 ;
-(void)setHasDrivingSide:(BOOL)arg1 ;
-(BOOL)hasDrivingSide;
-(id)drivingSideAsString:(int)arg1 ;
-(int)StringAsDrivingSide:(id)arg1 ;
-(BOOL)hasDepartureRouteID;
-(void)setDepartureStepID:(unsigned)arg1 ;
-(void)setHasDepartureStepID:(BOOL)arg1 ;
-(BOOL)hasDepartureStepID;
-(BOOL)hasArrivalRouteID;
-(void)setArrivalStepID:(unsigned)arg1 ;
-(void)setHasArrivalStepID:(BOOL)arg1 ;
-(BOOL)hasArrivalStepID;
-(BOOL)hasBasicPoints;
-(void)clearAdvisoryNotices;
-(void)addAdvisoryNotice:(id)arg1 ;
-(unsigned long long)advisoryNoticesCount;
-(id)advisoryNoticeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)trafficColorsCount;
-(unsigned*)trafficColors;
-(void)clearTrafficColors;
-(void)addTrafficColor:(unsigned)arg1 ;
-(unsigned)trafficColorAtIndex:(unsigned long long)arg1 ;
-(void)setTrafficColors:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)trafficColorOffsetsCount;
-(unsigned*)trafficColorOffsets;
-(void)clearTrafficColorOffsets;
-(void)addTrafficColorOffset:(unsigned)arg1 ;
-(unsigned)trafficColorOffsetAtIndex:(unsigned long long)arg1 ;
-(void)setTrafficColorOffsets:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)clearRouteNames;
-(void)addRouteName:(id)arg1 ;
-(unsigned long long)routeNamesCount;
-(id)routeNameAtIndex:(unsigned long long)arg1 ;
-(void)setHistoricTravelTime:(unsigned)arg1 ;
-(void)setHasHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasHistoricTravelTime;
-(unsigned long long)advisorysCount;
-(int*)advisorys;
-(void)clearAdvisorys;
-(void)addAdvisory:(int)arg1 ;
-(int)advisoryAtIndex:(unsigned long long)arg1 ;
-(void)setAdvisorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)advisorysAsString:(int)arg1 ;
-(int)StringAsAdvisorys:(id)arg1 ;
-(void)setTravelTimeAggressiveEstimate:(unsigned)arg1 ;
-(void)setHasTravelTimeAggressiveEstimate:(BOOL)arg1 ;
-(BOOL)hasTravelTimeAggressiveEstimate;
-(void)setTravelTimeConservativeEstimate:(unsigned)arg1 ;
-(void)setHasTravelTimeConservativeEstimate:(BOOL)arg1 ;
-(BOOL)hasTravelTimeConservativeEstimate;
-(void)setStaticTravelTime:(unsigned)arg1 ;
-(void)setHasStaticTravelTime:(BOOL)arg1 ;
-(BOOL)hasStaticTravelTime;
-(void)setAvoidsTolls:(BOOL)arg1 ;
-(void)setHasAvoidsTolls:(BOOL)arg1 ;
-(BOOL)hasAvoidsTolls;
-(void)setAvoidsHighways:(BOOL)arg1 ;
-(void)setHasAvoidsHighways:(BOOL)arg1 ;
-(BOOL)hasAvoidsHighways;
-(void)setAvoidsTraffic:(BOOL)arg1 ;
-(void)setHasAvoidsTraffic:(BOOL)arg1 ;
-(BOOL)hasAvoidsTraffic;
-(BOOL)hasUnpackedLatLngVertices;
-(unsigned long long)incidentIndicesCount;
-(unsigned*)incidentIndices;
-(void)clearIncidentIndices;
-(void)addIncidentIndices:(unsigned)arg1 ;
-(unsigned)incidentIndicesAtIndex:(unsigned long long)arg1 ;
-(void)setIncidentIndices:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)incidentEndOffsetsInRoutesCount;
-(unsigned*)incidentEndOffsetsInRoutes;
-(void)clearIncidentEndOffsetsInRoutes;
-(void)addIncidentEndOffsetsInRoute:(unsigned)arg1 ;
-(unsigned)incidentEndOffsetsInRouteAtIndex:(unsigned long long)arg1 ;
-(void)setIncidentEndOffsetsInRoutes:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasRoutePlanningDescription;
-(void)clearRouteDescriptions;
-(void)addRouteDescription:(id)arg1 ;
-(unsigned long long)routeDescriptionsCount;
-(id)routeDescriptionAtIndex:(unsigned long long)arg1 ;
-(void)clearStartingRouteInstructions;
-(void)addStartingRouteInstruction:(id)arg1 ;
-(unsigned long long)startingRouteInstructionsCount;
-(id)startingRouteInstructionAtIndex:(unsigned long long)arg1 ;
-(void)clearEndingRouteInstructions;
-(void)addEndingRouteInstruction:(id)arg1 ;
-(unsigned long long)endingRouteInstructionsCount;
-(id)endingRouteInstructionAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasTrafficDescription;
-(BOOL)hasTrafficDescriptionLong;
-(NSMutableArray *)steps;
-(void)setSteps:(NSMutableArray *)arg1 ;
-(unsigned)expectedTime;
-(NSData *)departureRouteID;
-(void)setDepartureRouteID:(NSData *)arg1 ;
-(unsigned)departureStepID;
-(NSData *)arrivalRouteID;
-(void)setArrivalRouteID:(NSData *)arg1 ;
-(unsigned)arrivalStepID;
-(NSData *)basicPoints;
-(void)setBasicPoints:(NSData *)arg1 ;
-(NSMutableArray *)advisoryNotices;
-(void)setAdvisoryNotices:(NSMutableArray *)arg1 ;
-(NSMutableArray *)routeNames;
-(void)setRouteNames:(NSMutableArray *)arg1 ;
-(unsigned)historicTravelTime;
-(unsigned)travelTimeAggressiveEstimate;
-(unsigned)travelTimeConservativeEstimate;
-(unsigned)staticTravelTime;
-(BOOL)avoidsTolls;
-(BOOL)avoidsHighways;
-(BOOL)avoidsTraffic;
-(NSData *)unpackedLatLngVertices;
-(void)setUnpackedLatLngVertices:(NSData *)arg1 ;
-(GEORouteInformation *)routePlanningDescription;
-(void)setRoutePlanningDescription:(GEORouteInformation *)arg1 ;
-(NSMutableArray *)routeDescriptions;
-(void)setRouteDescriptions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)startingRouteInstructions;
-(void)setStartingRouteInstructions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)endingRouteInstructions;
-(void)setEndingRouteInstructions:(NSMutableArray *)arg1 ;
-(NSString *)trafficDescription;
-(void)setTrafficDescription:(NSString *)arg1 ;
-(NSString *)trafficDescriptionLong;
-(void)setTrafficDescriptionLong:(NSString *)arg1 ;
-(void*)controlPoints;
-(unsigned)pointCount;
-(SCD_Struct_GE26)pointAt:(unsigned)arg1 ;
-(unsigned long long)stepIndexForPointIndex:(unsigned)arg1 ;
-(int)transportTypeForStep:(id)arg1 ;
-(id)newETARouteFromStepIndex:(unsigned long long)arg1 stepPercentRemaining:(double)arg2 ;
-(unsigned long long)distanceFromStepIndex:(unsigned long long)arg1 toStepIndex:(unsigned long long)arg2 ;
-(id)simplifiedDescription;
-(id)convertToFullRoute:(id)arg1 includeDepartureRoutes:(BOOL)arg2 uniquePointRange:(NSRange*)arg3 ;
-(id)newETARoute;
-(BOOL)isContingentRouteFor:(id)arg1 afterPoint:(unsigned)arg2 mainRoutes:(id)arg3 ;
-(BOOL)isMainOrAlternateRoute;
-(BOOL)isContingentRoute;
-(BOOL)unpackLatLngVertices;
-(BOOL)unpackZilchPoints;
-(unsigned long long)indexForStepID:(unsigned long long)arg1 ;
-(BOOL)unpackBasicPoints;
@end

