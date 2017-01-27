/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, SSMutableAuthenticationContext;

@interface SUScriptAuthenticationOperation : ISOperation {

	NSNumber* _authenticatedDSID;
	SSMutableAuthenticationContext* _authenticationContext;

}

@property (retain) NSNumber * authenticatedDSID;              //@synthesize authenticatedDSID=_authenticatedDSID - In the implementation block
-(id)init;
-(void)dealloc;
-(void)run;
-(id)authenticatedAccountDSID;
-(void)setScriptOptions:(id)arg1 ;
-(void)sendCompletionCallback:(id)arg1 ;
-(NSNumber *)authenticatedDSID;
-(void)setAuthenticatedDSID:(NSNumber *)arg1 ;
-(id)initWithAccountIdentifier:(id)arg1 ;
@end

