/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDashBoardExternalEventHandling.h>
#import <SpringBoard/SBLiftToWakeObserver.h>

@class SBLiftToWakeController, SBLockScreenManager, SBBacklightController, SBPolicyAggregator, NSString;

@interface SBLiftToWakeManager : NSObject <SBDashBoardExternalEventHandling, SBLiftToWakeObserver> {

	SBLiftToWakeController* _liftToWakeController;
	SBLockScreenManager* _accessor_lockScreenManager;
	SBBacklightController* _accessor_backlightController;
	SBPolicyAggregator* _accessor_policyAggregator;
	BOOL _gestureWokeScreen;
	BOOL _observing;
	BOOL _significantUserInteractionOccuredSinceWake;

}

@property (setter=_setLiftToWakeController:,getter=_liftToWakeController,nonatomic,retain) SBLiftToWakeController * liftToWakeController;              //@synthesize liftToWakeController=_liftToWakeController - In the implementation block
@property (setter=_setPolicyAggregator:,getter=_policyAggregator,nonatomic,retain) SBPolicyAggregator * policyAggregator;                              //@synthesize accessor_policyAggregator=_accessor_policyAggregator - In the implementation block
@property (setter=_setLockScreenManager:,getter=_lockScreenManager,nonatomic,retain) SBLockScreenManager * lockScreenManager;                          //@synthesize accessor_lockScreenManager=_accessor_lockScreenManager - In the implementation block
@property (setter=_setBacklightController:,getter=_backlightController,nonatomic,retain) SBBacklightController * backlightController;                  //@synthesize accessor_backlightController=_accessor_backlightController - In the implementation block
@property (assign,setter=_setGestureWokeScreen:,getter=_gestureWokeScreen,nonatomic) BOOL gestureWokeScreen;                                           //@synthesize gestureWokeScreen=_gestureWokeScreen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * dashBoardIdentifier; 
@property (nonatomic,readonly) long long participantState; 
-(NSString *)dashBoardIdentifier;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(id)_policyAggregator;
-(void)liftToWakeController:(id)arg1 didObserveTransition:(long long)arg2 ;
-(id)_liftToWakeController;
-(void)_setPolicyAggregator:(id)arg1 ;
-(void)_ignoredTransition:(long long)arg1 ;
-(id)initWithLiftToWakeController:(id)arg1 ;
-(void)_backlightWillTurnOn:(id)arg1 ;
-(void)_setGestureWokeScreen:(BOOL)arg1 ;
-(BOOL)_gestureWokeScreen;
-(BOOL)_isLockScreenMainPageVisible;
-(BOOL)_isLockScreenIdleTimerDisabled;
-(void)_setLiftToWakeController:(id)arg1 ;
-(void)_setLockScreenManager:(id)arg1 ;
-(void)_setBacklightController:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(BOOL)handleEvent:(id)arg1 ;
-(id)_lockScreenManager;
-(id)_backlightController;
-(long long)participantState;
@end

