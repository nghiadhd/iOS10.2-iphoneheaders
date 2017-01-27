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

@class NSMutableArray, NSString;

@interface GEOPBTransitIncident : PBCodable <NSCopying> {

	unsigned long long _incidentMuid;
	NSMutableArray* _affectedEntitys;
	unsigned _creationDatetime;
	unsigned _endDatetime;
	int _iconEnum;
	unsigned _incidentIndex;
	NSString* _longDescriptionString;
	NSString* _messageForAllBlocking;
	NSString* _messageForIncidentType;
	NSString* _messageString;
	NSString* _shortDescriptionString;
	unsigned _startDatetime;
	NSString* _titleString;
	unsigned _updatedDatetime;
	BOOL _blocking;
	SCD_Struct_GE83 _has;

}

@property (assign,nonatomic) BOOL hasIncidentIndex; 
@property (assign,nonatomic) unsigned incidentIndex;                         //@synthesize incidentIndex=_incidentIndex - In the implementation block
@property (assign,nonatomic) BOOL hasIncidentMuid; 
@property (assign,nonatomic) unsigned long long incidentMuid;                //@synthesize incidentMuid=_incidentMuid - In the implementation block
@property (assign,nonatomic) BOOL hasIconEnum; 
@property (assign,nonatomic) int iconEnum;                                   //@synthesize iconEnum=_iconEnum - In the implementation block
@property (assign,nonatomic) BOOL hasStartDatetime; 
@property (assign,nonatomic) unsigned startDatetime;                         //@synthesize startDatetime=_startDatetime - In the implementation block
@property (assign,nonatomic) BOOL hasEndDatetime; 
@property (assign,nonatomic) unsigned endDatetime;                           //@synthesize endDatetime=_endDatetime - In the implementation block
@property (assign,nonatomic) BOOL hasCreationDatetime; 
@property (assign,nonatomic) unsigned creationDatetime;                      //@synthesize creationDatetime=_creationDatetime - In the implementation block
@property (assign,nonatomic) BOOL hasUpdatedDatetime; 
@property (assign,nonatomic) unsigned updatedDatetime;                       //@synthesize updatedDatetime=_updatedDatetime - In the implementation block
@property (nonatomic,retain) NSMutableArray * affectedEntitys;               //@synthesize affectedEntitys=_affectedEntitys - In the implementation block
@property (assign,nonatomic) BOOL hasBlocking; 
@property (assign,nonatomic) BOOL blocking;                                  //@synthesize blocking=_blocking - In the implementation block
@property (nonatomic,readonly) BOOL hasLongDescriptionString; 
@property (nonatomic,retain) NSString * longDescriptionString;               //@synthesize longDescriptionString=_longDescriptionString - In the implementation block
@property (nonatomic,readonly) BOOL hasShortDescriptionString; 
@property (nonatomic,retain) NSString * shortDescriptionString;              //@synthesize shortDescriptionString=_shortDescriptionString - In the implementation block
@property (nonatomic,readonly) BOOL hasTitleString; 
@property (nonatomic,retain) NSString * titleString;                         //@synthesize titleString=_titleString - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageString; 
@property (nonatomic,retain) NSString * messageString;                       //@synthesize messageString=_messageString - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageForAllBlocking; 
@property (nonatomic,retain) NSString * messageForAllBlocking;               //@synthesize messageForAllBlocking=_messageForAllBlocking - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageForIncidentType; 
@property (nonatomic,retain) NSString * messageForIncidentType;              //@synthesize messageForIncidentType=_messageForIncidentType - In the implementation block
+(Class)affectedEntityType;
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
-(void)setIncidentIndex:(unsigned)arg1 ;
-(void)setHasIncidentIndex:(BOOL)arg1 ;
-(BOOL)hasIncidentIndex;
-(unsigned)incidentIndex;
-(void)setIncidentMuid:(unsigned long long)arg1 ;
-(void)setHasIncidentMuid:(BOOL)arg1 ;
-(BOOL)hasIncidentMuid;
-(int)iconEnum;
-(void)setIconEnum:(int)arg1 ;
-(void)setHasIconEnum:(BOOL)arg1 ;
-(BOOL)hasIconEnum;
-(id)iconEnumAsString:(int)arg1 ;
-(int)StringAsIconEnum:(id)arg1 ;
-(void)setStartDatetime:(unsigned)arg1 ;
-(void)setHasStartDatetime:(BOOL)arg1 ;
-(BOOL)hasStartDatetime;
-(void)setEndDatetime:(unsigned)arg1 ;
-(void)setHasEndDatetime:(BOOL)arg1 ;
-(BOOL)hasEndDatetime;
-(void)setCreationDatetime:(unsigned)arg1 ;
-(void)setHasCreationDatetime:(BOOL)arg1 ;
-(BOOL)hasCreationDatetime;
-(void)setUpdatedDatetime:(unsigned)arg1 ;
-(void)setHasUpdatedDatetime:(BOOL)arg1 ;
-(BOOL)hasUpdatedDatetime;
-(void)clearAffectedEntitys;
-(void)addAffectedEntity:(id)arg1 ;
-(unsigned long long)affectedEntitysCount;
-(id)affectedEntityAtIndex:(unsigned long long)arg1 ;
-(void)setBlocking:(BOOL)arg1 ;
-(void)setHasBlocking:(BOOL)arg1 ;
-(BOOL)hasBlocking;
-(BOOL)hasLongDescriptionString;
-(BOOL)hasShortDescriptionString;
-(BOOL)hasTitleString;
-(BOOL)hasMessageString;
-(BOOL)hasMessageForAllBlocking;
-(BOOL)hasMessageForIncidentType;
-(unsigned long long)incidentMuid;
-(unsigned)startDatetime;
-(unsigned)endDatetime;
-(unsigned)creationDatetime;
-(unsigned)updatedDatetime;
-(NSMutableArray *)affectedEntitys;
-(void)setAffectedEntitys:(NSMutableArray *)arg1 ;
-(BOOL)blocking;
-(NSString *)longDescriptionString;
-(void)setLongDescriptionString:(NSString *)arg1 ;
-(NSString *)shortDescriptionString;
-(void)setShortDescriptionString:(NSString *)arg1 ;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(NSString *)messageString;
-(void)setMessageString:(NSString *)arg1 ;
-(NSString *)messageForAllBlocking;
-(void)setMessageForAllBlocking:(NSString *)arg1 ;
-(NSString *)messageForIncidentType;
-(void)setMessageForIncidentType:(NSString *)arg1 ;
@end

