/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MSAlertManager;

@interface MSAuthenticationManager : NSObject {

	int _state;
	MSAlertManager* _alertManager;
	int _bagRefetchCount;
	BOOL _isListeningToKeybagChanges;
	int _keybagChangeNotifyToken;

}

@property (assign,nonatomic) BOOL isListeningToKeybagChanges;                            //@synthesize isListeningToKeybagChanges=_isListeningToKeybagChanges - In the implementation block
@property (assign,nonatomic) int keybagChangeNotifyToken;                                //@synthesize keybagChangeNotifyToken=_keybagChangeNotifyToken - In the implementation block
@property (getter=isWaitingForAuth,nonatomic,readonly) BOOL waitingForAuth; 
+(id)sharedManager;
-(void)dealloc;
-(BOOL)isWaitingForAuth;
-(id)initWithAlertManager:(id)arg1 ;
-(BOOL)isListeningToKeybagChanges;
-(int)keybagChangeNotifyToken;
-(void)_didReceiveAccountConfigChangedNotification;
-(void)setIsListeningToKeybagChanges:(BOOL)arg1 ;
-(id)_accountForPersonID:(id)arg1 ;
-(void)waitForDeviceUnlock;
-(void)_promptUserForAuthComplianceForAccount:(id)arg1 personID:(id)arg2 ;
-(void)didEncounterAuthenticationFailureForPersonID:(id)arg1 ;
-(void)didEncounterAuthenticationSuccessForPersonID:(id)arg1 ;
-(void)rearmAuthenticationAlert;
-(void)setKeybagChangeNotifyToken:(int)arg1 ;
@end

