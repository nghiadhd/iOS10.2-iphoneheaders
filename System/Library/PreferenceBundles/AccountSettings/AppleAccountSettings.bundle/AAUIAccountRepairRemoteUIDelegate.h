/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AAUIAccountRepairRemoteUIDelegate <NSObject>
@optional
-(void)accountRepairRemoteUIWillAppear:(id)arg1;
-(void)accountRepairRemoteUIWillDismiss:(id)arg1;
-(void)accountRepairRemoteUI:(id)arg1 didReceiveObjectModel:(id)arg2;
-(void)accountRepairRemoteUI:(id)arg1 willPresentModalNavigationController:(id)arg2;
-(id)accountRepairRemoteUI:(id)arg1 headersForRequest:(id)arg2;

@required
-(void)accountRepairRemoteUI:(id)arg1 account:(id)arg2 didFinishWithSuccess:(BOOL)arg3;

@end

