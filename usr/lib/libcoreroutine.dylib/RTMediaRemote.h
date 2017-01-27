/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotifier.h>

@class RTDefaultsManager, RTDataProviderNowPlaying, RTPurgeManager, NSDate, NSString, NSSet, NSMutableSet, RTInvocationDispatcher;

@interface RTMediaRemote : RTNotifier {

	BOOL _ready;
	unsigned _lastNowPlayingState;
	RTDefaultsManager* _defaultsManager;
	RTDataProviderNowPlaying* _nowPlayingDataProvider;
	RTPurgeManager* _purgeManager;
	NSDate* _dateOfLastNowPlayingTransition;
	NSString* _lastNowPlayingBundleId;
	double _minimumNowPlayingDurationTimeInterval;
	NSSet* _blacklistedBundleIds;
	NSSet* _whitelistedBundleIds;
	NSMutableSet* _bundleIdsSupportingMediaRemote;
	NSMutableSet* _bundleIdsSupportingPriming;
	NSMutableSet* _bundleIdsNotSupportingPriming;
	RTInvocationDispatcher* _dispatcher;

}

@property (nonatomic,retain) RTDefaultsManager * defaultsManager;                            //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,retain) RTDataProviderNowPlaying * nowPlayingDataProvider;              //@synthesize nowPlayingDataProvider=_nowPlayingDataProvider - In the implementation block
@property (nonatomic,retain) RTPurgeManager * purgeManager;                                  //@synthesize purgeManager=_purgeManager - In the implementation block
@property (nonatomic,retain) NSDate * dateOfLastNowPlayingTransition;                        //@synthesize dateOfLastNowPlayingTransition=_dateOfLastNowPlayingTransition - In the implementation block
@property (assign,nonatomic) unsigned lastNowPlayingState;                                   //@synthesize lastNowPlayingState=_lastNowPlayingState - In the implementation block
@property (nonatomic,copy) NSString * lastNowPlayingBundleId;                                //@synthesize lastNowPlayingBundleId=_lastNowPlayingBundleId - In the implementation block
@property (assign,nonatomic) double minimumNowPlayingDurationTimeInterval;                   //@synthesize minimumNowPlayingDurationTimeInterval=_minimumNowPlayingDurationTimeInterval - In the implementation block
@property (nonatomic,copy) NSSet * blacklistedBundleIds;                                     //@synthesize blacklistedBundleIds=_blacklistedBundleIds - In the implementation block
@property (nonatomic,copy) NSSet * whitelistedBundleIds;                                     //@synthesize whitelistedBundleIds=_whitelistedBundleIds - In the implementation block
@property (nonatomic,retain) NSMutableSet * bundleIdsSupportingMediaRemote;                  //@synthesize bundleIdsSupportingMediaRemote=_bundleIdsSupportingMediaRemote - In the implementation block
@property (nonatomic,retain) NSMutableSet * bundleIdsSupportingPriming;                      //@synthesize bundleIdsSupportingPriming=_bundleIdsSupportingPriming - In the implementation block
@property (nonatomic,retain) NSMutableSet * bundleIdsNotSupportingPriming;                   //@synthesize bundleIdsNotSupportingPriming=_bundleIdsNotSupportingPriming - In the implementation block
@property (nonatomic,retain) RTInvocationDispatcher * dispatcher;                            //@synthesize dispatcher=_dispatcher - In the implementation block
@property (assign,nonatomic) BOOL ready;                                                     //@synthesize ready=_ready - In the implementation block
+(id)sharedInstance;
+(id)defaultApplicationWhitelist;
-(void)_unregisterForNotifications;
-(id)init;
-(id)initWithName:(id)arg1 ;
-(void)_setup;
-(void)_registerForNotifications;
-(void)shutdown;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(RTInvocationDispatcher *)dispatcher;
-(BOOL)ready;
-(void)setDispatcher:(RTInvocationDispatcher *)arg1 ;
-(void)onPurgeNotification:(id)arg1 ;
-(RTDefaultsManager *)defaultsManager;
-(void)updateValueForKey:(id)arg1 expectedClass:(Class)arg2 handler:(/*^block*/id)arg3 ;
-(void)onDefaultsUpdate:(id)arg1 ;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(RTPurgeManager *)purgeManager;
-(void)setPurgeManager:(RTPurgeManager *)arg1 ;
-(void)_onDefaultsUpdate:(id)arg1 ;
-(void)primingSupportedForBundleIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_onPurgeNotification:(id)arg1 ;
-(id)initWithName:(id)arg1 defaultsManager:(id)arg2 nowPlayingDataProvider:(id)arg3 purgeManager:(id)arg4 ;
-(void)_registerForMediaRemoteNotifications;
-(void)fetchNowPlayingApplicationPlaybackState:(/*^block*/id)arg1 ;
-(void)_updateBundleIdsSupportingMediaRemoteCapability:(/*^block*/id)arg1 ;
-(void)fetchNowPlayingApplicationBundleIdentifier:(/*^block*/id)arg1 ;
-(void)_unregisterForMediaRemoteNotifications;
-(void)_handleNowPlayingApplicationIsPlayingDidChange;
-(void)__handleNowPlayingApplication:(id)arg1 didChangeState:(unsigned)arg2 ;
-(void)_primingSupportedForBundleIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_addBundleIdentifier:(id)arg1 supportsPriming:(BOOL)arg2 ;
-(void)_bundleIdentifiersKnownToSupportPriming:(/*^block*/id)arg1 ;
-(void)_bundleIdentifiersKnownToNotSupportPriming:(/*^block*/id)arg1 ;
-(void)_fetchBundleIdentifiersSupportingMediaRemoteCapability:(/*^block*/id)arg1 ;
-(void)handleNowPlayingApplicationIsPlayingDidChange;
-(void)bundleIdentifiersKnownToSupportPriming:(/*^block*/id)arg1 ;
-(void)bundleIdentifiersKnownToNotSupportPriming:(/*^block*/id)arg1 ;
-(void)fetchBundleIdentifiersSupportingMediaRemoteCapability:(/*^block*/id)arg1 ;
-(RTDataProviderNowPlaying *)nowPlayingDataProvider;
-(void)setNowPlayingDataProvider:(RTDataProviderNowPlaying *)arg1 ;
-(NSDate *)dateOfLastNowPlayingTransition;
-(void)setDateOfLastNowPlayingTransition:(NSDate *)arg1 ;
-(unsigned)lastNowPlayingState;
-(void)setLastNowPlayingState:(unsigned)arg1 ;
-(NSString *)lastNowPlayingBundleId;
-(void)setLastNowPlayingBundleId:(NSString *)arg1 ;
-(double)minimumNowPlayingDurationTimeInterval;
-(void)setMinimumNowPlayingDurationTimeInterval:(double)arg1 ;
-(NSSet *)blacklistedBundleIds;
-(void)setBlacklistedBundleIds:(NSSet *)arg1 ;
-(NSSet *)whitelistedBundleIds;
-(void)setWhitelistedBundleIds:(NSSet *)arg1 ;
-(NSMutableSet *)bundleIdsSupportingMediaRemote;
-(void)setBundleIdsSupportingMediaRemote:(NSMutableSet *)arg1 ;
-(NSMutableSet *)bundleIdsSupportingPriming;
-(void)setBundleIdsSupportingPriming:(NSMutableSet *)arg1 ;
-(NSMutableSet *)bundleIdsNotSupportingPriming;
-(void)setBundleIdsNotSupportingPriming:(NSMutableSet *)arg1 ;
-(void)setReady:(BOOL)arg1 ;
@end

