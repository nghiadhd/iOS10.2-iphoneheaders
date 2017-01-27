/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:35:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDWiFiMetricsManagerBTCoexModeChange, AWDWiFiMetricsManagerBTCoexStats, AWDWiFiMetricsManagerChipCounters;

@interface AWDWiFiMetricsManagerOneStatsAssociationInfo : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	AWDWiFiMetricsManagerBTCoexModeChange* _btCoexModeChange;
	AWDWiFiMetricsManagerBTCoexStats* _btCoexStats;
	AWDWiFiMetricsManagerChipCounters* _chipCounters;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasChipCounters; 
@property (nonatomic,retain) AWDWiFiMetricsManagerChipCounters * chipCounters;                      //@synthesize chipCounters=_chipCounters - In the implementation block
@property (nonatomic,readonly) BOOL hasBtCoexStats; 
@property (nonatomic,retain) AWDWiFiMetricsManagerBTCoexStats * btCoexStats;                        //@synthesize btCoexStats=_btCoexStats - In the implementation block
@property (nonatomic,readonly) BOOL hasBtCoexModeChange; 
@property (nonatomic,retain) AWDWiFiMetricsManagerBTCoexModeChange * btCoexModeChange;              //@synthesize btCoexModeChange=_btCoexModeChange - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setChipCounters:(AWDWiFiMetricsManagerChipCounters *)arg1 ;
-(void)setBtCoexStats:(AWDWiFiMetricsManagerBTCoexStats *)arg1 ;
-(void)setBtCoexModeChange:(AWDWiFiMetricsManagerBTCoexModeChange *)arg1 ;
-(BOOL)hasChipCounters;
-(BOOL)hasBtCoexStats;
-(BOOL)hasBtCoexModeChange;
-(AWDWiFiMetricsManagerChipCounters *)chipCounters;
-(AWDWiFiMetricsManagerBTCoexStats *)btCoexStats;
-(AWDWiFiMetricsManagerBTCoexModeChange *)btCoexModeChange;
@end

