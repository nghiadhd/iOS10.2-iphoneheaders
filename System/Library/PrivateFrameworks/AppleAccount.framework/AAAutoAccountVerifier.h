/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSSearchDelegate.h>

@class NSOperationQueue, ACAccount, MSSearch, NSString;

@interface AAAutoAccountVerifier : NSObject <MSSearchDelegate> {

	NSOperationQueue* _requesterQueue;
	ACAccount* _account;
	/*^block*/id _handler;
	int _attempts;
	BOOL _canceled;
	MSSearch* _search;

}

@property (nonatomic,retain) ACAccount * account;                   //@synthesize account=_account - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)cancel;
-(void)_resendVerificationEmailForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_verify;
-(void)_validateToken:(id)arg1 ;
-(BOOL)search:(id)arg1 didFindResults:(id)arg2 ;
-(void)search:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)sendVerificationEmail;
-(void)verifyWithHandler:(/*^block*/id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
@end

