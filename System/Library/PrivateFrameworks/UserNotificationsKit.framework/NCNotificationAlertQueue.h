/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NCNotificationAlertDestinationDelegate.h>
#import <libobjc.A.dylib/NCNotificationAlertDestination.h>
#import <libobjc.A.dylib/NCDebugInfoProvider.h>

@protocol NCNotificationAlertDestinationDelegate;
@class NCNotificationDestinationsRegistry, NCNotificationCollapsingQueue, NCNotificationStore, NCNotificationRequest, NSString;

@interface NCNotificationAlertQueue : NSObject <NCNotificationAlertDestinationDelegate, NCNotificationAlertDestination, NCDebugInfoProvider> {

	id<NCNotificationAlertDestinationDelegate> _delegate;
	NCNotificationDestinationsRegistry* _destinationsRegistry;
	NCNotificationCollapsingQueue* _queue;
	NCNotificationStore* _store;
	NCNotificationRequest* _coalescingRequest;

}

@property (nonatomic,retain) NCNotificationCollapsingQueue * queue;                                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NCNotificationStore * store;                                            //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NCNotificationRequest * coalescingRequest;                              //@synthesize coalescingRequest=_coalescingRequest - In the implementation block
@property (nonatomic,retain) NCNotificationDestinationsRegistry * destinationsRegistry;              //@synthesize destinationsRegistry=_destinationsRegistry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NCNotificationDestinationDelegate> delegate; 
@property (nonatomic,readonly) NSString * identifier; 
-(id)init;
-(void)setDelegate:(id<NCNotificationDestinationDelegate>)arg1 ;
-(id<NCNotificationDestinationDelegate>)delegate;
-(NSString *)identifier;
-(NCNotificationCollapsingQueue *)queue;
-(void)setQueue:(NCNotificationCollapsingQueue *)arg1 ;
-(void)modifyNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 ;
-(id)debugInfoPlist;
-(void)updateNotificationSectionSettings:(id)arg1 ;
-(NCNotificationDestinationsRegistry *)destinationsRegistry;
-(void)registerDestination:(id)arg1 ;
-(void)unregisterDestination:(id)arg1 ;
-(void)setDestination:(id)arg1 enabled:(BOOL)arg2 ;
-(void)setDestination:(id)arg1 ready:(BOOL)arg2 ;
-(BOOL)isRegisteredDestination:(id)arg1 ;
-(id)destinationsForRequestDestinations:(id)arg1 ;
-(BOOL)_postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 ;
-(void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 ;
-(void)destination:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)destination:(id)arg1 executeAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)notificationSectionSettingsForDestination:(id)arg1 ;
-(id)notificationSectionSettingsForDestination:(id)arg1 forSectionIdentifier:(id)arg2 ;
-(void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2 ;
-(void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2 fromDestinations:(id)arg3 ;
-(void)destination:(id)arg1 requestsClearingNotificationRequestsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4 ;
-(void)destination:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2 ;
-(void)setCoalescingRequest:(NCNotificationRequest *)arg1 ;
-(void)_postNextNotificationRequest;
-(void)destinationDidBecomeReadyToReceiveNotifications:(id)arg1 ;
-(void)_postNextNotificationRequestPassingTest:(/*^block*/id)arg1 ;
-(void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsPassingTest:(/*^block*/id)arg2 ;
-(void)_postEnqueuedNotificationRequestsCoalescingWith:(id)arg1 ;
-(void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsCoalescedWith:(id)arg2 ;
-(void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2 suppressAlerts:(BOOL)arg3 ;
-(void)destination:(id)arg1 didPresentNotificationRequest:(id)arg2 ;
-(void)destination:(id)arg1 willDismissNotificationRequest:(id)arg2 ;
-(void)destination:(id)arg1 didDismissNotificationRequest:(id)arg2 ;
-(NCNotificationRequest *)coalescingRequest;
-(BOOL)_readyToReceiveForNotificationRequest:(id)arg1 ;
-(void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 ;
-(BOOL)_performDestinationOperationForRequest:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_prepareDestinationsToReceiveCriticalNotificationRequest:(id)arg1 ;
-(BOOL)_destinations:(id)arg1 canReceiveNotificationRequest:(id)arg2 ;
-(BOOL)canReceiveNotificationRequest:(id)arg1 ;
-(void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2 ;
-(id)initWithNotificationStore:(id)arg1 ;
-(void)setDestinationsRegistry:(NCNotificationDestinationsRegistry *)arg1 ;
-(void)setStore:(NCNotificationStore *)arg1 ;
-(NCNotificationStore *)store;
@end

