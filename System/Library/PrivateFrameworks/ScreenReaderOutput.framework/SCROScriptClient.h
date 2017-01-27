/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSLock, SCROConnection, SCRCTargetSelectorTimer, NSObject;

@interface SCROScriptClient : NSObject {

	NSLock* _lock;
	SCROConnection* _connection;
	SCRCTargetSelectorTimer* _timer;
	BOOL _isReady;
	NSObject*<OS_dispatch_queue> __scriptDispatchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> _scriptDispatchQueue;              //@synthesize _scriptDispatchQueue=__scriptDispatchQueue - In the implementation block
+(id)sharedClient;
-(BOOL)_isReady;
-(id)init;
-(void)dealloc;
-(id)_lazyConnection;
-(void)_killConnection;
-(NSObject*<OS_dispatch_queue>)_scriptDispatchQueue;
-(BOOL)runScriptFile:(id)arg1 ;
-(void)set_scriptDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)handleCallback:(id)arg1 ;
@end

