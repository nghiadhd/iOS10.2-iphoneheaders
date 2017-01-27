/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CertUI/CertUI-Structs.h>
@class NSString;

@interface CertUITrustManager : NSObject {

	NSString* _access;

}
+(void)_migrateVersionZeroFromAccessGroup:(id)arg1 toGroup:(id)arg2 ;
+(void)migrateFromVersionZero;
+(void)migrateFromVersionOne;
+(id)defaultTrustManager;
-(id)init;
-(id)_getExceptionsForSSLTrust:(SecTrustRef)arg1 hostname:(id)arg2 service:(id)arg3 ;
-(int)_actionForTrust:(SecTrustRef)arg1 exceptions:(id)arg2 ;
-(unsigned)_rawTrustResultForTrust:(SecTrustRef)arg1 exceptions:(id)arg2 ;
-(void)addSSLTrust:(SecTrustRef)arg1 hostname:(id)arg2 service:(id)arg3 ;
-(void)removeSSLTrust:(SecTrustRef)arg1 hostname:(id)arg2 service:(id)arg3 ;
-(void)removeAllTrusts;
-(void)clearSavedTrustSettingsForTrust:(SecTrustRef)arg1 host:(id)arg2 service:(id)arg3 ;
-(int)actionForTrust:(SecTrustRef)arg1 forHost:(id)arg2 andService:(id)arg3 ;
-(int)actionForSMIMETrust:(SecTrustRef)arg1 sender:(id)arg2 ;
-(id)initWithAccessGroup:(id)arg1 ;
-(void)addSMIMETrust:(SecTrustRef)arg1 sender:(id)arg2 ;
-(void)removeSMIMETrust:(SecTrustRef)arg1 sender:(id)arg2 ;
-(BOOL)_hasExceptionsForSMIMETrust:(SecTrustRef)arg1 sender:(id)arg2 ;
-(unsigned)rawTrustResultForSSLTrust:(SecTrustRef)arg1 hostname:(id)arg2 service:(id)arg3 ;
-(void)allowTrust:(SecTrustRef)arg1 forHost:(id)arg2 service:(id)arg3 ;
-(int)actionForSSLTrust:(SecTrustRef)arg1 hostname:(id)arg2 service:(id)arg3 ;
@end

