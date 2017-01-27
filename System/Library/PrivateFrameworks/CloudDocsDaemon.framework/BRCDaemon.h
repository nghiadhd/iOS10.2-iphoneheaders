/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCReachabilityDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/BRCAccountHandlerDelegate.h>
#import <libobjc.A.dylib/UMUserSyncStakeholder.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSXPCListener, BRCAccountSession, BRCAccountHandler, UMUserSyncTask, NSArray, NSMutableDictionary, BRCVersionsFileProvider, NSOperationQueue, NSString, NSError, NSDate, NSXPCListenerEndpoint;

@interface BRCDaemon : NSObject <BRCReachabilityDelegate, NSXPCListenerDelegate, BRCAccountHandlerDelegate, UMUserSyncStakeholder> {

	NSObject*<OS_dispatch_source> _sigIntSrc;
	NSObject*<OS_dispatch_source> _sigQuitSrc;
	NSObject*<OS_dispatch_source> _sigTermSrc;
	NSXPCListener* _xpcListener;
	NSXPCListener* _tokenListener;
	BOOL _unitTestMode;
	BOOL _resumed;
	BOOL _deviceUnlocked;
	BOOL _hasNotEnoughDiskSpaceToBeFunctional;
	BRCAccountSession* _session;
	BRCAccountHandler* _accountHandler;
	NSObject*<OS_dispatch_queue> _xpcListenersReadyQueue;
	NSObject*<OS_dispatch_queue> _accountReadyQueue;
	NSObject*<OS_dispatch_queue> _accountResumedQueue;
	NSObject*<OS_dispatch_queue> _startupQueue;
	int _serverAvailabilityNotifyToken;
	NSObject*<OS_dispatch_queue> _accountLoaderQueue;
	BOOL _isInSyncBubble;
	UMUserSyncTask* _loginTask;
	NSArray* _fileProviders;
	NSMutableDictionary* _dirPaths;
	BRCVersionsFileProvider* _versionsProvider;
	NSMutableDictionary* _shareAcceptOperationsByURL;
	NSOperationQueue* _shareAcceptQueue;
	BOOL _disableAccountChangesHandling;
	BOOL _disableAppsChangesHandling;
	NSString* _logsDirPath;
	NSString* _appSupportDirPath;
	NSString* _cacheDirPath;
	Class _containerClass;
	NSError* _loggedOutError;
	NSString* _ubiquityTokenSalt;
	unsigned long long _forceIsGreedyState;
	NSDate* _startupDate;

}

