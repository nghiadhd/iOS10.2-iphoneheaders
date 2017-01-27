/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableArray;

@interface SFCompanionXPCManager : NSObject {

	BOOL _invalid;
	BOOL _interrupted;
	int _listenerResumedToken;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _xpcSetupQueue;
	NSMutableArray* _observers;

}

@property (retain) NSObject*<OS_dispatch_queue> xpcSetupQueue;              //@synthesize xpcSetupQueue=_xpcSetupQueue - In the implementation block
@property (assign) int listenerResumedToken;                                //@synthesize listenerResumedToken=_listenerResumedToken - In the implementation block
@property (assign) BOOL interrupted;                                        //@synthesize interrupted=_interrupted - In the implementation block
@property (retain) NSXPCConnection * connection;                            //@synthesize connection=_connection - In the implementation block
@property (retain) NSMutableArray * observers;                              //@synthesize observers=_observers - In the implementation block
@property (getter=isInvalid) BOOL invalid;                                  //@synthesize invalid=_invalid - In the implementation block
+(void)initialize;
+(id)sharedManager;
+(id)xpcManagerInterface;
+(id)serviceManagerClientInterface;
+(id)serviceManagerInterface;
+(id)advertiserClientInterface;
+(id)advertiserInterface;
+(id)scannerClientInterface;
+(id)scannerInterface;
+(id)unlockInterface;
+(id)hotspotClientInterface;
+(id)hotspotInterface;
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setObservers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)observers;
-(BOOL)isInvalid;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)setInvalid:(BOOL)arg1 ;
-(BOOL)interrupted;
-(void)setInterrupted:(BOOL)arg1 ;
-(void)airdropTransferDataProviderForClient:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)addAirDropClientToManager:(id)arg1 withFailureHandler:(/*^block*/id)arg2 ;
-(void)userDidPerformActionWithType:(unsigned long long)arg1 andRecordID:(id)arg2 ;
-(void)userDidSelectAppWithIndex:(id)arg1 forRecordID:(id)arg2 ;
-(void)unlockManagerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)remoteHotspotSessionForClient:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)activityAdvertiserProxyForClient:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)continuityScannerProxyForClient:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)appleAccountSignedIn;
-(void)appleAccountSignedOut;
-(void)setupConnection;
-(void)notifyOfInterruption;
-(void)notifyOfInvalidation;
-(void)notifyOfResume;
-(void)serviceManagerProxyForIdentifier:(id)arg1 client:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)streamsForMessage:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)xpcSetupQueue;
-(void)setXpcSetupQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)listenerResumedToken;
-(void)setListenerResumedToken:(int)arg1 ;
@end

