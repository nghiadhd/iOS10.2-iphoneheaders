/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/SSAuthenticateRequestDelegate.h>

@class NSNumber, SSMutableAuthenticationContext, SSAuthenticationContext, NSString;

@interface ISStoreAuthenticateOperation : ISOperation <SSAuthenticateRequestDelegate> {

	NSNumber* _authenticatedDSID;
	SSMutableAuthenticationContext* _authenticationContext;

}

@property (readonly) SSAuthenticationContext * authenticationContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)run;
-(id)_authenticatedDSID;
-(void)_handleAuthenticateResponse:(id)arg1 ;
-(void)_setAuthenticatedDSID:(id)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(id)authenticatedAccountDSID;
-(id)initWithAuthenticationContext:(id)arg1 ;
-(id)uniqueKey;
@end

