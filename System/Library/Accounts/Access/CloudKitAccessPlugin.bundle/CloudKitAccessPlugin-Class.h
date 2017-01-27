/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Accounts/Access/CloudKitAccessPlugin.bundle/CloudKitAccessPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitAccessPlugin/ACDAccountAccessPlugin.h>

@class ACAccountStore, NSString;

@interface CloudKitAccessPlugin : NSObject <ACDAccountAccessPlugin> {

	ACAccountStore* _store;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsAccountTypeWithIdentifier:(id)arg1 ;
-(id)_ckAccountInStore:(id)arg1 ;
-(id)_accountOfType:(id)arg1 withStore:(id)arg2 ;
-(void)handleAccessRequestToAccountsOfType:(id)arg1 forClient:(id)arg2 withOptions:(id)arg3 store:(id)arg4 allowUserInteraction:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)revokeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)authorizeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)revokeAllAccessToAccountsOfType:(id)arg1 store:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

