/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <profiled/MCNewCertificatePayloadHandler.h>

@interface MCNewWAPIIdentityCertificatePayloadHandler : MCNewCertificatePayloadHandler
-(BOOL)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)unsetAside;
-(void)setAside;
-(id)_cannotStoreCertificateError;
-(id)_malformedCertificateError;
-(id)_cannotStorePEMDataError;
-(BOOL)_storePEMDataInKeychain:(id)arg1 UUID:(id)arg2 outError:(id*)arg3 ;
-(void)remove;
@end

