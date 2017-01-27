/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class FinishDownloadMemoryEntity, NSString;

@interface FinishDownloadStepOperation : ISOperation {

	FinishDownloadMemoryEntity* _download;
	NSString* _downloadPhase;
	double _progressFraction;
	/*^block*/id _outputBlock;

}

@property (nonatomic,readonly) FinishDownloadMemoryEntity * download;              //@synthesize download=_download - In the implementation block
@property (copy) NSString * downloadPhase; 
@property (assign) double progressFraction; 
@property (copy) id outputBlock; 
-(void)finishWithDownloadResponse:(id)arg1 ;
-(id)documentsDirectoryPathWithClientIdentifier:(id)arg1 downloadKind:(id)arg2 ;
-(BOOL)moveFile:(id)arg1 toPath:(inout id*)arg2 installBehavior:(long long)arg3 error:(id*)arg4 ;
-(BOOL)rollbackAsset:(id)arg1 error:(id*)arg2 ;
-(void)setProgressFraction:(double)arg1 ;
-(id)_newURLOperationWithAsset:(id)arg1 ;
-(BOOL)installAsset:(id)arg1 error:(id*)arg2 ;
-(BOOL)moveAsset:(id)arg1 toPath:(inout id*)arg2 installBehavior:(long long)arg3 error:(id*)arg4 ;
-(BOOL)downloadAndInstallAsset:(id)arg1 error:(id*)arg2 ;
-(BOOL)downloadAsset:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeBinaryPropertyList:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(FinishDownloadMemoryEntity *)download;
-(id)initWithDownload:(id)arg1 ;
-(void)setOutputBlock:(id)arg1 ;
-(NSString *)downloadPhase;
-(void)setDownloadPhase:(NSString *)arg1 ;
-(id)outputBlock;
-(double)progressFraction;
@end

