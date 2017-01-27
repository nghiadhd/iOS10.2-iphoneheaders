/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotifier.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@class RTInvocationDispatcher, LSApplicationWorkspace, NSMutableDictionary, NSSet, RTMediaRemote, NSString;

@interface RTApplicationManager : RTNotifier <LSApplicationWorkspaceObserverProtocol> {

	BOOL _ready;
	RTInvocationDispatcher* _dispatcher;
	LSApplicationWorkspace* _applicationWorkspace;
	NSMutableDictionary* _appProxies;
	NSSet* _bundlesSupportingMediaRemotePopulation;
	NSSet* _bundlesSupportingPriming;
	RTMediaRemote* _mediaRemote;

}

@property (nonatomic,retain) RTInvocationDispatcher * dispatcher;                         //@synthesize dispatcher=_dispatcher - In the implementation block
@property (assign,nonatomic) BOOL ready;                                                  //@synthesize ready=_ready - In the implementation block
@property (nonatomic,retain) LSApplicationWorkspace * applicationWorkspace;               //@synthesize applicationWorkspace=_applicationWorkspace - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * appProxies;                            //@synthesize appProxies=_appProxies - In the implementation block
@property (nonatomic,retain) NSSet * bundlesSupportingMediaRemotePopulation;              //@synthesize bundlesSupportingMediaRemotePopulation=_bundlesSupportingMediaRemotePopulation - In the implementation block
@property (nonatomic,retain) NSSet * bundlesSupportingPriming;                            //@synthesize bundlesSupportingPriming=_bundlesSupportingPriming - In the implementation block
@property (nonatomic,retain) RTMediaRemote * mediaRemote;                                 //@synthesize mediaRemote=_mediaRemote - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_unregisterForNotifications;
-(id)init;
-(id)initWithName:(id)arg1 ;
-(void)purge;
-(void)_setup;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)_registerForNotifications;
-(void)shutdown;
-(void)_purge;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(id)applicationProxyForBundleIdentifier:(id)arg1 ;
-(RTInvocationDispatcher *)dispatcher;
-(BOOL)ready;
-(void)setDispatcher:(RTInvocationDispatcher *)arg1 ;
-(BOOL)allowBundleIdentifierForMagicalMoments:(id)arg1 ;
-(BOOL)allowBundleIdentifierForInstalledHeroApp:(id)arg1 ;
-(BOOL)allowBundleIdentifierForUninstalledHeroApp:(id)arg1 ;
-(RTMediaRemote *)mediaRemote;
-(void)setMediaRemote:(RTMediaRemote *)arg1 ;
-(id)initWithName:(id)arg1 applicationWorkspace:(id)arg2 mediaRemote:(id)arg3 ;
-(void)onNowPlayingBundleUpdate:(id)arg1 ;
-(void)onPrimingBundleUpdate:(id)arg1 ;
-(id)_createProxyForBundleIdentifier:(id)arg1 ;
-(long long)_capabilitiesForBundleIdentifier:(id)arg1 ;
-(id)_proxyForBundleIdentifier:(id)arg1 ;
-(void)_onNowPlayingBundleUpdate:(id)arg1 ;
-(void)_onPrimingBundleUpdate:(id)arg1 ;
-(void)_applicationsDidInstall:(id)arg1 ;
-(void)_applicationsDidUninstall:(id)arg1 ;
-(void)_removeProxyForBundleIdentifier:(id)arg1 ;
-(LSApplicationWorkspace *)applicationWorkspace;
-(void)setApplicationWorkspace:(LSApplicationWorkspace *)arg1 ;
-(NSMutableDictionary *)appProxies;
-(void)setAppProxies:(NSMutableDictionary *)arg1 ;
-(NSSet *)bundlesSupportingMediaRemotePopulation;
-(void)setBundlesSupportingMediaRemotePopulation:(NSSet *)arg1 ;
-(NSSet *)bundlesSupportingPriming;
-(void)setBundlesSupportingPriming:(NSSet *)arg1 ;
-(void)setReady:(BOOL)arg1 ;
@end

