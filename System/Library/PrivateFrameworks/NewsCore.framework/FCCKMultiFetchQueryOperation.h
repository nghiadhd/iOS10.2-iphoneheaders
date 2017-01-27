/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class FCCKDatabase, NSArray, NSDictionary, NSMutableSet, NSMutableArray;

@interface FCCKMultiFetchQueryOperation : FCOperation {

	FCCKDatabase* _database;
	NSArray* _recordIDs;
	NSArray* _recordSpecs;
	NSDictionary* _knownRecordIDsToEtags;
	/*^block*/id _queryCompletionHandler;
	NSDictionary* _recordSpecsByType;
	NSMutableSet* _missingRecordIDs;
	NSMutableArray* _fetchedRecords;

}

@property (nonatomic,retain) NSDictionary * recordSpecsByType;                  //@synthesize recordSpecsByType=_recordSpecsByType - In the implementation block
@property (nonatomic,retain) NSMutableSet * missingRecordIDs;                   //@synthesize missingRecordIDs=_missingRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * fetchedRecords;                   //@synthesize fetchedRecords=_fetchedRecords - In the implementation block
@property (nonatomic,retain) FCCKDatabase * database;                           //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSArray * recordIDs;                               //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,retain) NSArray * recordSpecs;                             //@synthesize recordSpecs=_recordSpecs - In the implementation block
@property (nonatomic,retain) NSDictionary * knownRecordIDsToEtags;              //@synthesize knownRecordIDsToEtags=_knownRecordIDsToEtags - In the implementation block
@property (nonatomic,copy) id queryCompletionHandler;                           //@synthesize queryCompletionHandler=_queryCompletionHandler - In the implementation block
-(FCCKDatabase *)database;
-(void)setDatabase:(FCCKDatabase *)arg1 ;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(id)queryCompletionHandler;
-(void)prepareOperation;
-(void)setQueryCompletionHandler:(id)arg1 ;
-(void)setRecordSpecs:(NSArray *)arg1 ;
-(void)setKnownRecordIDsToEtags:(NSDictionary *)arg1 ;
-(NSArray *)recordIDs;
-(NSArray *)recordSpecs;
-(void)setRecordSpecsByType:(NSDictionary *)arg1 ;
-(void)setMissingRecordIDs:(NSMutableSet *)arg1 ;
-(void)setFetchedRecords:(NSMutableArray *)arg1 ;
-(id)_constructQuery;
-(NSMutableArray *)fetchedRecords;
-(NSDictionary *)knownRecordIDsToEtags;
-(NSDictionary *)recordSpecsByType;
-(NSMutableSet *)missingRecordIDs;
@end

