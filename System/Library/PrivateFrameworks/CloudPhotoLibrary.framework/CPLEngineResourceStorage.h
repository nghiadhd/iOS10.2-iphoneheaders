/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class CPLPlatformObject, NSMutableSet, NSURL, CPLEngineFileStorage, NSString;

@interface CPLEngineResourceStorage : CPLEngineStorage <CPLAbstractObject> {

	NSMutableSet* _identitiesToCommit;
	NSMutableSet* _identitiesToDelete;
	NSURL* _tempFolderURL;
	CPLEngineFileStorage* _fileStorage;

}

@property (nonatomic,readonly) CPLEngineFileStorage * fileStorage;              //@synthesize fileStorage=_fileStorage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(id)initWithEngineStore:(id)arg1 name:(id)arg2 ;
-(BOOL)markResourceAsUploaded:(id)arg1 fromURL:(id)arg2 error:(id*)arg3 ;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(BOOL)storeResourceForUpload:(id)arg1 error:(id*)arg2 ;
-(id)createFileURLForUploadForResource:(id)arg1 error:(id*)arg2 ;
-(BOOL)markResourceDoesNotNeedToBeUploaded:(id)arg1 error:(id*)arg2 ;
-(BOOL)markResourceFailedToUpload:(id)arg1 fromURL:(id)arg2 error:(id*)arg3 ;
-(id)retainFileURLForResource:(id)arg1 error:(id*)arg2 ;
-(BOOL)releaseFileURL:(id)arg1 forResource:(id)arg2 error:(id*)arg3 ;
-(BOOL)hasResource:(id)arg1 ;
-(id)createTempDestinationURLForResource:(id)arg1 error:(id*)arg2 ;
-(BOOL)storeDownloadedResource:(id)arg1 atURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)compactWithError:(id*)arg1 ;
-(CPLEngineFileStorage *)fileStorage;
-(unsigned long long)sizeOfOriginalResourcesToUpload;
-(unsigned long long)sizeOfResourcesToUpload;
-(BOOL)resetWithError:(id*)arg1 ;
-(BOOL)openWithError:(id*)arg1 ;
@end

