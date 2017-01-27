/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class NSOperationQueue, MPModelPerson;

@interface MPStoreFollowOperation : MPAsyncOperation {

	NSOperationQueue* _operationQueue;
	BOOL _unfollow;
	MPModelPerson* _person;
	/*^block*/id _responseHandler;

}

@property (assign,nonatomic) BOOL unfollow;                       //@synthesize unfollow=_unfollow - In the implementation block
@property (nonatomic,retain) MPModelPerson * person;              //@synthesize person=_person - In the implementation block
@property (nonatomic,copy) id responseHandler;                    //@synthesize responseHandler=_responseHandler - In the implementation block
+(id)activeDSID;
-(void)setPerson:(MPModelPerson *)arg1 ;
-(MPModelPerson *)person;
-(void)setUnfollow:(BOOL)arg1 ;
-(id)_followURL:(id)arg1 accountDSID:(id)arg2 ;
-(void)_enqueueOperationWithURL:(id)arg1 bagDictionary:(id)arg2 ;
-(BOOL)unfollow;
-(void)_finishWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(void)execute;
@end

