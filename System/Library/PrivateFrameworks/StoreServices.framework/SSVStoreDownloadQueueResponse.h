/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:34:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableOrderedSet, NSError, NSDictionary, NSData, NSArray, NSNumber, NSString, NSOrderedSet;

@interface SSVStoreDownloadQueueResponse : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableOrderedSet* _downloads;
	NSError* _error;
	NSDictionary* _itemErrors;
	NSData* _keybag;
	NSArray* _rangesToLoad;
	BOOL _shouldCancelPurchaseBatch;
	BOOL _triggeredQueueCheck;
	NSNumber* _userIdentifier;
	NSString* _storeCorrelationID;
	NSString* _clientIdentifier;

}

@property (readonly) NSOrderedSet * downloads; 
@property (assign) NSString * storeCorrelationID;               //@synthesize storeCorrelationID=_storeCorrelationID - In the implementation block
@property (retain) NSError * error; 
@property (readonly) NSData * keybag; 
@property (readonly) NSArray * rangesToLoad; 
@property (assign) BOOL shouldCancelPurchaseBatch; 
@property (assign) BOOL triggeredQueueCheck; 
@property (readonly) NSNumber * userIdentifier; 
@property (assign) NSString * clientIdentifier;                 //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
-(NSString *)storeCorrelationID;
-(id)_initStoreDownloadQueueResponse;
-(id)initWithDictionary:(id)arg1 userIdentifier:(id)arg2 preferredAssetFlavor:(id)arg3 ;
-(id)_errorWithFailureType:(id)arg1 customerMessage:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 userIdentifier:(id)arg2 ;
-(id)initWithError:(id)arg1 userIdentifier:(id)arg2 ;
-(id)errorForItemIdentifier:(id)arg1 ;
-(NSData *)keybag;
-(NSArray *)rangesToLoad;
-(void)setShouldCancelPurchaseBatch:(BOOL)arg1 ;
-(void)setTriggeredQueueCheck:(BOOL)arg1 ;
-(BOOL)shouldCancelPurchaseBatch;
-(BOOL)triggeredQueueCheck;
-(void)setStoreCorrelationID:(NSString *)arg1 ;
-(id)init;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(NSOrderedSet *)downloads;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSNumber *)userIdentifier;
@end

