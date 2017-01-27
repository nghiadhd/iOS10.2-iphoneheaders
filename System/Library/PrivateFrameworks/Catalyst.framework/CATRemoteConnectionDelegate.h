/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CATRemoteConnectionDelegate <NSObject>
@optional
-(void)connection:(id)arg1 didReceiveData:(id)arg2;
-(void)connectionDidClose:(id)arg1;
-(void)connection:(id)arg1 didSecureUsingClientIdentity:(SecIdentityRef)arg2 trustedCertificates:(id)arg3;
-(void)connection:(id)arg1 didFailToSecureUsingClientIdentity:(SecIdentityRef)arg2 trustedCertificates:(id)arg3;
-(void)connection:(id)arg1 didSecureUsingServerIdentity:(SecIdentityRef)arg2 trustedCertificates:(id)arg3;
-(void)connection:(id)arg1 didFailToSecureUsingServerIdentity:(SecIdentityRef)arg2 trustedCertificates:(id)arg3;
-(void)connection:(id)arg1 didSendData:(id)arg2 userInfo:(id)arg3;
-(void)connection:(id)arg1 didFailToSendData:(id)arg2 userInfo:(id)arg3 error:(id)arg4;
-(void)connectionDidOpen:(id)arg1;
-(void)connection:(id)arg1 didInterruptWithError:(id)arg2;

@end

