/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/LDAPSettings.bundle/LDAPSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACUIAccountViewsProviderProtocol <NSObject>
@optional
-(Class)controllerClassForCreatingAccountWithType:(id)arg1;

@required
-(Class)viewControllerClassForCreatingAccountWithType:(id)arg1;
-(id)configurationInfoForCreatingAccountWithType:(id)arg1;
-(Class)viewControllerClassForViewingAccount:(id)arg1;
-(id)configurationInfoForViewingAccount:(id)arg1;
-(id)supportedAccountTypeIdentifiers;

@end

