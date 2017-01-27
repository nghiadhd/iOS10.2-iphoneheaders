/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSURLBag.h>

@class ISURLBag, NSMutableArray, ISLoadURLBagOperation;

@interface SKUIURLBag : SSURLBag {

	ISURLBag* _bag;
	NSMutableArray* _completionBlocks;
	BOOL _forceInvalidationForNextLoad;
	ISLoadURLBagOperation* _operation;

}
+(id)URLBagForContext:(id)arg1 ;
+(id)bagQueue;
-(void)invalidate;
-(void)loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)valueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValueForKey:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)existingBagDictionary;
-(void)_enqueueOperationWithContext:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)storeFrontIdentifier;
-(void)_finishOperationWithURLBag:(id)arg1 error:(id)arg2 ;
-(void)getTrustForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

