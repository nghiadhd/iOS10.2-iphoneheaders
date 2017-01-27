/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface _SYMessageTimerTable : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _callback;
	NSObject*<OS_dispatch_queue> _rwlock;
	NSMutableDictionary* _bySeqno;
	NSMutableDictionary* _byIdent;

}

@property (nonatomic,readonly) unsigned long long timerCount; 
-(id)init;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 timerCallback:(/*^block*/id)arg2 ;
-(void)setIdentifier:(id)arg1 forSequenceNumber:(unsigned long long)arg2 ;
-(void)cancelTimerForSequenceNumber:(unsigned long long)arg1 ;
-(void)addTimerWithFireDate:(id)arg1 forSequenceNumber:(unsigned long long)arg2 ;
-(void)cancelTimerForIdentifier:(id)arg1 ;
-(unsigned long long)timerCount;
-(void)_fireCallbackForSeqno:(unsigned long long)arg1 ;
-(void)_cleanupTimerForSeqno:(unsigned long long)arg1 ;
-(void)cancelAllTimers;
@end

