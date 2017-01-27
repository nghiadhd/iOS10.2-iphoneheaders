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

@interface GEOTransitSignInstruction : PBCodable <NSCopying> {

	NSMutableArray* _commandFormatteds;
	NSMutableArray* _detailFormatteds;
	NSMutableArray* _noticeFormatteds;
	NSMutableArray* _priceFormatteds;

}

@property (nonatomic,retain) NSMutableArray * commandFormatteds;              //@synthesize commandFormatteds=_commandFormatteds - In the implementation block
@property (nonatomic,retain) NSMutableArray * detailFormatteds;               //@synthesize detailFormatteds=_detailFormatteds - In the implementation block
@property (nonatomic,retain) NSMutableArray * noticeFormatteds;               //@synthesize noticeFormatteds=_noticeFormatteds - In the implementation block
@property (nonatomic,retain) NSMutableArray * priceFormatteds;                //@synthesize priceFormatteds=_priceFormatteds - In the implementation block
+(Class)noticeFormattedType;
+(Class)commandFormattedType;
+(Class)detailFormattedType;
+(Class)priceFormattedType;
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
-(void)clearNoticeFormatteds;
-(void)addNoticeFormatted:(id)arg1 ;
-(unsigned long long)noticeFormattedsCount;
-(id)noticeFormattedAtIndex:(unsigned long long)arg1 ;
-(void)clearCommandFormatteds;
-(void)addCommandFormatted:(id)arg1 ;
-(unsigned long long)commandFormattedsCount;
-(id)commandFormattedAtIndex:(unsigned long long)arg1 ;
-(void)clearDetailFormatteds;
-(void)addDetailFormatted:(id)arg1 ;
-(unsigned long long)detailFormattedsCount;
-(id)detailFormattedAtIndex:(unsigned long long)arg1 ;
-(void)clearPriceFormatteds;
-(void)addPriceFormatted:(id)arg1 ;
-(unsigned long long)priceFormattedsCount;
-(id)priceFormattedAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)noticeFormatteds;
-(void)setNoticeFormatteds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)commandFormatteds;
-(void)setCommandFormatteds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)detailFormatteds;
-(void)setDetailFormatteds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)priceFormatteds;
-(void)setPriceFormatteds:(NSMutableArray *)arg1 ;
@end

