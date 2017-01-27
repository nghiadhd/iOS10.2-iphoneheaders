/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CPLEngineTransportSendFeedbackTask;
@class NSObject, NSMutableArray, NSArray, NSDate, NSURL, CPLEngineLibrary;

@interface CPLEngineFeedbackManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<CPLEngineTransportSendFeedbackTask> _sendTask;
	NSMutableArray* _messagesToSend;
	NSArray* _messagesSending;
	NSDate* _lastAttemptDate;
	NSURL* _feedbackMessagesURL;
	BOOL _closed;
	CPLEngineLibrary* _engineLibrary;

}

@property (nonatomic,__weak,readonly) CPLEngineLibrary * engineLibrary;              //@synthesize engineLibrary=_engineLibrary - In the implementation block
-(id)componentName;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_save;
-(void)_load;
-(CPLEngineLibrary *)engineLibrary;
-(void)reportResetType:(id)arg1 reason:(id)arg2 ;
-(void)reportEndOfReset;
-(void)closeAndDeactivate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithEngineLibrary:(id)arg1 ;
-(void)_sendFeedbackToServerIfNecessary;
-(void)_reallySendFeedbackToServer;
-(void)_appendMessage:(id)arg1 ;
-(void)reportMessage:(id)arg1 ;
-(void)sendFeedbackToServerIfNecessary;
-(void)reportFetchChangesRewindToFeatureVersion:(unsigned long long)arg1 ;
@end

