/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Accounts/Authentication/KerberosAuthenticationPlugin.bundle/KerberosAuthenticationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACDAccountAuthenticationPlugin.h>

@class NSString;

@interface KerberosAuthenticationPlugin : NSObject <ACDAccountAuthenticationPlugin>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_promptForPasswordAndAuthenticateAccount:(id)arg1 authAttemptsRemaining:(unsigned)arg2 client:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_useCertificate:(id)arg1 toAuthenticateAccount:(id)arg2 client:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)_authenticateAccount:(id)arg1 password:(id)arg2 certificate:(id)arg3 client:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_presentAuthenticationDialogForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 reason:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

