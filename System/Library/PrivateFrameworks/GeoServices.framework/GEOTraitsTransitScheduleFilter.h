/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOTraitsTransitScheduleModeFilter, GEOTraitsTransitScheduleTimeRange;

@interface GEOTraitsTransitScheduleFilter : PBCodable <NSCopying> {

	GEOTraitsTransitScheduleModeFilter* _highFrequencyFilter;
	GEOTraitsTransitScheduleModeFilter* _lowFrequencyFilter;
	GEOTraitsTransitScheduleTimeRange* _operatingHoursRange;

}

@property (nonatomic,readonly) BOOL hasHighFrequencyFilter; 
@property (nonatomic,retain) GEOTraitsTransitScheduleModeFilter * highFrequencyFilter;              //@synthesize highFrequencyFilter=_highFrequencyFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasLowFrequencyFilter; 
@property (nonatomic,retain) GEOTraitsTransitScheduleModeFilter * lowFrequencyFilter;               //@synthesize lowFrequencyFilter=_lowFrequencyFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasOperatingHoursRange; 
@property (nonatomic,retain) GEOTraitsTransitScheduleTimeRange * operatingHoursRange;               //@synthesize operatingHoursRange=_operatingHoursRange - In the implementation block
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
-(void)setOperatingHoursRange:(GEOTraitsTransitScheduleTimeRange *)arg1 ;
-(BOOL)hasOperatingHoursRange;
-(GEOTraitsTransitScheduleTimeRange *)operatingHoursRange;
-(BOOL)hasHighFrequencyFilter;
-(BOOL)hasLowFrequencyFilter;
-(GEOTraitsTransitScheduleModeFilter *)highFrequencyFilter;
-(void)setHighFrequencyFilter:(GEOTraitsTransitScheduleModeFilter *)arg1 ;
-(GEOTraitsTransitScheduleModeFilter *)lowFrequencyFilter;
-(void)setLowFrequencyFilter:(GEOTraitsTransitScheduleModeFilter *)arg1 ;
@end

