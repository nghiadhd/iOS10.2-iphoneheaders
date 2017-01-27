/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBSystemServiceFacility.h>
#import <libobjc.A.dylib/FBApplicationDataStoreRepositoryServerClientDelegate.h>

@protocol FBApplicationDataStoreRepository;
@interface FBApplicationDataStoreRepositoryServer : FBSystemServiceFacility <FBApplicationDataStoreRepositoryServerClientDelegate> {

	id<FBApplicationDataStoreRepository> _dataStore;

}

@property (nonatomic,retain) id<FBApplicationDataStoreRepository> dataStore;              //@synthesize dataStore=_dataStore - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 clientAuthenticator:(id)arg3 ;
-(void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2 ;
-(void)noteClientDidDisconnect:(id)arg1 ;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
-(id)prerequisiteMilestones;
-(void)applicationDataStoreRepositoryClient:(id)arg1 valueChangedForObject:(id)arg2 key:(id)arg3 bundleID:(id)arg4 ;
-(void)applicationDataStoreRespositoryClient:(id)arg1 repositoryInvalidatedForBundleID:(id)arg2 ;
-(void)_handleSetPrefetchedKeys:(id)arg1 client:(id)arg2 ;
-(void)_handleSetChangesInterest:(id)arg1 client:(id)arg2 ;
-(void)_handleSynchronize:(id)arg1 ;
-(void)_handleGetAvailableDataStores:(id)arg1 ;
-(void)_handleGetObjectForKey:(id)arg1 ;
-(void)_handleSetObjectForKey:(id)arg1 client:(id)arg2 ;
-(void)_handleRemoveObjectForKey:(id)arg1 client:(id)arg2 ;
-(void)_handleRemoveAllObjects:(id)arg1 ;
-(Class)classForClient:(id)arg1 ;
-(void)setDataStore:(id<FBApplicationDataStoreRepository>)arg1 ;
-(id<FBApplicationDataStoreRepository>)dataStore;
@end

