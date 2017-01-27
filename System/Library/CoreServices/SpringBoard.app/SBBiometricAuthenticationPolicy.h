/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIBiometricAuthenticationPolicy.h>

@protocol SBFLockOutStatusProvider;
@class NSString;

@interface SBBiometricAuthenticationPolicy : NSObject <SBUIBiometricAuthenticationPolicy> {

	id<SBFLockOutStatusProvider> _lockOutStatusProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLockOutProvider:(id)arg1 ;
-(BOOL)shouldRelockAfterBioUnlock;
@end

