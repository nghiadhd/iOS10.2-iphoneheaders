/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableDictionary, NSMutableArray;

@interface CKDFetchRecordZonesOperation : CKDDatabaseOperation {

	BOOL _isFetchAllRecordZonesOperation;
	BOOL _shouldRetry;
	BOOL _onlyFetchPCSInfo;
	BOOL _ignorePCSFailures;
	/*^block*/id _recordZoneFetchedProgressBlock;
	NSArray* _recordZoneIDs;
	NSMutableDictionary* _zonesToSaveForPCSUpdateByZoneID;
	NSMutableArray* _zoneIDsNeedingPCSUpdateRetry;
	long long _numZoneSaveAttempts;

}

@property (nonatomic,retain) NSArray * recordZoneIDs;                                            //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (assign,nonatomic) BOOL isFetchAllRecordZonesOperation;                                //@synthesize isFetchAllRecordZonesOperation=_isFetchAllRecordZonesOperation - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * zonesToSaveForPCSUpdateByZoneID;              //@synthesize zonesToSaveForPCSUpdateByZoneID=_zonesToSaveForPCSUpdateByZoneID - In the implementation block
@property (assign,nonatomic) BOOL shouldRetry;                                                   //@synthesize shouldRetry=_shouldRetry - In the implementation block
@property (nonatomic,retain) NSMutableArray * zoneIDsNeedingPCSUpdateRetry;                      //@synthesize zoneIDsNeedingPCSUpdateRetry=_zoneIDsNeedingPCSUpdateRetry - In the implementation block
@property (assign,nonatomic) long long numZoneSaveAttempts;                                      //@synthesize numZoneSaveAttempts=_numZoneSaveAttempts - In the implementation block
@property (assign,nonatomic) BOOL onlyFetchPCSInfo;                                              //@synthesize onlyFetchPCSInfo=_onlyFetchPCSInfo - In the implementation block
@property (assign,nonatomic) BOOL ignorePCSFailures;                                             //@synthesize ignorePCSFailures=_ignorePCSFailures - In the implementation block
@property (nonatomic,copy) id recordZoneFetchedProgressBlock;                                    //@synthesize recordZoneFetchedProgressBlock=_recordZoneFetchedProgressBlock - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setRecordZoneFetchedProgressBlock:(id)arg1 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(BOOL)makeStateTransition;
-(void)setOnlyFetchPCSInfo:(BOOL)arg1 ;
-(BOOL)onlyFetchPCSInfo;
-(long long)numZoneSaveAttempts;
-(void)setNumZoneSaveAttempts:(long long)arg1 ;
-(void)_sendErrorForFailedZones;
-(void)setIsFetchAllRecordZonesOperation:(BOOL)arg1 ;
-(void)setIgnorePCSFailures:(BOOL)arg1 ;
-(void)_handleRecordZoneFetch:(id)arg1 zoneID:(id)arg2 responseCode:(id)arg3 ;
-(void)setShouldRetry:(BOOL)arg1 ;
-(BOOL)shouldRetry;
-(BOOL)isFetchAllRecordZonesOperation;
-(BOOL)ignorePCSFailures;
-(void)fetchZonesFromServer;
-(void)saveZonesWithUpdatedZonePCS;
-(NSMutableArray *)zoneIDsNeedingPCSUpdateRetry;
-(NSMutableDictionary *)zonesToSaveForPCSUpdateByZoneID;
-(id)recordZoneFetchedProgressBlock;
-(void)_handleRecordZoneSaved:(id)arg1 error:(id)arg2 ;
-(BOOL)_checkAndUpdateZonePCSIfNeededForZone:(id)arg1 error:(id*)arg2 ;
-(void)setZonesToSaveForPCSUpdateByZoneID:(NSMutableDictionary *)arg1 ;
-(void)setZoneIDsNeedingPCSUpdateRetry:(NSMutableArray *)arg1 ;
-(NSArray *)recordZoneIDs;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
@end

