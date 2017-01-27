/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SearchResult, NSString;

@interface PersistentDirections : PBCodable <NSCopying> {

	SearchResult* _addressEndSearch;
	SearchResult* _addressStartSearch;
	NSString* _endAddress;
	SearchResult* _routeEndSearch;
	SearchResult* _routeStartSearch;
	NSString* _startAddress;
	SearchResult* _userEndSearch;
	SearchResult* _userStartSearch;

}

@property (nonatomic,readonly) BOOL hasStartAddress; 
@property (nonatomic,retain) NSString * startAddress;                        //@synthesize startAddress=_startAddress - In the implementation block
@property (nonatomic,readonly) BOOL hasEndAddress; 
@property (nonatomic,retain) NSString * endAddress;                          //@synthesize endAddress=_endAddress - In the implementation block
@property (nonatomic,readonly) BOOL hasUserStartSearch; 
@property (nonatomic,retain) SearchResult * userStartSearch;                 //@synthesize userStartSearch=_userStartSearch - In the implementation block
@property (nonatomic,readonly) BOOL hasUserEndSearch; 
@property (nonatomic,retain) SearchResult * userEndSearch;                   //@synthesize userEndSearch=_userEndSearch - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressStartSearch; 
@property (nonatomic,retain) SearchResult * addressStartSearch;              //@synthesize addressStartSearch=_addressStartSearch - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressEndSearch; 
@property (nonatomic,retain) SearchResult * addressEndSearch;                //@synthesize addressEndSearch=_addressEndSearch - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteStartSearch; 
@property (nonatomic,retain) SearchResult * routeStartSearch;                //@synthesize routeStartSearch=_routeStartSearch - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteEndSearch; 
@property (nonatomic,retain) SearchResult * routeEndSearch;                  //@synthesize routeEndSearch=_routeEndSearch - In the implementation block
-(SearchResult *)addressStartSearch;
-(SearchResult *)routeStartSearch;
-(SearchResult *)routeEndSearch;
-(SearchResult *)addressEndSearch;
-(SearchResult *)userEndSearch;
-(SearchResult *)userStartSearch;
-(BOOL)hasRouteEndSearch;
-(void)setRouteEndSearch:(SearchResult *)arg1 ;
-(BOOL)hasEndAddress;
-(BOOL)hasUserEndSearch;
-(BOOL)hasAddressStartSearch;
-(BOOL)hasUserStartSearch;
-(BOOL)hasAddressEndSearch;
-(void)setAddressEndSearch:(SearchResult *)arg1 ;
-(BOOL)hasStartAddress;
-(void)setUserStartSearch:(SearchResult *)arg1 ;
-(BOOL)hasRouteStartSearch;
-(void)setRouteStartSearch:(SearchResult *)arg1 ;
-(void)setUserEndSearch:(SearchResult *)arg1 ;
-(void)setAddressStartSearch:(SearchResult *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setStartAddress:(NSString *)arg1 ;
-(void)setEndAddress:(NSString *)arg1 ;
-(NSString *)startAddress;
-(NSString *)endAddress;
@end

