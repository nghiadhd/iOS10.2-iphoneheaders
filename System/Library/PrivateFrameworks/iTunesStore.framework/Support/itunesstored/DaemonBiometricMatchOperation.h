/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <itunesstored/SpringBoardAlertProxyDelegate.h>
#import <itunesstored/BiometricKitDelegate.h>

@protocol OS_dispatch_semaphore;
@class SpringBoardAlertProxy, NSObject, SSDialog, DaemonBiometricMatch, NSString;

@interface DaemonBiometricMatchOperation : ISOperation <SpringBoardAlertProxyDelegate, BiometricKitDelegate> {

	SpringBoardAlertProxy* _alertProxy;
	NSObject*<OS_dispatch_semaphore> _alertSemaphore;
	SSDialog* _dialog;
	DaemonBiometricMatch* _match;
	/*^block*/id _matchBlock;
	long long _reason;

}

@property (copy) id matchBlock; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)alertProxy:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)alertProxyDidCancel:(id)arg1 ;
-(id)initWithReason:(long long)arg1 accountName:(id)arg2 ;
-(void)setMatchBlock:(id)arg1 ;
-(void)_setMatchWithType:(long long)arg1 ;
-(void)_presentDialog;
-(void)_fireMatchBlock;
-(void)_cancelDialog;
-(void)_reloadDisplayedDialog;
-(void)_endAlertWithButtonIndex:(long long)arg1 ;
-(void)dealloc;
-(void)run;
-(id)initWithReason:(long long)arg1 ;
-(void)matchResult:(id)arg1 ;
-(id)matchBlock;
@end

