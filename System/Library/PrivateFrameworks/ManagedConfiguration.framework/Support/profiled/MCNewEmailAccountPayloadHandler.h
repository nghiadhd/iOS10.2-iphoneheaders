/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <profiled/MCNewPayloadHandler.h>

@class NSConditionLock, NSThread, NSDictionary, MailAccount, DeliveryAccount, NSError;

@interface MCNewEmailAccountPayloadHandler : MCNewPayloadHandler {

	NSConditionLock* _validationLock;
	NSThread* _validationThread;
	NSDictionary* _setAsideAccountInfo;
	BOOL _wasInstalledByMDM;
	MailAccount* _incomingAccount;
	BOOL _incomingAccountUsesSSL;
	DeliveryAccount* _outgoingAccount;
	BOOL _outgoingAccountUsesSSL;
	BOOL _validationDone;
	BOOL _validationResult;
	NSError* _validationError;

}
+(id)unhashedAccountIdentifierWithType:(id)arg1 hostname:(id)arg2 username:(id)arg3 ;
+(id)MCACAccountIdentifierWithIncomingAccountInfo:(id)arg1 ;
+(id)MCACAccountIdentifierWithOutgoingAccountInfo:(id)arg1 ;
-(id)initWithPayload:(id)arg1 profileHandler:(id)arg2 ;
-(BOOL)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)unsetAside;
-(void)setAside;
-(id)userInputFields;
-(BOOL)preflightUserInputResponses:(id)arg1 outError:(id*)arg2 ;
-(void)_remove;
-(id)_persistentIDForCertificateUUID:(id)arg1 notFoundLocErrorString:(id)arg2 badLocErrorString:(id)arg3 outError:(id*)arg4 ;
-(id)_errorFromValidationError:(id)arg1 ;
-(id)_incomingAccountInfoDictionaryWithUserInput:(id)arg1 isPreflight:(BOOL)arg2 outError:(id*)arg3 ;
-(id)_outgoingAccountInfoDictionaryWithUserInput:(id)arg1 ;
-(id)_incomingAccountWithAccountInfo:(id)arg1 ;
-(id)_outgoingAccountWithAccountInfo:(id)arg1 ;
-(void)_validateIncomingAccountOnThread;
-(id)_installWithIncomingAccountInfo:(id)arg1 outgoingAccountInfo:(id)arg2 isInstalledByMDM:(BOOL)arg3 ;
-(id)_removeAccountWithPersistentResourceID:(id)arg1 fromArray:(id)arg2 outArray:(id*)arg3 ;
-(void)remove;
-(BOOL)isInstalled;
-(void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(BOOL)arg3 ;
-(id)_authSchemeForAuthenticationMethod:(id)arg1 ;
@end

