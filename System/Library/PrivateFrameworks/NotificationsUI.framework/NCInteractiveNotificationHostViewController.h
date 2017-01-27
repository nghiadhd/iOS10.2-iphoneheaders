/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/NCInteractiveNotificationHostInterface.h>
#import <libobjc.A.dylib/NCInteractiveNotificationHostDelegate.h>
#import <libobjc.A.dylib/NCInteractiveNotificationHost.h>

@protocol NCInteractiveNotificationHostDelegate;
@class NCViewServiceDescriptor, NSString;

@interface NCInteractiveNotificationHostViewController : _UIRemoteViewController <NCInteractiveNotificationHostInterface, NCInteractiveNotificationHostDelegate, NCInteractiveNotificationHost> {

	BOOL _proximityMonitoringEnabled;
	BOOL _modal;
	BOOL _showsKeyboard;
	double _maximumHeight;
	id<NCInteractiveNotificationHostDelegate> _delegate;
	double _bottomOverhangHeight;
	NCViewServiceDescriptor* _inlayViewService;
	NCViewServiceDescriptor* _accessoryViewService;

}

@property (assign,nonatomic) BOOL showsKeyboard;                                                     //@synthesize showsKeyboard=_showsKeyboard - In the implementation block
@property (assign,nonatomic) double bottomOverhangHeight;                                            //@synthesize bottomOverhangHeight=_bottomOverhangHeight - In the implementation block
@property (nonatomic,retain) NCViewServiceDescriptor * inlayViewService;                             //@synthesize inlayViewService=_inlayViewService - In the implementation block
@property (nonatomic,retain) NCViewServiceDescriptor * accessoryViewService;                         //@synthesize accessoryViewService=_accessoryViewService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NCInteractiveNotificationHostDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isModal,nonatomic) BOOL modal;                                              //@synthesize modal=_modal - In the implementation block
@property (assign,nonatomic) double maximumHeight;                                                   //@synthesize maximumHeight=_maximumHeight - In the implementation block
+(void)initialize;
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(void)requestInteractiveNotificationControllerWithName:(id)arg1 bundleIdentifier:(id)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setDelegate:(id<NCInteractiveNotificationHostDelegate>)arg1 ;
-(void)dealloc;
-(id<NCInteractiveNotificationHostDelegate>)delegate;
-(BOOL)showsKeyboard;
-(BOOL)__shouldRemoteViewControllerFenceOperations;
-(void)_dismissWithContext:(id)arg1 ;
-(void)_requestDismissalEnabled:(BOOL)arg1 ;
-(void)_requestPreferredContentHeight:(double)arg1 ;
-(void)_setActionEnabled:(BOOL)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_requestProximityMonitoringEnabled:(BOOL)arg1 ;
-(double)bottomOverhangHeight;
-(NCViewServiceDescriptor *)accessoryViewService;
-(void)interactiveNotificationDidAppear;
-(void)didChangeRevealPercent:(double)arg1 ;
-(void)handleActionIdentifier:(id)arg1 ;
-(void)willPresentFromActionIdentifier:(id)arg1 ;
-(void)getActionContextWithCompletion:(/*^block*/id)arg1 ;
-(void)setShowsKeyboard:(BOOL)arg1 ;
-(void)setBottomOverhangHeight:(double)arg1 ;
-(void)setInlayViewService:(NCViewServiceDescriptor *)arg1 ;
-(void)setAccessoryViewService:(NCViewServiceDescriptor *)arg1 ;
-(void)_setProximityMonitoringEnabled:(BOOL)arg1 ;
-(void)_proximityStateChanged:(id)arg1 ;
-(BOOL)isModal;
-(void)setModal:(BOOL)arg1 ;
-(void)setMaximumHeight:(double)arg1 ;
-(double)maximumHeight;
-(void)handleActionAtIndex:(long long)arg1 ;
-(NCViewServiceDescriptor *)inlayViewService;
@end

