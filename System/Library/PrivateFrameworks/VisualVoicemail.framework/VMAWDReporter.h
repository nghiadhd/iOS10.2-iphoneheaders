/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, AWDServerConnection;

@interface VMAWDReporter : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	AWDServerConnection* _serverConnection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) AWDServerConnection * serverConnection;              //@synthesize serverConnection=_serverConnection - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)reportVoicemailTranscriptionRatedAccurate:(BOOL)arg1 ;
-(void)reportVoicemailDownloadedWithDuration:(int)arg1 ;
-(void)_reportMetricWithID:(unsigned)arg1 metric:(id)arg2 ;
-(AWDServerConnection *)serverConnection;
-(void)setServerConnection:(AWDServerConnection *)arg1 ;
@end

