/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MiroMemory, Project, MovieController, NSOperationQueue;

@interface MiroAutoEditor : NSObject {

	BOOL _shouldBuildMovieController;
	BOOL _shouldSave;
	BOOL _topLevelCancel;
	float _downloadProgress;
	float _progress;
	MiroMemory* _memory;
	Project* _project;
	long long _remainingAssetsToDownload;
	MovieController* _movieController;
	id _observer;
	/*^block*/id _downloadCompleted;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,retain) MiroMemory * memory;                            //@synthesize memory=_memory - In the implementation block
@property (retain) Project * project;                                        //@synthesize project=_project - In the implementation block
@property (assign) long long remainingAssetsToDownload;                      //@synthesize remainingAssetsToDownload=_remainingAssetsToDownload - In the implementation block
@property (assign) float downloadProgress;                                   //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (assign,nonatomic) float progress;                                 //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (retain) id<MiroSequence> sequence; 
@property (assign) BOOL shouldBuildMovieController;                          //@synthesize shouldBuildMovieController=_shouldBuildMovieController - In the implementation block
@property (retain) MovieController * movieController;                        //@synthesize movieController=_movieController - In the implementation block
@property (assign) BOOL shouldSave;                                          //@synthesize shouldSave=_shouldSave - In the implementation block
@property (assign) BOOL topLevelCancel;                                      //@synthesize topLevelCancel=_topLevelCancel - In the implementation block
@property (nonatomic,retain) id observer;                                    //@synthesize observer=_observer - In the implementation block
@property (nonatomic,copy) id downloadCompleted;                             //@synthesize downloadCompleted=_downloadCompleted - In the implementation block
+(id)sharedInstanceForPregenerate;
-(void)dealloc;
-(void)setProgress:(float)arg1 ;
-(BOOL)isBusy;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(float)progress;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)_cancel;
-(void)setObserver:(id)arg1 ;
-(id)observer;
-(MiroMemory *)memory;
-(void)setMemory:(MiroMemory *)arg1 ;
-(float)downloadProgress;
-(void)setDownloadProgress:(float)arg1 ;
-(void)updateProgress:(float)arg1 ;
-(id<MiroSequence>)sequence;
-(void)setSequence:(id<MiroSequence>)arg1 ;
-(void)pregenerateMemory:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)cancelAutoEdit;
-(MovieController *)movieController;
-(void)setMovieController:(MovieController *)arg1 ;
-(Project *)project;
-(id)initWithMemory:(id)arg1 shouldBuildMovieController:(BOOL)arg2 ;
-(void)performAutoEdit;
-(void)setShouldSave:(BOOL)arg1 ;
-(void)setProject:(Project *)arg1 ;
-(id)assetMediaType:(id)arg1 itemStart:(double)arg2 itemDuration:(double)arg3 ;
-(id)durationsForAsset:(id)arg1 itemDuration:(double)arg2 ;
-(void)setDownloadCompleted:(id)arg1 ;
-(id)downloadCompleted;
-(BOOL)topLevelCancel;
-(BOOL)isAutoEditing;
-(void)performPersist;
-(id)initForPregenerate;
-(void)_autoEditMemory:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_logMemoryStuff:(id)arg1 ;
-(void)fetchAndPrintAssets:(id)arg1 andMemory:(id)arg2 ;
-(void)setTopLevelCancel:(BOOL)arg1 ;
-(BOOL)shouldSave;
-(void)setRemainingAssetsToDownload:(long long)arg1 ;
-(BOOL)shouldNotifyProgress;
-(id)_printDataForAssetAsString:(id)arg1 andPickInfo:(id)arg2 ;
-(void)logFreeze:(id)arg1 message:(id)arg2 ;
-(void)updateProject:(id)arg1 ;
-(void)updateRemainingAssetsToDownload:(long long)arg1 ;
-(void)updateDownloadProgress:(float)arg1 ;
-(void)updateMovieController:(id)arg1 ;
-(id)_returnTextDebugAsString;
-(long long)remainingAssetsToDownload;
-(BOOL)shouldBuildMovieController;
-(void)setShouldBuildMovieController:(BOOL)arg1 ;
@end

