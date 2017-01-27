/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/UAAdvertiser.h>
#import <useractivityd/SFActivityAdvertiserDelegate.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class NSArray, NSMutableSet, NSObject, NSSet, UAUserActivityInfo, UADispatchScheduler, NSDate, SharingBTLEAdvertisementPayload, NSMutableDictionary, NSMutableArray, UATimedPowerAssertions, PowerManagerIdleTracker, NSString;

@interface UASharingAdvertiser : UAAdvertiser <SFActivityAdvertiserDelegate> {

	NSArray* _advertisableItems;
	NSMutableSet* _sfAdvertisers;
	BOOL _needToRefreshPeerDevices;
	BOOL _shouldAdvertiseHandoff;
	BOOL _shouldAdvertisePasteboard;
	BOOL _userIsCurrent;
	BOOL _pboardBitToAdvertise;
	NSObject*<OS_dispatch_group> _helpersDispatchGroup;
	NSSet* _pairedDevices;
	UAUserActivityInfo* _currentAdvertisedItem;
	NSObject*<OS_dispatch_queue> _dispatchQ;
	UADispatchScheduler* _nextScheduleUpdate;
	UADispatchScheduler* _periodicUpdate;
	NSDate* _dontAdvertiseAsCurrentUntil;
	SharingBTLEAdvertisementPayload* _currentAdvertisementPayload;
	NSDate* _lastAdvertismentTime;
	SharingBTLEAdvertisementPayload* _lastAdvertisementPayload;
	NSMutableDictionary* _currentAdvertisedItemOtherAdvertisedItems;
	NSMutableArray* _advertisementTimes;
	unsigned long long _changeAdvertisementThreadSpinCount;
	UATimedPowerAssertions* _preventIdleSleepAssertion;
	PowerManagerIdleTracker* _userIsCurrentIdleTracker;
	NSDate* _lastUserActiveTime;
	long long _lastAdvertisedGeneration;

}

