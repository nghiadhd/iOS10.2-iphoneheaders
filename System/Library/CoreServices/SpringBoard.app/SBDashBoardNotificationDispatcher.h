/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDashBoardNotificationAlertingController.h>
#import <SpringBoard/SBAlertingNotificationDestination.h>
#import <SpringBoard/SBDashBoardNotificationDispatcher.h>

@protocol SBDashBoardNotificationDispatcher <SBDashBoardParticipating>
@required
-(void)destination:(id)arg1 performAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(/*^block*/id)arg5;
-(void)destination:(id)arg1 clearNotificationRequests:(id)arg2;
-(id)alertingControllerForDestination:(id)arg1;
-(id)destination:(id)arg1 settingsForSectionIdentifier:(id)arg2;
-(void)destination:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(/*^block*/id)arg5;

@end


@protocol SBDashBoardNotificationDestination, NCNotificationDestinationDelegate;
@class SBDashBoardBehavior, SBNCAlertingController, NSString;

@interface SBDashBoardNotificationDispatcher : NSObject <SBDashBoardNotificationAlertingController, SBAlertingNotificationDestination, SBDashBoardNotificationDispatcher> {

	BOOL _active;
	id<SBDashBoardNotificationDestination> _modalDestination;
	id<SBDashBoardNotificationDestination> _listDestination;
	SBDashBoardBehavior* _activeBehavior;
	SBNCAlertingController* _alertingController;
	id<NCNotificationDestinationDelegate> _notificationDestinationDelegate;

}

@property (assign,getter=isActive,nonatomic) BOOL active;                                                 //@synthesize active=_active - In the implementation block
@property (nonatomic,retain) SBDashBoardBehavior * activeBehavior;                                        //@synthesize activeBehavior=_activeBehavior - In the implementation block
@property (assign,nonatomic,__weak) id<SBDashBoardNotificationDestination> modalDestination;              //@synthesize modalDestination=_modalDestination - In the implementation block
@property (assign,nonatomic,__weak) id<SBDashBoardNotificationDestination> listDestination;               //@synthesize listDestination=_listDestination - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NCNotificationDestinationDelegate> delegate;                       //@synthesize notificationDestinationDelegate=_notificationDestinationDelegate - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (assign,nonatomic,__weak) SBNCAlertingController * alertingController;                          //@synthesize alertingController=_alertingController - In the implementation block
@property (nonatomic,copy,readonly) NSString * dashBoardIdentifier; 
@property (nonatomic,readonly) long long participantState; 
-(NSString *)dashBoardIdentifier;
-(BOOL)isNotificationContentExtensionVisible:(id)arg1 ;
-(void)setModalDestination:(id<SBDashBoardNotificationDestination>)arg1 ;
-(void)setListDestination:(id<SBDashBoardNotificationDestination>)arg1 ;
-(void)destination:(id)arg1 performAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)destination:(id)arg1 clearNotificationRequests:(id)arg2 ;
-(id<SBDashBoardNotificationDestination>)modalDestination;
-(id<SBDashBoardNotificationDestination>)listDestination;
-(void)_clearNotificationRequestsFromDashBoard:(id)arg1 ;
-(void)stopAllRealerts;
-(id)alertingControllerForDestination:(id)arg1 ;
-(id)destination:(id)arg1 settingsForSectionIdentifier:(id)arg2 ;
-(void)setDelegate:(id<NCNotificationDestinationDelegate>)arg1 ;
-(id<NCNotificationDestinationDelegate>)delegate;
-(BOOL)isActive;
-(NSString *)identifier;
-(void)setActive:(BOOL)arg1 ;
-(long long)participantState;
-(void)setActiveBehavior:(SBDashBoardBehavior *)arg1 ;
-(SBDashBoardBehavior *)activeBehavior;
-(void)modifyNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 ;
-(void)updateNotificationSectionSettings:(id)arg1 ;
-(void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 ;
-(void)destination:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 ;
-(BOOL)canReceiveNotificationRequest:(id)arg1 ;
-(BOOL)interceptsQueueRequest:(id)arg1 ;
-(SBNCAlertingController *)alertingController;
-(void)setAlertingController:(SBNCAlertingController *)arg1 ;
@end

