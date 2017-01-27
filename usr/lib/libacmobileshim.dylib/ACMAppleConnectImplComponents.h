/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:36:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACCComponents.h>

@protocol ACMAppleConnectPreferences, ACFKeychainManagerProtocol, ACC2SVControllerProtocol, ACMSystemInfoProtocol, ACMUIControllerProtocol, ACMUIControllerDelegate;
@interface ACMAppleConnectImplComponents : ACCComponents {

	id<ACMAppleConnectPreferences> _preferences;
	id<ACFKeychainManagerProtocol> _keychain;
	id<ACC2SVControllerProtocol> _twoSVController;
	id<ACMSystemInfoProtocol> _systemInfo;
	id<ACMUIControllerProtocol> _uiController;
	id<ACMUIControllerDelegate> _uiControllerDelegate;

}

@property (nonatomic,retain) id<ACMAppleConnectPreferences> preferences;                                   //@synthesize preferences=_preferences - In the implementation block
@property (nonatomic,retain) id<ACC2SVControllerProtocol> twoSVController;                                 //@synthesize twoSVController=_twoSVController - In the implementation block
@property (nonatomic,retain) id<ACMTicketManagerProtocol> ticketManager; 
@property (nonatomic,retain) id<ACMSystemInfoProtocol> systemInfo;                                         //@synthesize systemInfo=_systemInfo - In the implementation block
@property (nonatomic,retain) id<ACMUIControllerProtocol> uiController;                                     //@synthesize uiController=_uiController - In the implementation block
@property (setter=setUIControllerDelegate:) id<ACMUIControllerDelegate> uiControllerDelegate; 
@property (readonly) BOOL uiControllerLoaded; 
+(id)components;
+(id)defaultComponents;
-(void)dealloc;
-(void)setPreferences:(id<ACMAppleConnectPreferences>)arg1 ;
-(id<ACMAppleConnectPreferences>)preferences;
-(id<ACMUIControllerDelegate>)uiControllerDelegate;
-(id)createHandlerWithClass:(Class)arg1 context:(id)arg2 ;
-(id<ACC2SVControllerProtocol>)twoSVController;
-(id<ACMUIControllerProtocol>)uiController;
-(BOOL)uiControllerLoaded;
-(void)unloadUIController;
-(void)setUiController:(id<ACMUIControllerProtocol>)arg1 ;
-(void)setSystemInfo:(id<ACMSystemInfoProtocol>)arg1 ;
-(void)setTwoSVController:(id<ACC2SVControllerProtocol>)arg1 ;
-(void)cleanupOnMemoryWarning;
-(void)setUIControllerDelegate:(id)arg1 ;
-(id)createAuthenticationRequest;
-(id)createTicketVerificationRequest;
-(id<ACMSystemInfoProtocol>)systemInfo;
@end

