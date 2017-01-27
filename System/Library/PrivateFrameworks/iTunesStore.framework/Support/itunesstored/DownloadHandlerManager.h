/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSHashTable;

@interface DownloadHandlerManager : NSObject {

	NSMutableDictionary* _clientsByHandlerID;
	NSMutableDictionary* _disconnectedSessionsByClientID;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableDictionary* _globalHandlersByClientID;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _observersQueue;
	NSMutableDictionary* _sessionsByID;

}
+(id)handlerManager;
-(void)addHandlerObserver:(id)arg1 ;
-(void)removeHandlerObserver:(id)arg1 ;
-(void)_clientDisconnectNotification:(id)arg1 ;
-(BOOL)canOpenSessionWithProperties:(id)arg1 ;
-(void)pauseSessionWithID:(long long)arg1 ;
-(void)cancelSessionWithID:(long long)arg1 ;
-(void)beginSessionWithID:(long long)arg1 ;
-(id)openSessionWithProperties:(id)arg1 ;
-(void)addDownloadHandler:(id)arg1 ;
-(void)cancelAuthenticationSessionWithID:(long long)arg1 ;
-(void)continueAuthenticationSessionWithID:(long long)arg1 ;
-(void)useCredential:(id)arg1 forAuthenticationSessionWithID:(long long)arg2 ;
-(void)performDefaultForAuthenticationSessionWithID:(long long)arg1 ;
-(void)rejectSpaceForAuthenticationSessionWithID:(long long)arg1 ;
-(void)disavowDownloadSessionWithID:(long long)arg1 error:(id)arg2 ;
-(void)failDownloadSessionWithID:(long long)arg1 error:(id)arg2 ;
-(void)finishDownloadSessionWithID:(long long)arg1 ;
-(void)releaseDownloadSessionWithID:(long long)arg1 ;
-(id)sessionForSessionID:(long long)arg1 ;
-(void)resetDisavowedSessionsForHandlerWithID:(long long)arg1 ;
-(void)setGlobalDownloadHandlerID:(long long)arg1 forClientID:(id)arg2 ;
-(void)modifyDownloadHandlerWithID:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setSessionProperties:(id)arg1 forSessionWithID:(long long)arg2 ;
-(void)_endDisconnectedSessionsForClientID:(id)arg1 ;
-(void)_notifyObserversOfHandlersChange;
-(id)_clientForSession:(id)arg1 ;
-(void)disconnectDownloadSessionWithID:(long long)arg1 ;
-(void)_sendMessage:(long long)arg1 forSessionID:(long long)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)_endSessionWithID:(long long)arg1 state:(long long)arg2 ;
-(id)_clientForProperties:(id)arg1 ;
-(id)_popDownloadSessionForSessionID:(long long)arg1 ;
-(void)_notifyObserversOfSessionChange:(id)arg1 ;
-(long long)_globalHandlerIDForClientID:(id)arg1 ;
-(id)_disconnectSessionsForHandlerID:(long long)arg1 ;
-(void)_notifyObserversOfSessionChanges:(id)arg1 ;
-(id)beginBackgroundTaskForSessionWithID:(long long)arg1 reason:(unsigned)arg2 expirationBlock:(/*^block*/id)arg3 ;
-(void)closeUnstartedSessionWithID:(long long)arg1 ;
-(void)endBackgroundTaskForSessionWithID:(long long)arg1 identifier:(id)arg2 ;
-(void)retrySessionWithID:(long long)arg1 ;
-(id)init;
-(void)dealloc;
@end

