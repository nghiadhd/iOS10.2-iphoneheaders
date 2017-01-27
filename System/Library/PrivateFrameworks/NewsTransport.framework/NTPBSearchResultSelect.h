/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NTPBSearchResultSelect : PBCodable <NSCopying> {

	NSMutableArray* _channelResultFeedIds;
	NSMutableArray* _nonSelectedResultFeedIds;
	int _searchExecutionMethod;
	int _searchLocation;
	int _searchResultSelectLocation;
	NSMutableArray* _searchResults;
	NSString* _searchString;
	int _selectedResultActionType;
	NSString* _selectedResultFeedId;
	int _selectedResultRankInSection;
	int _selectedResultSection;
	NSString* _selectedResultString;
	int _selectedResultType;
	NSString* _storeFrontId;
	NSString* _topResultFeedId;
	NSMutableArray* _topicResultFeedIds;
	int _totalResults;
	int _totalResultsInSelectedSection;
	BOOL _didSelectResult;
	BOOL _selectedResultShowMore;
	SCD_Struct_NT22 _has;

}

@property (nonatomic,readonly) BOOL hasSearchString; 
@property (nonatomic,retain) NSString * searchString;                                //@synthesize searchString=_searchString - In the implementation block
@property (assign,nonatomic) BOOL hasSearchLocation; 
@property (assign,nonatomic) int searchLocation;                                     //@synthesize searchLocation=_searchLocation - In the implementation block
@property (assign,nonatomic) BOOL hasSelectedResultType; 
@property (assign,nonatomic) int selectedResultType;                                 //@synthesize selectedResultType=_selectedResultType - In the implementation block
@property (assign,nonatomic) BOOL hasSelectedResultActionType; 
@property (assign,nonatomic) int selectedResultActionType;                           //@synthesize selectedResultActionType=_selectedResultActionType - In the implementation block
@property (assign,nonatomic) BOOL hasSelectedResultSection; 
@property (assign,nonatomic) int selectedResultSection;                              //@synthesize selectedResultSection=_selectedResultSection - In the implementation block
@property (nonatomic,readonly) BOOL hasSelectedResultString; 
@property (nonatomic,retain) NSString * selectedResultString;                        //@synthesize selectedResultString=_selectedResultString - In the implementation block
@property (nonatomic,readonly) BOOL hasSelectedResultFeedId; 
@property (nonatomic,retain) NSString * selectedResultFeedId;                        //@synthesize selectedResultFeedId=_selectedResultFeedId - In the implementation block
@property (assign,nonatomic) BOOL hasSelectedResultRankInSection; 
@property (assign,nonatomic) int selectedResultRankInSection;                        //@synthesize selectedResultRankInSection=_selectedResultRankInSection - In the implementation block
@property (assign,nonatomic) BOOL hasSelectedResultShowMore; 
@property (assign,nonatomic) BOOL selectedResultShowMore;                            //@synthesize selectedResultShowMore=_selectedResultShowMore - In the implementation block
@property (assign,nonatomic) BOOL hasSearchExecutionMethod; 
@property (assign,nonatomic) int searchExecutionMethod;                              //@synthesize searchExecutionMethod=_searchExecutionMethod - In the implementation block
@property (assign,nonatomic) BOOL hasTotalResults; 
@property (assign,nonatomic) int totalResults;                                       //@synthesize totalResults=_totalResults - In the implementation block
@property (assign,nonatomic) BOOL hasTotalResultsInSelectedSection; 
@property (assign,nonatomic) int totalResultsInSelectedSection;                      //@synthesize totalResultsInSelectedSection=_totalResultsInSelectedSection - In the implementation block
@property (nonatomic,retain) NSMutableArray * nonSelectedResultFeedIds;              //@synthesize nonSelectedResultFeedIds=_nonSelectedResultFeedIds - In the implementation block
@property (assign,nonatomic) BOOL hasDidSelectResult; 
@property (assign,nonatomic) BOOL didSelectResult;                                   //@synthesize didSelectResult=_didSelectResult - In the implementation block
@property (nonatomic,retain) NSMutableArray * searchResults;                         //@synthesize searchResults=_searchResults - In the implementation block
@property (nonatomic,readonly) BOOL hasTopResultFeedId; 
@property (nonatomic,retain) NSString * topResultFeedId;                             //@synthesize topResultFeedId=_topResultFeedId - In the implementation block
@property (nonatomic,retain) NSMutableArray * topicResultFeedIds;                    //@synthesize topicResultFeedIds=_topicResultFeedIds - In the implementation block
@property (nonatomic,retain) NSMutableArray * channelResultFeedIds;                  //@synthesize channelResultFeedIds=_channelResultFeedIds - In the implementation block
@property (nonatomic,readonly) BOOL hasStoreFrontId; 
@property (nonatomic,retain) NSString * storeFrontId;                                //@synthesize storeFrontId=_storeFrontId - In the implementation block
@property (assign,nonatomic) BOOL hasSearchResultSelectLocation; 
@property (assign,nonatomic) int searchResultSelectLocation;                         //@synthesize searchResultSelectLocation=_searchResultSelectLocation - In the implementation block
+(Class)topicResultFeedIdsType;
+(Class)channelResultFeedIdsType;
+(Class)nonSelectedResultFeedIdType;
+(Class)searchResultsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)searchString;
-(id)dictionaryRepresentation;
-(void)setSearchString:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasSearchString;
-(BOOL)hasSearchLocation;
-(int)searchLocation;
-(void)setSearchLocation:(int)arg1 ;
-(unsigned long long)searchResultsCount;
-(void)setSearchResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)searchResults;
-(void)setStoreFrontId:(NSString *)arg1 ;
-(BOOL)hasStoreFrontId;
-(NSString *)storeFrontId;
-(void)addTopicResultFeedIds:(id)arg1 ;
-(void)addChannelResultFeedIds:(id)arg1 ;
-(void)setTopResultFeedId:(NSString *)arg1 ;
-(void)setHasSearchLocation:(BOOL)arg1 ;
-(id)searchLocationAsString:(int)arg1 ;
-(int)StringAsSearchLocation:(id)arg1 ;
-(int)searchExecutionMethod;
-(void)setSearchExecutionMethod:(int)arg1 ;
-(void)setHasSearchExecutionMethod:(BOOL)arg1 ;
-(BOOL)hasSearchExecutionMethod;
-(id)searchExecutionMethodAsString:(int)arg1 ;
-(int)StringAsSearchExecutionMethod:(id)arg1 ;
-(void)setTotalResults:(int)arg1 ;
-(void)setHasTotalResults:(BOOL)arg1 ;
-(BOOL)hasTotalResults;
-(BOOL)hasTopResultFeedId;
-(void)clearTopicResultFeedIds;
-(unsigned long long)topicResultFeedIdsCount;
-(id)topicResultFeedIdsAtIndex:(unsigned long long)arg1 ;
-(void)clearChannelResultFeedIds;
-(unsigned long long)channelResultFeedIdsCount;
-(id)channelResultFeedIdsAtIndex:(unsigned long long)arg1 ;
-(int)totalResults;
-(NSString *)topResultFeedId;
-(NSMutableArray *)topicResultFeedIds;
-(void)setTopicResultFeedIds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)channelResultFeedIds;
-(void)setChannelResultFeedIds:(NSMutableArray *)arg1 ;
-(void)addNonSelectedResultFeedId:(id)arg1 ;
-(void)addSearchResults:(id)arg1 ;
-(void)setSelectedResultString:(NSString *)arg1 ;
-(void)setSelectedResultFeedId:(NSString *)arg1 ;
-(int)selectedResultType;
-(void)setSelectedResultType:(int)arg1 ;
-(void)setHasSelectedResultType:(BOOL)arg1 ;
-(BOOL)hasSelectedResultType;
-(int)selectedResultActionType;
-(void)setSelectedResultActionType:(int)arg1 ;
-(void)setHasSelectedResultActionType:(BOOL)arg1 ;
-(BOOL)hasSelectedResultActionType;
-(int)selectedResultSection;
-(void)setSelectedResultSection:(int)arg1 ;
-(void)setHasSelectedResultSection:(BOOL)arg1 ;
-(BOOL)hasSelectedResultSection;
-(BOOL)hasSelectedResultString;
-(BOOL)hasSelectedResultFeedId;
-(void)setSelectedResultRankInSection:(int)arg1 ;
-(void)setHasSelectedResultRankInSection:(BOOL)arg1 ;
-(BOOL)hasSelectedResultRankInSection;
-(void)setSelectedResultShowMore:(BOOL)arg1 ;
-(void)setHasSelectedResultShowMore:(BOOL)arg1 ;
-(BOOL)hasSelectedResultShowMore;
-(void)setTotalResultsInSelectedSection:(int)arg1 ;
-(void)setHasTotalResultsInSelectedSection:(BOOL)arg1 ;
-(BOOL)hasTotalResultsInSelectedSection;
-(void)clearNonSelectedResultFeedIds;
-(unsigned long long)nonSelectedResultFeedIdsCount;
-(id)nonSelectedResultFeedIdAtIndex:(unsigned long long)arg1 ;
-(void)setDidSelectResult:(BOOL)arg1 ;
-(void)setHasDidSelectResult:(BOOL)arg1 ;
-(BOOL)hasDidSelectResult;
-(void)clearSearchResults;
-(id)searchResultsAtIndex:(unsigned long long)arg1 ;
-(int)searchResultSelectLocation;
-(void)setSearchResultSelectLocation:(int)arg1 ;
-(void)setHasSearchResultSelectLocation:(BOOL)arg1 ;
-(BOOL)hasSearchResultSelectLocation;
-(NSString *)selectedResultString;
-(NSString *)selectedResultFeedId;
-(int)selectedResultRankInSection;
-(BOOL)selectedResultShowMore;
-(int)totalResultsInSelectedSection;
-(NSMutableArray *)nonSelectedResultFeedIds;
-(void)setNonSelectedResultFeedIds:(NSMutableArray *)arg1 ;
-(BOOL)didSelectResult;
@end