@property (assign,nonatomic) BOOL disableAccountChangesHandling;                         //@synthesize disableAccountChangesHandling=_disableAccountChangesHandling - In the implementation block
@property (assign,nonatomic) BOOL disableAppsChangesHandling;                            //@synthesize disableAppsChangesHandling=_disableAppsChangesHandling - In the implementation block
@property (assign,nonatomic) unsigned long long forceIsGreedyState;                      //@synthesize forceIsGreedyState=_forceIsGreedyState - In the implementation block
@property (nonatomic,retain) NSString * logsDirPath;                                     //@synthesize logsDirPath=_logsDirPath - In the implementation block
@property (nonatomic,retain) NSString * appSupportDirPath;                               //@synthesize appSupportDirPath=_appSupportDirPath - In the implementation block
@property (nonatomic,retain) NSString * cacheDirPath;                                    //@synthesize cacheDirPath=_cacheDirPath - In the implementation block
@property (nonatomic,readonly) BRCAccountHandler * accountHandler;                       //@synthesize accountHandler=_accountHandler - In the implementation block
@property (nonatomic,retain) BRCAccountSession * session;                                //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSError * loggedOutError;                                   //@synthesize loggedOutError=_loggedOutError - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint; 
@property (nonatomic,readonly) NSString * ubiquityTokenSalt;                             //@synthesize ubiquityTokenSalt=_ubiquityTokenSalt - In the implementation block
@property (nonatomic,readonly) NSDate * startupDate;                                     //@synthesize startupDate=_startupDate - In the implementation block
@property (assign,nonatomic) BOOL isInSyncBubble;                                        //@synthesize isInSyncBubble=_isInSyncBubble - In the implementation block
@property (assign,nonatomic) BOOL doesNotHaveEnoughDiskSpaceToBeFunctional;              //@synthesize hasNotEnoughDiskSpaceToBeFunctional=_hasNotEnoughDiskSpaceToBeFunctional - In the implementation block
@property (nonatomic,retain) Class containerClass;                                       //@synthesize containerClass=_containerClass - In the implementation block
@property (nonatomic,readonly) BRCVersionsFileProvider * versionsProvider;               //@synthesize versionsProvider=_versionsProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)daemon;
-(id)init;
-(void)start;
-(NSXPCListenerEndpoint *)endpoint;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setSession:(BRCAccountSession *)arg1 ;
-(void)willSwitchUser;
-(BRCAccountSession *)session;
-(void)restart;
-(NSDate *)startupDate;
-(void)dumpToContext:(id)arg1 ;
-(id)fileProviderForSyncedFolderType:(unsigned long long)arg1 ;
-(BRCVersionsFileProvider *)versionsProvider;
-(void)networkReachabilityChanged:(BOOL)arg1 ;
-(void)networkReachabilityFlagsChanged:(unsigned)arg1 ;
-(BRCAccountHandler *)accountHandler;
-(NSString *)appSupportDirPath;
-(id)dirPathForSyncedFolderType:(unsigned long long)arg1 ;
-(NSString *)ubiquityTokenSalt;
-(void)setLoggedOutError:(NSError *)arg1 ;
-(void)accountHandler:(id)arg1 willChangeSessionFrom:(id)arg2 ;
-(void)accountHandler:(id)arg1 didChangeSessionTo:(id)arg2 ;
-(void)handleExitSignal:(int)arg1 ;
-(void)_initSignals;
-(NSString *)cacheDirPath;
-(BOOL)_isDeviceUnlocked;
-(void)waitUntilDeviceIsUnlocked;
-(void)_loadAccountIfNeeded;
-(BOOL)_shouldCacheDeleteForVolume:(id)arg1 ;
-(void)setUpSandbox;
-(BOOL)_haveRequiredKernelFeatures;
-(BOOL)checkEnoughDiskSpaceToBeFunctional;
-(void)localeDidChange;
-(void)loadAccount;
-(void)_setupCacheDelete;
-(void)_createSyncBubbleTasks;
-(void)_startXPCListeners;
-(void)_startupAndLoadAccount;
-(void)_resumeAccount;
-(void)_finishStartup;
-(void)resumeFileProviderForSyncedFolderType:(unsigned long long)arg1 ;
-(void)suspendFileProviderForSyncedFolderType:(unsigned long long)arg1 ;
-(void)waitOnAccountResumedQueue;
-(void)exitWithCode:(int)arg1 ;
-(void)setIsInSyncBubble:(BOOL)arg1 ;
-(NSError *)loggedOutError;
-(void)waitForConfiguration;
-(void)setUpAnonymousListener;
-(id)registerShareAcceptOperation:(id)arg1 forURL:(id)arg2 ;
-(BOOL)retrySyncBubbleLaterIfNeededWithError:(id)arg1 ;
-(void)setDirPath:(id)arg1 forSyncedFolderType:(unsigned long long)arg2 ;
-(id)fileProviderForURL:(id)arg1 ;
-(BOOL)selfCheck:(_sFILE*)arg1 ;
-(void)suspendIPCAcceptation;
-(void)resumeIPCAcceptation;
-(NSString *)logsDirPath;
-(void)setLogsDirPath:(NSString *)arg1 ;
-(void)setAppSupportDirPath:(NSString *)arg1 ;
-(void)setCacheDirPath:(NSString *)arg1 ;
-(Class)containerClass;
-(void)setContainerClass:(Class)arg1 ;
-(BOOL)disableAccountChangesHandling;
-(void)setDisableAccountChangesHandling:(BOOL)arg1 ;
-(BOOL)disableAppsChangesHandling;
-(void)setDisableAppsChangesHandling:(BOOL)arg1 ;
-(unsigned long long)forceIsGreedyState;
-(void)setForceIsGreedyState:(unsigned long long)arg1 ;
-(BOOL)doesNotHaveEnoughDiskSpaceToBeFunctional;
-(void)setDoesNotHaveEnoughDiskSpaceToBeFunctional:(BOOL)arg1 ;
-(BOOL)isInSyncBubble;
-(void)uploadContent;
@end

