/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol FLFollowUpControllerDelegate;
@class NSString, NSXPCConnection, NSLock, NSXPCListener;

@interface FLFollowUpController : NSObject <NSXPCListenerDelegate> {

	NSString* _clientIdentifier;
	NSString* _machServiceName;
	NSXPCConnection* _conn;
	NSLock* _connLock;
	NSXPCListener* _listener;
	id<FLFollowUpControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FLFollowUpControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<FLFollowUpControllerDelegate>)arg1 ;
-(id<FLFollowUpControllerDelegate>)delegate;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)countOfPendingFollowUpItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)_postHSA2LoginNotification:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_postHSA2PasswordChangeForAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_postHSA2LoginCode:(id)arg1 withNotification:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_tearDownHSA2LoginNotificationWithPushMessageID:(id)arg1 ;
-(void)_postHSA2PasswordResetNotification:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didActivateHSA2LoginNotification:(id)arg1 ;
-(void)postFollowUpItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearPendingFollowUpItemsWithUniqueIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)pendingFollowUpItemsWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 machServiceName:(id)arg2 delegate:(id)arg3 ;
-(void)clearPendingFollowUpItemsWithCompletion:(/*^block*/id)arg1 ;
@end

