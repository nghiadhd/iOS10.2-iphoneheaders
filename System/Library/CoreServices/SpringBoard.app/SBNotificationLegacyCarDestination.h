/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBStarkScreenManagerObserver.h>
#import <libobjc.A.dylib/NCNotificationAlertDestination.h>

@protocol NCNotificationAlertDestinationDelegate, BBObserverDelegate;
@class SBQuietModeStateAggregator, NSString;

@interface SBNotificationLegacyCarDestination : NSObject <SBStarkScreenManagerObserver, NCNotificationAlertDestination> {

	id<NCNotificationAlertDestinationDelegate> _delegate;
	SBQuietModeStateAggregator* _quietModeStateAggregator;
	id<BBObserverDelegate> _bbObserverDelegate;
	unsigned long long _feed;

}

@property (nonatomic,retain) id<BBObserverDelegate> bbObserverDelegate;                          //@synthesize bbObserverDelegate=_bbObserverDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long feed;                                            //@synthesize feed=_feed - In the implementation block
@property (nonatomic,retain) SBQuietModeStateAggregator * quietModeStateAggregator;              //@synthesize quietModeStateAggregator=_quietModeStateAggregator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NCNotificationDestinationDelegate> delegate; 
@property (nonatomic,readonly) NSString * identifier; 
-(void)starkScreenManagerDidChangeCurrentController:(id)arg1 ;
-(BOOL)_isQuietModeEnabledAndActive;
-(SBQuietModeStateAggregator *)quietModeStateAggregator;
-(void)setQuietModeStateAggregator:(SBQuietModeStateAggregator *)arg1 ;
-(void)_setObserverDelegateForStarkScreenManager:(id)arg1 ;
-(id<BBObserverDelegate>)bbObserverDelegate;
-(void)setBbObserverDelegate:(id<BBObserverDelegate>)arg1 ;
-(id)init;
-(void)setDelegate:(id<NCNotificationDestinationDelegate>)arg1 ;
-(id<NCNotificationDestinationDelegate>)delegate;
-(NSString *)identifier;
-(unsigned long long)feed;
-(void)setFeed:(unsigned long long)arg1 ;
-(void)modifyNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 ;
-(void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 ;
-(void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 ;
-(BOOL)canReceiveNotificationRequest:(id)arg1 ;
@end