@property (retain,readonly) NSObject*<OS_dispatch_group> helpersDispatchGroup;                   //@synthesize helpersDispatchGroup=_helpersDispatchGroup - In the implementation block
@property (retain,readonly) NSObject*<OS_dispatch_queue> dispatchQ;                              //@synthesize dispatchQ=_dispatchQ - In the implementation block
@property (retain,readonly) UADispatchScheduler * nextScheduleUpdate;                            //@synthesize nextScheduleUpdate=_nextScheduleUpdate - In the implementation block
@property (retain,readonly) UADispatchScheduler * periodicUpdate;                                //@synthesize periodicUpdate=_periodicUpdate - In the implementation block
@property (retain) NSDate * dontAdvertiseAsCurrentUntil;                                         //@synthesize dontAdvertiseAsCurrentUntil=_dontAdvertiseAsCurrentUntil - In the implementation block
@property (retain) SharingBTLEAdvertisementPayload * currentAdvertisementPayload;                //@synthesize currentAdvertisementPayload=_currentAdvertisementPayload - In the implementation block
@property (retain) NSDate * lastAdvertismentTime;                                                //@synthesize lastAdvertismentTime=_lastAdvertismentTime - In the implementation block
@property (copy) SharingBTLEAdvertisementPayload * lastAdvertisementPayload;                     //@synthesize lastAdvertisementPayload=_lastAdvertisementPayload - In the implementation block
@property (retain) UAUserActivityInfo * currentAdvertisedItem;                                   //@synthesize currentAdvertisedItem=_currentAdvertisedItem - In the implementation block
@property (retain) NSMutableDictionary * currentAdvertisedItemOtherAdvertisedItems;              //@synthesize currentAdvertisedItemOtherAdvertisedItems=_currentAdvertisedItemOtherAdvertisedItems - In the implementation block
@property (retain) NSMutableArray * advertisementTimes;                                          //@synthesize advertisementTimes=_advertisementTimes - In the implementation block
@property (assign) unsigned long long changeAdvertisementThreadSpinCount;                        //@synthesize changeAdvertisementThreadSpinCount=_changeAdvertisementThreadSpinCount - In the implementation block
@property (retain) UATimedPowerAssertions * preventIdleSleepAssertion;                           //@synthesize preventIdleSleepAssertion=_preventIdleSleepAssertion - In the implementation block
@property (assign) BOOL userIsCurrent;                                                           //@synthesize userIsCurrent=_userIsCurrent - In the implementation block
@property (retain) PowerManagerIdleTracker * userIsCurrentIdleTracker;                           //@synthesize userIsCurrentIdleTracker=_userIsCurrentIdleTracker - In the implementation block
@property (copy) NSDate * lastUserActiveTime;                                                    //@synthesize lastUserActiveTime=_lastUserActiveTime - In the implementation block
@property (copy) NSSet * pairedDevices;                                                          //@synthesize pairedDevices=_pairedDevices - In the implementation block
@property (readonly) BOOL shouldAdvertiseHandoff;                                                //@synthesize shouldAdvertiseHandoff=_shouldAdvertiseHandoff - In the implementation block
@property (readonly) BOOL shouldAdvertisePasteboard;                                             //@synthesize shouldAdvertisePasteboard=_shouldAdvertisePasteboard - In the implementation block
@property (assign) long long lastAdvertisedGeneration;                                           //@synthesize lastAdvertisedGeneration=_lastAdvertisedGeneration - In the implementation block
@property (assign) BOOL pboardBitToAdvertise;                                                    //@synthesize pboardBitToAdvertise=_pboardBitToAdvertise - In the implementation block
@property (copy,readonly) NSSet * sfActivityAdvertisers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)advertisableItems;
-(id)advertisingItems;
-(void)setAdvertisableItems:(id)arg1 ;
-(id)initWithManager:(id)arg1 advertiser:(id)arg2 ;
-(void)setAdvertisementTimes:(NSMutableArray *)arg1 ;
-(BOOL)okToSuspendAdvertising;
-(NSMutableArray *)advertisementTimes;
-(BOOL)addSFActivityAdvertiser:(id)arg1 ;
-(BOOL)removeSFActivityAdvertiser:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQ;
-(BOOL)_updateAdvertisement;
-(void)_periodicIdleUpdate;
-(void)setUserIsCurrent:(BOOL)arg1 ;
-(void)setLastUserActiveTime:(NSDate *)arg1 ;
-(UAUserActivityInfo *)currentAdvertisedItem;
-(BOOL)shouldAdvertisePasteboard;
-(BOOL)scheduleAdvertisementUpdate;
-(SharingBTLEAdvertisementPayload *)currentAdvertisementPayload;
-(NSDate *)lastAdvertismentTime;
-(UATimedPowerAssertions *)preventIdleSleepAssertion;
-(void)setPreventIdleSleepAssertion:(UATimedPowerAssertions *)arg1 ;
-(BOOL)_advertisePayload:(id)arg1 force:(BOOL)arg2 ;
-(void)updateAdvertisingPowerAssertion:(double)arg1 ;
-(NSSet *)sfActivityAdvertisers;
-(BOOL)_advertisePayload:(id)arg1 force:(BOOL)arg2 sfAdvertiser:(id)arg3 ;
-(void)setCurrentAdvertisementPayload:(SharingBTLEAdvertisementPayload *)arg1 ;
-(void)setLastAdvertismentTime:(NSDate *)arg1 ;
-(BOOL)scheduleAdvertisementUpdate:(double)arg1 ;
-(void)setLastAdvertisementPayload:(SharingBTLEAdvertisementPayload *)arg1 ;
-(void)scheduleIOPowerManagerUserIdleNotifications;
-(BOOL)userIsCurrent;
-(BOOL)pasteboardAvailible;
-(BOOL)pasteboardBitValue;
-(NSDate *)lastUserActiveTime;
-(void)setCurrentAdvertisedItem:(UAUserActivityInfo *)arg1 ;
-(NSMutableDictionary *)currentAdvertisedItemOtherAdvertisedItems;
-(void)setCurrentAdvertisedItemOtherAdvertisedItems:(NSMutableDictionary *)arg1 ;
-(UADispatchScheduler *)nextScheduleUpdate;
-(unsigned long long)changeAdvertisementThreadSpinCount;
-(void)setChangeAdvertisementThreadSpinCount:(unsigned long long)arg1 ;
-(void)removeAdvertisement;
-(BOOL)shouldAdvertiseHandoff;
-(BOOL)advertiseItem:(id)arg1 force:(BOOL)arg2 ;
-(void)advertisePayload:(id)arg1 force:(BOOL)arg2 ;
-(void)removeIOPowerManagerUserIdleNotifications;
-(void)_refreshPairedSFPeerDevices;
-(void)_updatePairedDeviceCapabilities;
-(void)activityAdvertiser:(id)arg1 activityPayloadForAdvertisementPayload:(id)arg2 handoffCommand:(id)arg3 requestedByDevice:(id)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(BOOL)peerDeviceCanAcceptNewerPayload:(id)arg1 ;
-(PowerManagerIdleTracker *)userIsCurrentIdleTracker;
-(long long)lastAdvertisedGeneration;
-(void)setLastAdvertisedGeneration:(long long)arg1 ;
-(BOOL)pboardBitToAdvertise;
-(void)setPboardBitToAdvertise:(BOOL)arg1 ;
-(id)sfActivityAdvertiser;
-(SharingBTLEAdvertisementPayload *)lastAdvertisementPayload;
-(id)currentAdvertisedBytes;
-(id)mostRecentAdvertisedBytesTime;
-(BOOL)_advertisePayload:(id)arg1 ;
-(NSObject*<OS_dispatch_group>)helpersDispatchGroup;
-(NSDate *)dontAdvertiseAsCurrentUntil;
-(void)setDontAdvertiseAsCurrentUntil:(NSDate *)arg1 ;
-(void)setUserIsCurrentIdleTracker:(PowerManagerIdleTracker *)arg1 ;
-(BOOL)suspend;
-(BOOL)active;
-(BOOL)resume;
-(BOOL)advertising;
-(id)statusString;
-(void)activityAdvertiser:(id)arg1 activityPayloadForAdvertisementPayload:(id)arg2 command:(id)arg3 requestedByDevice:(id)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(void)activityAdvertiser:(id)arg1 activityPayloadForAdvertisementPayload:(id)arg2 requestedByDevice:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)activityAdvertiser:(id)arg1 didSendPayloadForActivityIdentifier:(id)arg2 toDevice:(id)arg3 error:(id)arg4 ;
-(void)activityAdvertiser:(id)arg1 pairedDevicesChangedNotification:(id)arg2 ;
-(NSSet *)pairedDevices;
-(void)setPairedDevices:(NSSet *)arg1 ;
-(UADispatchScheduler *)periodicUpdate;
@end

