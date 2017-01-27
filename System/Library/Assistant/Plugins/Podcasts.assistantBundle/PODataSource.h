/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/Plugins/Podcasts.assistantBundle/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSString, NSDate;

@interface PODataSource : NSObject {

	BOOL _constructingData;
	NSMutableDictionary* _podcastCollectionsByUUID;
	NSMutableDictionary* _podcastStationsByUUID;
	NSMutableArray* _podcastRevisions;
	NSString* _databaseUUID;
	NSString* _firstRevisionUUID;
	NSDate* _podcastDataPlistLastModified;
	NSDate* _revisionsDataPlistLastModified;

}

@property (nonatomic,retain) NSMutableDictionary * podcastCollectionsByUUID;              //@synthesize podcastCollectionsByUUID=_podcastCollectionsByUUID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * podcastStationsByUUID;                 //@synthesize podcastStationsByUUID=_podcastStationsByUUID - In the implementation block
@property (nonatomic,retain) NSMutableArray * podcastRevisions;                           //@synthesize podcastRevisions=_podcastRevisions - In the implementation block
@property (retain) NSString * databaseUUID;                                               //@synthesize databaseUUID=_databaseUUID - In the implementation block
@property (retain) NSString * firstRevisionUUID;                                          //@synthesize firstRevisionUUID=_firstRevisionUUID - In the implementation block
@property (retain) NSDate * podcastDataPlistLastModified;                                 //@synthesize podcastDataPlistLastModified=_podcastDataPlistLastModified - In the implementation block
@property (retain) NSDate * revisionsDataPlistLastModified;                               //@synthesize revisionsDataPlistLastModified=_revisionsDataPlistLastModified - In the implementation block
@property (assign) BOOL constructingData;                                                 //@synthesize constructingData=_constructingData - In the implementation block
+(id)sharedInstance;
-(void)setPodcastCollectionsByUUID:(NSMutableDictionary *)arg1 ;
-(id)podcastStationWithUUID:(id)arg1 ;
-(NSString *)firstRevisionUUID;
-(id)dbPlistURL;
-(BOOL)constructingData;
-(NSDate *)podcastDataPlistLastModified;
-(BOOL)isPodcastsInstalled;
-(void)setRevisionsDataPlistLastModified:(NSDate *)arg1 ;
-(void)initializeDataFromDictionary;
-(id)revisionPlistURL;
-(id)constructModelObjectOfClass:(Class)arg1 fromDictionary:(id)arg2 ;
-(NSMutableDictionary *)podcastCollectionsByUUID;
-(id)podcastCollectionsMatchingString:(id)arg1 maxResults:(long long)arg2 ;
-(id)podcastStationsMatchingString:(id)arg1 maxResults:(long long)arg2 ;
-(id)podcastsIndexPath;
-(void)constructRevisionFromDictionary:(id)arg1 isPodcastCollections:(BOOL)arg2 isDelete:(BOOL)arg3 ;
-(NSDate *)revisionsDataPlistLastModified;
-(void)setPodcastStationsByUUID:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)podcastRevisions;
-(void)setConstructingData:(BOOL)arg1 ;
-(id)podcastRevisionsSinceAnchor:(unsigned long long)arg1 ;
-(void)setFirstRevisionUUID:(NSString *)arg1 ;
-(BOOL)isPodcastDataStale;
-(id)arrayFromPlistURL:(id)arg1 ;
-(void)setPodcastRevisions:(NSMutableArray *)arg1 ;
-(id)domainObjectWithUUID:(id)arg1 ;
-(NSMutableDictionary *)podcastStationsByUUID;
-(BOOL)isPodcastRevisionDataStale;
-(id)constructModelObjectsFromDictionaries:(id)arg1 withIndexPath:(id)arg2 modelObjectClass:(Class)arg3 ;
-(void)setPodcastDataPlistLastModified:(NSDate *)arg1 ;
-(void)constructRevisionsFromDictionary:(id)arg1 isPodcastCollections:(BOOL)arg2 ;
-(id)podcastCollectionWithUUID:(id)arg1 ;
-(id)podcastModelObjectsInArray:(id)arg1 matchingString:(id)arg2 maxResults:(long long)arg3 ;
-(id)containerURL;
-(NSString *)databaseUUID;
-(void)setDatabaseUUID:(NSString *)arg1 ;
-(id)init;
-(id)description;
-(id)podcastCollections;
-(id)podcastStations;
-(id)validity;
@end

