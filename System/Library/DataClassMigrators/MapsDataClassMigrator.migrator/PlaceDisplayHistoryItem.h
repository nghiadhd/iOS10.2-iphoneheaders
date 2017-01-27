/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <MapsDataClassMigrator/RecentsItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MKMapItem, MSPHistoryEntryStorage, NSString;

@interface PlaceDisplayHistoryItem : NSObject <RecentsItem, NSCopying> {

	double _timestamp;
	MKMapItem* _mapItem;
	double _position;
	MSPHistoryEntryStorage* _storage;

}

@property (nonatomic,readonly) MKMapItem * mapItem;                           //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) MSPHistoryEntryStorage * storage;              //@synthesize storage=_storage - In the implementation block
@property (assign,nonatomic) double position;                                 //@synthesize position=_position - In the implementation block
@property (nonatomic,copy) NSString * syncIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)storageData;
-(void)setSyncIdentifier:(NSString *)arg1 ;
-(id)initWithSearchRequestStorage:(id)arg1 ;
-(void)updateWithStorage:(id)arg1 ;
-(MSPHistoryEntryStorage *)storage;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(double)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(double)arg1 ;
-(double)position;
-(id)initWithMapItem:(id)arg1 ;
-(MKMapItem *)mapItem;
-(NSString *)syncIdentifier;
@end
