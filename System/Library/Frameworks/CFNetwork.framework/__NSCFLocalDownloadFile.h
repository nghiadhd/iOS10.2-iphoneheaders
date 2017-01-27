/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_io, OS_dispatch_queue, __NSCFLocalDownloadFileOpener;
#import <CFNetwork/CFNetwork-Structs.h>
@class NSObject, NSString;

@interface __NSCFLocalDownloadFile : NSObject {

	stat _stat;
	NSObject*<OS_dispatch_io> _writeIO;
	NSObject*<OS_dispatch_queue> _workQueue;
	BOOL _finished;
	NSString* _path;
	BOOL _skipUnlink;
	BOOL _truncateFile;
	int _error;
	id<__NSCFLocalDownloadFileOpener> _fileProvider;
	/*^block*/id _finishCompletion;

}

@property (retain) NSString * path;                                             //@synthesize path=_path - In the implementation block
@property (assign) BOOL skipUnlink;                                             //@synthesize skipUnlink=_skipUnlink - In the implementation block
@property (assign) BOOL truncateFile;                                           //@synthesize truncateFile=_truncateFile - In the implementation block
@property (assign) int error;                                                   //@synthesize error=_error - In the implementation block
@property (assign) id<__NSCFLocalDownloadFileOpener> fileProvider;              //@synthesize fileProvider=_fileProvider - In the implementation block
@property (copy) id finishCompletion;                                           //@synthesize finishCompletion=_finishCompletion - In the implementation block
-(id)initWithExistingUnopenableFile:(id)arg1 fileProvider:(id)arg2 ;
-(void)truncate;
-(id)initWithFullPath:(id)arg1 ;
-(id)initTempFileWithDirectory:(id)arg1 ;
-(void)setSkipUnlink:(BOOL)arg1 ;
-(id)initWithExistingFile:(id)arg1 expectedSize:(long long)arg2 ;
-(void)writeBytes:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)captureFile:(id*)arg1 outStat:(stat*)arg2 ;
-(void)finishOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initQueues;
-(void)setFileProvider:(id<__NSCFLocalDownloadFileOpener>)arg1 ;
-(id<__NSCFLocalDownloadFileOpener>)fileProvider;
-(id)finishCompletion;
-(void)setFinishCompletion:(id)arg1 ;
-(BOOL)skipUnlink;
-(id)ioChannel;
-(BOOL)truncateFile;
-(void)setTruncateFile:(BOOL)arg1 ;
-(void)dealloc;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)fileURL;
-(int)error;
-(void)setError:(int)arg1 ;
@end

