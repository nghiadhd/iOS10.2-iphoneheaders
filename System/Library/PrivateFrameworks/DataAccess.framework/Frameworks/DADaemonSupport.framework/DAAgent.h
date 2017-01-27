/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DAAccount, DATrustHandler;

@interface DAAgent : NSObject {

	BOOL _isMonitoring;
	BOOL _syncWhenReachable;
	BOOL _isWaitingForPassword;
	DAAccount* _account;
	double _lastRetryTimeout;
	/*^block*/id _networkReachableBlock;

}

@property (nonatomic,retain) DAAccount * account;                          //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) double lastRetryTimeout;                      //@synthesize lastRetryTimeout=_lastRetryTimeout - In the implementation block
@property (assign,nonatomic) BOOL syncWhenReachable;                       //@synthesize syncWhenReachable=_syncWhenReachable - In the implementation block
@property (nonatomic,copy) id networkReachableBlock;                       //@synthesize networkReachableBlock=_networkReachableBlock - In the implementation block
@property (assign,nonatomic) BOOL isWaitingForPassword;                    //@synthesize isWaitingForPassword=_isWaitingForPassword - In the implementation block
@property (assign,nonatomic) BOOL isMonitoring;                            //@synthesize isMonitoring=_isMonitoring - In the implementation block
@property (nonatomic,readonly) DATrustHandler * trustHandler; 
-(void)_reachabilityChanged:(id)arg1 ;
-(DATrustHandler *)trustHandler;
-(BOOL)isMonitoring;
-(id)stateString;
-(id)initWithAccount:(id)arg1 ;
-(DAAccount *)account;
-(void)setAccount:(DAAccount *)arg1 ;
-(BOOL)syncWhenReachable;
-(id)networkReachableBlock;
-(void)setNetworkReachableBlock:(id)arg1 ;
-(id)getDAAccount;
-(double)lastRetryTimeout;
-(void)setLastRetryTimeout:(double)arg1 ;
-(BOOL)isWaitingForPassword;
-(void)setIsWaitingForPassword:(BOOL)arg1 ;
-(int)preferredToDoDaysToSync;
-(void)shutdown;
-(int)preferredEventDaysToSync;
-(void)setSyncWhenReachable:(BOOL)arg1 ;
-(void)setIsMonitoring:(BOOL)arg1 ;
-(void)observeReachabilityWithBlock:(/*^block*/id)arg1 ;
-(void)refreshFolderListRequireChangedFolders:(BOOL)arg1 isUserRequested:(BOOL)arg2 ;
-(void)stopObservingReachability;
-(void)syncFolderIDs:(id)arg1 forDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3 ;
-(void)processMeetingRequestDatas:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 callback:(/*^block*/id)arg5 ;
-(void)requestAgentStopMonitoringWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)startMonitoring;
@end

