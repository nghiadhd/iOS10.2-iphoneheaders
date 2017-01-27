/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:34:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSFileHandle, SSLogFileOptions;

@interface SSRollableLog : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _lastFileStatTime;
	NSFileHandle* _fileHandle;
	NSObject*<OS_dispatch_source> _fileObserverSource;
	SSLogFileOptions* _options;

}

@property (readonly) SSLogFileOptions * logOptions; 
-(id)initWithLogOptions:(id)arg1 ;
-(void)_openLogFile;
-(void)_checkLogFileSize;
-(void)_closeLogFile;
-(id)_logFilePathWithIndex:(long long)arg1 ;
-(id)_activeLogFilePath;
-(void)_rollLogFiles;
-(SSLogFileOptions *)logOptions;
-(void)dealloc;
-(void)writeString:(id)arg1 ;
@end

