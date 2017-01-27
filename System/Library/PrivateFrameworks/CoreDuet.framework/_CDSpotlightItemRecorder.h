/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SpotlightReceiver.h>
#import <libobjc.A.dylib/CSSearchableIndexObserver.h>

@protocol OS_dispatch_source, OS_dispatch_queue, _DKKnowledgeSaving_DKKnowledgeDeleting_DKKnowledgeQuerying_DKKnowledgeEventStreamDeleting, _CDInteractionRecording_CDInteractionDeleting;
@class NSObject, NSMutableArray, NSMutableDictionary, NSString;

@interface _CDSpotlightItemRecorder : NSObject <SpotlightReceiver, CSSearchableIndexObserver> {

	NSObject*<OS_dispatch_source> _batchExecutionSource;
	NSObject*<OS_dispatch_queue> _batchExecutionSourceQueue;
	NSObject*<OS_dispatch_queue> _pendingOperationsQueue;
	NSMutableArray* _pendingOperations;
	NSObject*<OS_dispatch_queue> _activityRateLimiterQueue;
	NSMutableDictionary* _activityPerBundleRateLimit;
	id<_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying><_DKKnowledgeEventStreamDeleting> _knowledgeStore;
	NSObject*<OS_dispatch_queue> _knowledgeStoreDeletionQueue;
	id<_CDInteractionRecording><_CDInteractionDeleting> _recorder;

}

@property (nonatomic,retain) id<_CDInteractionRecording><_CDInteractionDeleting> recorder;              //@synthesize recorder=_recorder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)spotlightItemRecorderWithInteractionRecorder:(id)arg1 ;
+(void)recordAggdReceiverAction:(long long)arg1 bundleID:(id)arg2 count:(unsigned long long)arg3 ;
+(id)spotlightItemRecorder;
-(id)initWithInteractionRecorder:(id)arg1 ;
-(id)initWithInteractionRecorder:(id)arg1 knowledgeSaving:(id)arg2 ;
-(void)runOperation:(id)arg1 ;
-(id)supportedUTIs;
-(void)addOrUpdateCoreDuetInteractions:(id)arg1 bundleID:(id)arg2 ;
-(void)deleteKnowledgeEventsWithBundleID:(id)arg1 ;
-(void)deleteSearchableItemsSinceDate:(id)arg1 bundleID:(id)arg2 ;
-(void)addUserAction:(id)arg1 withItem:(id)arg2 ;
-(void)addOrUpdateSearchableItems:(id)arg1 ;
-(void)registerSpotlightRecorderWithServiceName:(id)arg1 ;
-(void)setRecorder:(id<_CDInteractionRecording><_CDInteractionDeleting>)arg1 ;
-(id<_CDInteractionRecording><_CDInteractionDeleting>)recorder;
-(void)addOrUpdateSearchableItems:(id)arg1 bundleID:(id)arg2 ;
-(void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 ;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2 ;
-(void)deleteAllSearchableItemsWithBundleID:(id)arg1 ;
-(id)supportedContentTypes;
-(id)supportedINIntentClassNames;
-(void)addInteractions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 ;
-(void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 ;
-(void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 ;
-(void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 ;
@end

