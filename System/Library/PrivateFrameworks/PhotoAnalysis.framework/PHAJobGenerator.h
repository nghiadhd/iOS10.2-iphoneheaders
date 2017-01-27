/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHPhotoLibrary, PHAWorkerHealthMonitor, NSMutableDictionary, NSDictionary;

@interface PHAJobGenerator : NSObject {

	PHPhotoLibrary* _library;
	PHAWorkerHealthMonitor* _healthMonitor;
	NSMutableDictionary* _workInfoReadersByMode;
	NSDictionary* _workersByType;
	long long _generatedJobCountGoal;
	NSMutableDictionary* _countOfJobsGeneratedByWorkerType;

}

@property (nonatomic,readonly) PHPhotoLibrary * library;                                            //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) PHAWorkerHealthMonitor * healthMonitor;                              //@synthesize healthMonitor=_healthMonitor - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * workInfoReadersByMode;                         //@synthesize workInfoReadersByMode=_workInfoReadersByMode - In the implementation block
@property (nonatomic,readonly) NSDictionary * workersByType;                                        //@synthesize workersByType=_workersByType - In the implementation block
@property (assign,nonatomic) long long generatedJobCountGoal;                                       //@synthesize generatedJobCountGoal=_generatedJobCountGoal - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * countOfJobsGeneratedByWorkerType;              //@synthesize countOfJobsGeneratedByWorkerType=_countOfJobsGeneratedByWorkerType - In the implementation block
+(long long)maxBatchSize;
-(PHPhotoLibrary *)library;
-(id)_workerTypesEligibleForLoadBalanceSkipping;
-(BOOL)_shouldLoadBalanceSkipForWorkerType:(short)arg1 ;
-(void)_increaseJobGeneratedGoalLevel;
-(PHAWorkerHealthMonitor *)healthMonitor;
-(NSDictionary *)workersByType;
-(BOOL)_workerUnavailableForWorkerType:(short)arg1 defaultsDisabledKey:(id)arg2 unavailableReason:(id*)arg3 ;
-(void)_incrementGeneratedJobCountForWorkerType:(short)arg1 ;
-(id)_produceAssetAnalysisOrAdditionalJobWithForWorkerType:(short)arg1 workInfoReaderMode:(id)arg2 scenario:(unsigned long long)arg3 allowLoadBalanceSkip:(BOOL)arg4 additionalStatesToExclude:(id)arg5 askAboutAdditionalJobs:(BOOL)arg6 canUseNetwork:(BOOL)arg7 defaultsDisabledKey:(id)arg8 failureReason:(id*)arg9 ;
-(id)_produceAcknowledgeDeletesJobForWorkerType:(short)arg1 scenario:(unsigned long long)arg2 defaultsDisabledKey:(id)arg3 failureReason:(id*)arg4 ;
-(BOOL)_anyWorkerIsLoadBalanceSkipping;
-(id)_transformWorkInfoByUUIDToWorkInfoByLocalIdentifier:(id)arg1 ;
-(id)initWithHealthMonitor:(id)arg1 library:(id)arg2 workersByType:(id)arg3 ;
-(id)generateJobWithCurrentConstraints:(id)arg1 ;
-(NSMutableDictionary *)workInfoReadersByMode;
-(long long)generatedJobCountGoal;
-(void)setGeneratedJobCountGoal:(long long)arg1 ;
-(NSMutableDictionary *)countOfJobsGeneratedByWorkerType;
@end

