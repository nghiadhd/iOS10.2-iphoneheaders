/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FileProvider.framework/Support/fileproviderd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <fileproviderd/FPAccessControl.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface FPAccessControlStore : NSObject <FPAccessControl> {

	NSMutableDictionary* _syncQueueAccessControlDict;
	NSObject*<OS_dispatch_queue> _syncQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;              //@synthesize syncQueue=_syncQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedStore;
-(void)syncQueueReadAccessControl;
-(void)syncQueueCommitAccessControl;
-(BOOL)isProviderWithIdentifier:(id)arg1 allowedToProvideItemID:(id)arg2 toConsumerWithIdentifier:(id)arg3 ;
-(void)allowProviderWithIdentifier:(id)arg1 toProvideItemID:(id)arg2 toConsumerWithIdentifier:(id)arg3 ;
-(void)disallowProviderWithIdentifier:(id)arg1 fromProvidingItemWithID:(id)arg2 toConsumerWithIdentifier:(id)arg3 ;
-(void)rereadAccessControl;
-(BOOL)isProviderIdentifier:(id)arg1 allowedToProvideItemID:(id)arg2 toConsumerWithIdentifier:(id)arg3 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

