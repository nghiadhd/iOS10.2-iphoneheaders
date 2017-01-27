/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MSPHistoryDependent.h>

@class MSPHistoryContainer, RAPStorage, NSString;

@interface MSPHistoryRAPStorage : NSObject <MSPHistoryDependent> {

	RAPStorage* _underlyingStorage;
	MSPHistoryContainer* _historyContainer;

}

@property (nonatomic,readonly) RAPStorage * underlyingStorage;                           //@synthesize underlyingStorage=_underlyingStorage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) MSPHistoryContainer * historyContainer;              //@synthesize historyContainer=_historyContainer - In the implementation block
+(Class)recordingClass;
-(void)editRecordingForHistoryEntryWithStorageIdentifier:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(RAPStorage *)underlyingStorage;
-(void)loadAllRecordingsWithConcurrentBlock:(/*^block*/id)arg1 ;
-(void)saveRecording:(id)arg1 forHistoryEntryWithStorageIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithStorageDirectoryURL:(id)arg1 ;
-(MSPHistoryContainer *)historyContainer;
-(id)init;
-(void)historyContainerPerformMaintenanceForValidIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setHistoryContainer:(MSPHistoryContainer *)arg1 ;
@end

