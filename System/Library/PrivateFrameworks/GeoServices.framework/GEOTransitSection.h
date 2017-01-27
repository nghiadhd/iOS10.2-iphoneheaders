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

@class NSString;

@interface GEOTransitSection : PBCodable <NSCopying> {

	SCD_Struct_GE19* _actionSheetArtworkIndexs;
	SCD_Struct_GE19* _routeDetailsArtworkIndexs;
	SCD_Struct_GE19* _stepIndexs;
	NSString* _actionSheetName;
	int _nextOptionsIndex;
	BOOL _disableAlightNotifications;
	SCD_Struct_GE45 _has;

}

@property (nonatomic,readonly) unsigned long long stepIndexsCount; 
@property (nonatomic,readonly) unsigned* stepIndexs; 
@property (assign,nonatomic) BOOL hasNextOptionsIndex; 
@property (assign,nonatomic) int nextOptionsIndex;                                             //@synthesize nextOptionsIndex=_nextOptionsIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasActionSheetName; 
@property (nonatomic,retain) NSString * actionSheetName;                                       //@synthesize actionSheetName=_actionSheetName - In the implementation block
@property (nonatomic,readonly) unsigned long long actionSheetArtworkIndexsCount; 
@property (nonatomic,readonly) unsigned* actionSheetArtworkIndexs; 
@property (nonatomic,readonly) unsigned long long routeDetailsArtworkIndexsCount; 
@property (nonatomic,readonly) unsigned* routeDetailsArtworkIndexs; 
@property (assign,nonatomic) BOOL hasDisableAlightNotifications; 
@property (assign,nonatomic) BOOL disableAlightNotifications;                                  //@synthesize disableAlightNotifications=_disableAlightNotifications - In the implementation block
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
-(unsigned long long)stepIndexsCount;
-(unsigned*)stepIndexs;
-(void)clearStepIndexs;
-(void)addStepIndex:(unsigned)arg1 ;
-(unsigned)stepIndexAtIndex:(unsigned long long)arg1 ;
-(void)setStepIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(int)nextOptionsIndex;
-(void)setNextOptionsIndex:(int)arg1 ;
-(void)setHasNextOptionsIndex:(BOOL)arg1 ;
-(BOOL)hasNextOptionsIndex;
-(BOOL)hasActionSheetName;
-(unsigned long long)actionSheetArtworkIndexsCount;
-(unsigned*)actionSheetArtworkIndexs;
-(void)clearActionSheetArtworkIndexs;
-(void)addActionSheetArtworkIndex:(unsigned)arg1 ;
-(unsigned)actionSheetArtworkIndexAtIndex:(unsigned long long)arg1 ;
-(void)setActionSheetArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)routeDetailsArtworkIndexsCount;
-(unsigned*)routeDetailsArtworkIndexs;
-(void)clearRouteDetailsArtworkIndexs;
-(void)addRouteDetailsArtworkIndex:(unsigned)arg1 ;
-(unsigned)routeDetailsArtworkIndexAtIndex:(unsigned long long)arg1 ;
-(void)setRouteDetailsArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setDisableAlightNotifications:(BOOL)arg1 ;
-(void)setHasDisableAlightNotifications:(BOOL)arg1 ;
-(BOOL)hasDisableAlightNotifications;
-(NSString *)actionSheetName;
-(void)setActionSheetName:(NSString *)arg1 ;
-(BOOL)disableAlightNotifications;
@end

