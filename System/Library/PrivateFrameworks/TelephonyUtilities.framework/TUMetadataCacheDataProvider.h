/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface TUMetadataCacheDataProvider : NSObject {

	NSObject*<OS_dispatch_queue> _synchronizationQueue;
	NSMutableDictionary* _providerCache;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> synchronizationQueue;              //@synthesize synchronizationQueue=_synchronizationQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * providerCache;                          //@synthesize providerCache=_providerCache - In the implementation block
-(id)init;
-(id)description;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isEmpty;
-(void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2 ;
-(id)metadataForDestinationID:(id)arg1 ;
-(NSMutableDictionary *)providerCache;
-(void)removeMetadataForKey:(id)arg1 ;
-(void)setSynchronizationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)synchronizationQueue;
@end

