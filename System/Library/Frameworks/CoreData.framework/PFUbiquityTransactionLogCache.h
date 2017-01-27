/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSRecursiveLock, PFUbiquityGlobalObjectIDCache;

@interface PFUbiquityTransactionLogCache : NSObject {

	NSString* _localPeerID;
	NSMutableDictionary* _transactionLogCache;
	NSRecursiveLock* _transactionLogCacheLock;
	PFUbiquityGlobalObjectIDCache* _gidCache;

}
-(void)cacheExportedLog:(id)arg1 ;
-(id)initWithLocalPeerID:(id)arg1 andGlobalIDCache:(id)arg2 ;
-(id)retainedCachedLogForLocation:(id)arg1 loadWithRetry:(BOOL)arg2 error:(id*)arg3 ;
-(void)removeLogsCachedForStoreNamed:(id)arg1 withUbiquityRootLocation:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end
