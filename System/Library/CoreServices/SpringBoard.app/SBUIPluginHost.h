/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBFAuthenticationResponder.h>
#import <SpringBoard/SBUIPluginControllerHost.h>

@class SBUIPluginController, SBFUserAuthenticationController, NSString;

@interface SBUIPluginHost : NSObject <SBFAuthenticationResponder, SBUIPluginControllerHost> {

	SBUIPluginController* _plugin;
	BOOL _expectsFaceContact;
	BOOL _isPluginRunning;
	SBFUserAuthenticationController* _authController;

}

@property (retain) SBUIPluginController * pluginController;                                                                                   //@synthesize plugin=_plugin - In the implementation block
@property (setter=_setAuthController:,getter=_authController,nonatomic,retain) SBFUserAuthenticationController * authController;              //@synthesize authController=_authController - In the implementation block
@property (readonly) BOOL isPluginVisible; 
@property (readonly) BOOL isPluginRunning; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPluginRunning;
-(BOOL)pluginHandledButtonDownEventFromSource:(int)arg1 ;
-(BOOL)pluginHandledButtonUpEventFromSource:(int)arg1 ;
-(BOOL)pluginWantsActivationEvent:(int)arg1 eventSource:(int)arg2 interval:(double*)arg3 ;
-(BOOL)activatePluginForEvent:(int)arg1 eventSource:(int)arg2 context:(void*)arg3 ;
-(BOOL)pluginHandledPasscodeUnlockWithCompletion:(/*^block*/id)arg1 ;
-(void)preparePluginForActivationEvent:(int)arg1 eventSource:(int)arg2 afterInterval:(double)arg3 ;
-(SBUIPluginController *)pluginController;
-(BOOL)isPluginVisible;
-(void)_pluginDidLoad:(id)arg1 ;
-(void)_pluginWillUnload:(id)arg1 ;
-(BOOL)pluginHandledButtonTapEventFromSource:(int)arg1 ;
-(void)cancelPendingPluginActivationEvent:(int)arg1 ;
-(BOOL)pluginWantsInterfaceOrientation:(long long*)arg1 ;
-(BOOL)pluginSuppressesNotifications;
-(BOOL)pluginWantsScreenDimInterval:(double*)arg1 ;
-(BOOL)pluginSupportedAndEnabled;
-(void)_notePluginVisibilityDidChange;
-(void)dismissPluginForEvent:(int)arg1 ;
-(BOOL)pluginExpectsFaceContact;
-(void)_dismissUIPlugin:(id)arg1 animated:(BOOL)arg2 ;
-(void)uiPlugin:(id)arg1 forceUpdateToInterfaceOrientation:(long long)arg2 animated:(BOOL)arg3 ;
-(id)_authController;
-(void)_removeObserversForPlugin:(id)arg1 ;
-(void)setPluginController:(SBUIPluginController *)arg1 ;
-(void)_noteDeviceLockedOrBlocked;
-(void)_uiLocked:(id)arg1 ;
-(void)_deviceBlocked:(id)arg1 ;
-(void)_remoteLocked:(id)arg1 ;
-(void)_restoreOrientation;
-(BOOL)_uiPluginAttemptDeviceUnlockWithPassword:(id)arg1 ;
-(BOOL)uiPluginExpectsFaceContact:(id)arg1 ;
-(void)_setAuthController:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)handleSuccessfulAuthenticationRequest:(id)arg1 ;
-(void)handleFailedAuthenticationRequest:(id)arg1 error:(id)arg2 ;
-(void)handleInvalidAuthenticationRequest:(id)arg1 ;
-(BOOL)uiPluginWantsActivation:(id)arg1 forEvent:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)uiPlugin:(id)arg1 isNowRunning:(BOOL)arg2 ;
-(void)uiPluginWantsDismissal:(id)arg1 withAnimation:(BOOL)arg2 ;
-(BOOL)uiPlugin:(id)arg1 openURL:(id)arg2 ;
-(void)uiPluginUserEventOccurred:(id)arg1 ;
-(BOOL)uiPlugin:(id)arg1 launchApplicationWithBundleID:(id)arg2 openURL:(id)arg3 ;
-(BOOL)uiPlugin:(id)arg1 launchApplicationWithBundleID:(id)arg2 openURL:(id)arg3 allowDismissal:(BOOL)arg4 ;
-(BOOL)uiPluginAttemptDeviceUnlock:(id)arg1 withPassword:(id)arg2 lockViewOwner:(id)arg3 ;
-(void)uiPlugin:(id)arg1 setExpectsFaceContact:(BOOL)arg2 ;
@end

