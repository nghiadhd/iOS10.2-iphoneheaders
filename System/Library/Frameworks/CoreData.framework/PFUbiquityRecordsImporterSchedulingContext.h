/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary, NSSet, NSDictionary;

@interface PFUbiquityRecordsImporterSchedulingContext : NSObject {

	NSMutableSet* _scheduledLogLocations;
	NSMutableSet* _pendingLogLocations;
	NSMutableSet* _failedLogLocations;
	NSMutableSet* _ignoredLogLocations;
	NSMutableDictionary* _logLocationsToEncounteredErrors;
	int _lock;

}

@property (nonatomic,readonly) NSSet * pendingLogLocations;                                 //@synthesize pendingLogLocations=_pendingLogLocations - In the implementation block
@property (nonatomic,readonly) NSSet * scheduledLogLocations;                               //@synthesize scheduledLogLocations=_scheduledLogLocations - In the implementation block
@property (nonatomic,readonly) NSSet * failedLogLocations;                                  //@synthesize failedLogLocations=_failedLogLocations - In the implementation block
@property (nonatomic,readonly) NSSet * ignoredLogLocations;                                 //@synthesize ignoredLogLocations=_ignoredLogLocations - In the implementation block
@property (nonatomic,readonly) NSDictionary * logLocationsToEncounteredErrors;              //@synthesize logLocationsToEncounteredErrors=_logLocationsToEncounteredErrors - In the implementation block
-(NSSet *)pendingLogLocations;
-(void)transactionLogAtLocation:(id)arg1 failedToOpenWithError:(id)arg2 ;
-(void)transactionLogAtLocationWasIgnored:(id)arg1 ;
-(void)transactionLogAtLocationWasScheduled:(id)arg1 ;
-(NSDictionary *)logLocationsToEncounteredErrors;
-(NSSet *)failedLogLocations;
-(NSSet *)scheduledLogLocations;
-(void)addPendingLogLocation:(id)arg1 ;
-(void)addPendingLogLocations:(id)arg1 ;
-(NSSet *)ignoredLogLocations;
-(id)initWithPendingLogLocations:(id)arg1 ;
-(void)failedTransactionLogAtLocationRecovered:(id)arg1 ;
-(void)unionWithSchedulingContext:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
@end

