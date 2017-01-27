/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/CCUIControlCenterSystemAgent.h>

@class NSString;

@interface SBControlCenterSystemAgent : NSObject <CCUIControlCenterSystemAgent>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isUILocked;
-(BOOL)handsetRouteIsSelected;
-(BOOL)wirelessDisplayRouteIsPicked;
-(id)nameOfPickedRoute;
-(BOOL)isOrientationLocked;
-(BOOL)isRingerMuted;
-(BOOL)isInAirplaneMode;
-(void)dismissAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)materialSettings;
-(id)prototypeSettings;
-(void)unlockOrientation;
-(void)lockOrientation;
-(void)activateAppWithDisplayID:(id)arg1 url:(id)arg2 unlockIfNecessary:(BOOL)arg3 ;
-(id)frontmostApplicationDisplayID;
-(void)setRingerMuted:(BOOL)arg1 ;
-(id)getFGSceneIdentifiers;
-(void)updateWifiDevicePresence;
-(void)setWifiPowered:(BOOL)arg1 ;
-(BOOL)wifiDevicePresent;
-(BOOL)wifiIsPowered;
-(id)hideStatusBarAssertion;
-(void)activateAppWithDisplayID:(id)arg1 url:(id)arg2 ;
-(void)promptForUnlockIfNecessary:(/*^block*/id)arg1 ;
@end

