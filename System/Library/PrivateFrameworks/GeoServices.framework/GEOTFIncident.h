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

@class NSString, NSMutableArray, NSData;

@interface GEOTFIncident : PBCodable <NSCopying> {

	SCD_Struct_GE73* _geoids;
	unsigned long long _durationMin;
	double _endOffset;
	double _latitude;
	double _longitude;
	double _startOffset;
	long long _startTime;
	long long _updateTime;
	unsigned _alertCCode;
	int _color;
	NSString* _crossStreet;
	float _delay;
	NSString* _incidentId;
	NSMutableArray* _infos;
	unsigned _laneClosureCount;
	int _laneClosureType;
	unsigned _maxZoomLevel;
	unsigned _minZoomLevel;
	NSData* _openlr;
	int _significance;
	float _speed;
	NSString* _street;
	int _trafficTrend;
	int _type;
	NSData* _zilch;
	BOOL _blocked;
	BOOL _endTimeReliable;
	BOOL _hardBlocked;
	BOOL _hidden;
	BOOL _navigationAlert;
	SCD_Struct_GE188 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long geoidsCount; 
@property (nonatomic,readonly) long long* geoids; 
@property (nonatomic,retain) NSMutableArray * infos;                        //@synthesize infos=_infos - In the implementation block
@property (nonatomic,readonly) BOOL hasIncidentId; 
@property (nonatomic,retain) NSString * incidentId;                         //@synthesize incidentId=_incidentId - In the implementation block
@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude;                               //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude;                              //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) long long startTime;                           //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasUpdateTime; 
@property (assign,nonatomic) long long updateTime;                          //@synthesize updateTime=_updateTime - In the implementation block
@property (assign,nonatomic) BOOL hasBlocked; 
@property (assign,nonatomic) BOOL blocked;                                  //@synthesize blocked=_blocked - In the implementation block
@property (nonatomic,readonly) BOOL hasStreet; 
@property (nonatomic,retain) NSString * street;                             //@synthesize street=_street - In the implementation block
@property (nonatomic,readonly) BOOL hasCrossStreet; 
@property (nonatomic,retain) NSString * crossStreet;                        //@synthesize crossStreet=_crossStreet - In the implementation block
@property (assign,nonatomic) BOOL hasLaneClosureCount; 
@property (assign,nonatomic) unsigned laneClosureCount;                     //@synthesize laneClosureCount=_laneClosureCount - In the implementation block
@property (assign,nonatomic) BOOL hasEndTimeReliable; 
@property (assign,nonatomic) BOOL endTimeReliable;                          //@synthesize endTimeReliable=_endTimeReliable - In the implementation block
@property (assign,nonatomic) BOOL hasLaneClosureType; 
@property (assign,nonatomic) int laneClosureType;                           //@synthesize laneClosureType=_laneClosureType - In the implementation block
@property (assign,nonatomic) BOOL hasHardBlocked; 
@property (assign,nonatomic) BOOL hardBlocked;                              //@synthesize hardBlocked=_hardBlocked - In the implementation block
@property (assign,nonatomic) BOOL hasStartOffset; 
@property (assign,nonatomic) double startOffset;                            //@synthesize startOffset=_startOffset - In the implementation block
@property (assign,nonatomic) BOOL hasEndOffset; 
@property (assign,nonatomic) double endOffset;                              //@synthesize endOffset=_endOffset - In the implementation block
@property (assign,nonatomic) BOOL hasDelay; 
@property (assign,nonatomic) float delay;                                   //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) BOOL hasSignificance; 
@property (assign,nonatomic) int significance;                              //@synthesize significance=_significance - In the implementation block
@property (assign,nonatomic) BOOL hasMinZoomLevel; 
@property (assign,nonatomic) unsigned minZoomLevel;                         //@synthesize minZoomLevel=_minZoomLevel - In the implementation block
@property (assign,nonatomic) BOOL hasMaxZoomLevel; 
@property (assign,nonatomic) unsigned maxZoomLevel;                         //@synthesize maxZoomLevel=_maxZoomLevel - In the implementation block
@property (assign,nonatomic) BOOL hasSpeed; 
@property (assign,nonatomic) float speed;                                   //@synthesize speed=_speed - In the implementation block
@property (assign,nonatomic) BOOL hasHidden; 
@property (assign,nonatomic) BOOL hidden;                                   //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) BOOL hasTrafficTrend; 
@property (assign,nonatomic) int trafficTrend;                              //@synthesize trafficTrend=_trafficTrend - In the implementation block
@property (assign,nonatomic) BOOL hasColor; 
@property (assign,nonatomic) int color;                                     //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) BOOL hasDurationMin; 
@property (assign,nonatomic) unsigned long long durationMin;                //@synthesize durationMin=_durationMin - In the implementation block
@property (nonatomic,readonly) BOOL hasZilch; 
@property (nonatomic,retain) NSData * zilch;                                //@synthesize zilch=_zilch - In the implementation block
@property (assign,nonatomic) BOOL hasAlertCCode; 
@property (assign,nonatomic) unsigned alertCCode;                           //@synthesize alertCCode=_alertCCode - In the implementation block
@property (assign,nonatomic) BOOL hasNavigationAlert; 
@property (assign,nonatomic) BOOL navigationAlert;                          //@synthesize navigationAlert=_navigationAlert - In the implementation block
@property (nonatomic,readonly) BOOL hasOpenlr; 
@property (nonatomic,retain) NSData * openlr;                               //@synthesize openlr=_openlr - In the implementation block
+(Class)infoType;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setSpeed:(float)arg1 ;
-(float)delay;
-(void)setDelay:(float)arg1 ;
-(void)setStartTime:(long long)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)color;
-(void)setColor:(int)arg1 ;
-(float)speed;
-(double)endOffset;
-(double)startOffset;
-(long long)startTime;
-(void)addInfo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setStartOffset:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setHasSpeed:(BOOL)arg1 ;
-(BOOL)hasSpeed;
-(void)setHasStartOffset:(BOOL)arg1 ;
-(BOOL)hasStartOffset;
-(void)setEndOffset:(double)arg1 ;
-(void)setHasEndOffset:(BOOL)arg1 ;
-(BOOL)hasEndOffset;
-(BOOL)hidden;
-(void)setHasHidden:(BOOL)arg1 ;
-(BOOL)hasHidden;
-(void)setHasColor:(BOOL)arg1 ;
-(BOOL)hasColor;
-(id)colorAsString:(int)arg1 ;
-(int)StringAsColor:(id)arg1 ;
-(BOOL)hasOpenlr;
-(NSData *)openlr;
-(void)setOpenlr:(NSData *)arg1 ;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(BOOL)hasZilch;
-(NSData *)zilch;
-(void)setZilch:(NSData *)arg1 ;
-(BOOL)hasIncidentId;
-(BOOL)hasStreet;
-(BOOL)hasCrossStreet;
-(void)setUpdateTime:(long long)arg1 ;
-(void)setHasUpdateTime:(BOOL)arg1 ;
-(BOOL)hasUpdateTime;
-(int)laneClosureType;
-(void)setLaneClosureType:(int)arg1 ;
-(void)setHasLaneClosureType:(BOOL)arg1 ;
-(BOOL)hasLaneClosureType;
-(id)laneClosureTypeAsString:(int)arg1 ;
-(int)StringAsLaneClosureType:(id)arg1 ;
-(void)setLaneClosureCount:(unsigned)arg1 ;
-(void)setHasLaneClosureCount:(BOOL)arg1 ;
-(BOOL)hasLaneClosureCount;
-(void)setEndTimeReliable:(BOOL)arg1 ;
-(void)setHasEndTimeReliable:(BOOL)arg1 ;
-(BOOL)hasEndTimeReliable;
-(int)significance;
-(void)setSignificance:(int)arg1 ;
-(void)setHasSignificance:(BOOL)arg1 ;
-(BOOL)hasSignificance;
-(id)significanceAsString:(int)arg1 ;
-(int)StringAsSignificance:(id)arg1 ;
-(NSString *)incidentId;
-(void)setIncidentId:(NSString *)arg1 ;
-(NSString *)street;
-(void)setStreet:(NSString *)arg1 ;
-(NSString *)crossStreet;
-(void)setCrossStreet:(NSString *)arg1 ;
-(long long)updateTime;
-(unsigned)laneClosureCount;
-(BOOL)endTimeReliable;
-(unsigned long long)geoidsCount;
-(long long*)geoids;
-(void)clearGeoids;
-(void)addGeoid:(long long)arg1 ;
-(long long)geoidAtIndex:(unsigned long long)arg1 ;
-(void)setGeoids:(long long*)arg1 count:(unsigned long long)arg2 ;
-(void)clearInfos;
-(unsigned long long)infosCount;
-(id)infoAtIndex:(unsigned long long)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setHasLatitude:(BOOL)arg1 ;
-(BOOL)hasLatitude;
-(void)setLongitude:(double)arg1 ;
-(void)setHasLongitude:(BOOL)arg1 ;
-(BOOL)hasLongitude;
-(void)setBlocked:(BOOL)arg1 ;
-(void)setHasBlocked:(BOOL)arg1 ;
-(BOOL)hasBlocked;
-(void)setHardBlocked:(BOOL)arg1 ;
-(void)setHasHardBlocked:(BOOL)arg1 ;
-(BOOL)hasHardBlocked;
-(void)setHasDelay:(BOOL)arg1 ;
-(BOOL)hasDelay;
-(void)setMinZoomLevel:(unsigned)arg1 ;
-(void)setHasMinZoomLevel:(BOOL)arg1 ;
-(BOOL)hasMinZoomLevel;
-(void)setMaxZoomLevel:(unsigned)arg1 ;
-(void)setHasMaxZoomLevel:(BOOL)arg1 ;
-(BOOL)hasMaxZoomLevel;
-(int)trafficTrend;
-(void)setTrafficTrend:(int)arg1 ;
-(void)setHasTrafficTrend:(BOOL)arg1 ;
-(BOOL)hasTrafficTrend;
-(id)trafficTrendAsString:(int)arg1 ;
-(int)StringAsTrafficTrend:(id)arg1 ;
-(void)setDurationMin:(unsigned long long)arg1 ;
-(void)setHasDurationMin:(BOOL)arg1 ;
-(BOOL)hasDurationMin;
-(void)setAlertCCode:(unsigned)arg1 ;
-(void)setHasAlertCCode:(BOOL)arg1 ;
-(BOOL)hasAlertCCode;
-(void)setNavigationAlert:(BOOL)arg1 ;
-(void)setHasNavigationAlert:(BOOL)arg1 ;
-(BOOL)hasNavigationAlert;
-(NSMutableArray *)infos;
-(void)setInfos:(NSMutableArray *)arg1 ;
-(BOOL)blocked;
-(BOOL)hardBlocked;
-(unsigned)minZoomLevel;
-(unsigned)maxZoomLevel;
-(unsigned long long)durationMin;
-(unsigned)alertCCode;
-(BOOL)navigationAlert;
-(double)latitude;
-(double)longitude;
@end

