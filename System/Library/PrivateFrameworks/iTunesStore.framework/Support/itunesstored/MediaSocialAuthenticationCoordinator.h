/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MediaSocialAuthenticationDelegate, OS_dispatch_queue;
@class NSObject, ISOperationQueue, NSMutableArray;

@interface MediaSocialAuthenticationCoordinator : NSObject {

	id<MediaSocialAuthenticationDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	ISOperationQueue* _operationQueue;
	NSMutableArray* _pendingResponses;

}

@property (assign,nonatomic,__weak) id<MediaSocialAuthenticationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
-(void)authenticateForUploadWithIdentifier:(long long)arg1 accountIdentifier:(id)arg2 ;
-(id)_enqueueOperationIfNecessaryWithAccountIdentifier:(id)arg1 ;
-(id)_newAuthenticateOperationWithAccountIdentifier:(id)arg1 ;
-(void)_finishResponse:(id)arg1 ;
-(void)authenticateForPostWithIdentifier:(long long)arg1 accountIdentifier:(id)arg2 ;
-(void)setDelegate:(id<MediaSocialAuthenticationDelegate>)arg1 ;
-(id<MediaSocialAuthenticationDelegate>)delegate;
-(BOOL)isFinished;
-(id)initWithDispatchQueue:(id)arg1 ;
@end

