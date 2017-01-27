/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SpringBoardPlugins/IncomingCall.servicebundle/IncomingCall
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IncomingCall/IncomingCall-Structs.h>
#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>
#import <libobjc.A.dylib/SBPluginBundleController.h>

@class SBSRemoteAlertHandle, PHCarPlayHardwareControlsBroadcaster, TUCall, NSString;

@interface MPTelephonyManager : NSObject <SBSRemoteAlertHandleObserver, SBPluginBundleController> {

	BOOL _listeningForCallNotifications;
	BOOL _lockScreenPluginIsActive;
	BOOL _passwordNotificationIsExpired;
	CFUserNotificationRef _passwordNotification;
	SBSRemoteAlertHandle* _carPlayRemoteAlertHandle;
	PHCarPlayHardwareControlsBroadcaster* _hardwareControlBroadcaster;

}

@property (assign,nonatomic) BOOL listeningForCallNotifications;                                             //@synthesize listeningForCallNotifications=_listeningForCallNotifications - In the implementation block
@property (assign,nonatomic) BOOL lockScreenPluginIsActive;                                                  //@synthesize lockScreenPluginIsActive=_lockScreenPluginIsActive - In the implementation block
@property (assign,nonatomic) CFUserNotificationRef passwordNotification;                                     //@synthesize passwordNotification=_passwordNotification - In the implementation block
@property (assign) BOOL passwordNotificationIsExpired;                                                       //@synthesize passwordNotificationIsExpired=_passwordNotificationIsExpired - In the implementation block
@property (nonatomic,retain) SBSRemoteAlertHandle * carPlayRemoteAlertHandle;                                //@synthesize carPlayRemoteAlertHandle=_carPlayRemoteAlertHandle - In the implementation block
@property (nonatomic,retain) PHCarPlayHardwareControlsBroadcaster * hardwareControlBroadcaster;              //@synthesize hardwareControlBroadcaster=_hardwareControlBroadcaster - In the implementation block
@property (readonly) TUCall * activeCall; 
@property (readonly) TUCall * incomingCall; 
@property (readonly) TUCall * heldCall; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)awakeFromBundle;
+(id)sharedInstance;
+(BOOL)supportsCalls;
+(BOOL)supportsVideoCalls;
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(TUCall *)incomingCall;
-(void)_startListeningForNotifications;
-(BOOL)listeningForCallNotifications;
-(void)handleCallStatusChanged:(id)arg1 ;
-(void)handleCallCenterFailure:(id)arg1 ;
-(void)handleLockStateChanged:(id)arg1 ;
-(void)handleVideoCallStatusChanged:(id)arg1 ;
-(void)hardwareControlEventNotification:(id)arg1 ;
-(void)screenDidConnect:(id)arg1 ;
-(void)screenDidDisconnect:(id)arg1 ;
-(void)setListeningForCallNotifications:(BOOL)arg1 ;
-(void)updateLockScreenPluginStatus:(BOOL)arg1 ;
-(TUCall *)activeCall;
-(TUCall *)heldCall;
-(BOOL)activeCallExists;
-(BOOL)incomingCallExists;
-(BOOL)sendingCallExists;
-(BOOL)shouldShowAlertForCall:(id)arg1 ;
-(void)showInCallAlertWithBackgroundStyle:(long long)arg1 ;
-(void)showInCallAlertForCarPlay;
-(SBSRemoteAlertHandle *)carPlayRemoteAlertHandle;
-(void)_resetCarPlayAlertHandle:(id)arg1 shouldInvalidate:(BOOL)arg2 ;
-(id)_createCarPlayRemoteAlertHandle;
-(void)setCarPlayRemoteAlertHandle:(SBSRemoteAlertHandle *)arg1 ;
-(void)displayAlertForCallIfNecessary:(id)arg1 ;
-(void)_showAlertsIfNecessaryForDisconnectedCall:(id)arg1 ;
-(BOOL)heldCallExists;
-(BOOL)activeVideoCallExists;
-(BOOL)incomingVideoCallExists;
-(void)_showUserNotificationForCall:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)shouldRespondToHardwareControlEvents;
-(BOOL)lockScreenPluginIsActive;
-(void)setLockScreenPluginIsActive:(BOOL)arg1 ;
-(BOOL)isTTYEnabled;
-(void)setPasswordNotification:(CFUserNotificationRef)arg1 ;
-(CFUserNotificationRef)passwordNotification;
-(BOOL)passwordNotificationIsExpired;
-(void)setPasswordNotificationIsExpired:(BOOL)arg1 ;
-(PHCarPlayHardwareControlsBroadcaster *)hardwareControlBroadcaster;
-(void)setHardwareControlBroadcaster:(PHCarPlayHardwareControlsBroadcaster *)arg1 ;
@end

