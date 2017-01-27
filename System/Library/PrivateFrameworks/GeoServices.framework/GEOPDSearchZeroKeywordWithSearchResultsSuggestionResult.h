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

@class PBUnknownFields, NSMutableArray;

@interface GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _searchResultsForCategoryEntrys;

}

@property (nonatomic,retain) NSMutableArray * searchResultsForCategoryEntrys;              //@synthesize searchResultsForCategoryEntrys=_searchResultsForCategoryEntrys - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)searchResultsForCategoryEntryType;
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
-(PBUnknownFields *)unknownFields;
-(void)clearSearchResultsForCategoryEntrys;
-(void)addSearchResultsForCategoryEntry:(id)arg1 ;
-(unsigned long long)searchResultsForCategoryEntrysCount;
-(id)searchResultsForCategoryEntryAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)searchResultsForCategoryEntrys;
-(void)setSearchResultsForCategoryEntrys:(NSMutableArray *)arg1 ;
@end

