/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOPDRestaurantReservationLink : PBCodable <NSCopying> {

	NSMutableArray* _restaurantLinks;

}

@property (nonatomic,retain) NSMutableArray * restaurantLinks;              //@synthesize restaurantLinks=_restaurantLinks - In the implementation block
+(id)reservationLinkForPlaceData:(id)arg1 ;
+(Class)restaurantLinkType;
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
-(void)clearRestaurantLinks;
-(void)addRestaurantLink:(id)arg1 ;
-(unsigned long long)restaurantLinksCount;
-(id)restaurantLinkAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)restaurantLinks;
-(void)setRestaurantLinks:(NSMutableArray *)arg1 ;
@end
