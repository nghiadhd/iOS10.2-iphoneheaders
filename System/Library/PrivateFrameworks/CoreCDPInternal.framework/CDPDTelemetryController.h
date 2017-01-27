/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CDPDTelemetryController : NSObject
+(id)sharedInstance;
-(void)pcsAlreadyMigrated;
-(void)pcsMigrationSucceeded;
-(void)pcsMigrationFailed;
-(void)pcsRollbackSucceeded;
-(void)pcsRollbackFailed;
-(void)signInSucceededWithIncorrectICSCAttemptCount:(unsigned long long)arg1 didUseRemoteApproval:(BOOL)arg2 ;
-(void)signInFailedDueIncorrectICSCAttempts;
-(void)didChangeLocalSecret;
-(void)didRemoveLocalSecret;
-(void)didLockAccount;
-(void)didUnlockAccount;
-(void)stateMachineStartedFromClient:(unsigned long long)arg1 ;
-(void)signInFailedDueToLockedAccount;
-(void)signInWithUserElectingResetProtectedData;
-(void)signInWithUserSkippingFlow;
-(void)piggybackAttempt;
-(void)piggybackSuccess;
@end

