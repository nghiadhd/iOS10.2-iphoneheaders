/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSUSharedResourceControllerDelegate, OS_dispatch_group;
#import <TSUtility/TSUtility-Structs.h>
@class NSString, NSCondition, NSObject;

@interface TSUSharedResourceController : NSObject {

	int _acquirerCount;
	id<TSUSharedResourceControllerDelegate> _delegate;
	NSString* _resourceForThreadKey;
	NSString* _hasResourceForThreadKey;
	NSCondition* _resourceLock;
	id _resource;
	struct {
		unsigned canWaitOnMainThread : 1;
		unsigned acquiresResourceAsynchronously : 1;
		unsigned hasResource : 1;
	}  _flags;
	int _threadsAcquiringResourceCount;
	NSCondition* _waitLock;
	int _waitCount;
	NSObject*<OS_dispatch_group> _accessInProgressGroup;
	NSObject*<OS_dispatch_group> _willEndAccessGroup;
	NSString* _UUID;

}

@property (nonatomic,readonly) NSString * UUID;                     //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) BOOL canWaitOnMainThread; 
-(void)didBeginAccessToResource:(id)arg1 isFromThreadWaitingToAcquireResource:(BOOL)arg2 ;
-(void)willEndAccessToResourceForcingToWaitForPendingAccesses:(BOOL)arg1 ;
-(void)wakeUpAllThreadsWaitingForResourceWithLock;
-(BOOL)performSynchronousAccessIfResourceIsAvailable:(BOOL)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)acquireResourceWithLockAndPerformSynchronousAccessUsingBlock:(/*^block*/id)arg1 ;
-(void)waitForResourceWithLockAndPerformSynchronousAccessUsingBlock:(/*^block*/id)arg1 ;
-(void)willEndAccessToResource;
-(id)initWithName:(id)arg1 delegate:(id)arg2 ;
-(BOOL)canWaitOnMainThread;
-(void)setCanWaitOnMainThread:(BOOL)arg1 ;
-(void)didBeginAccessToResource:(id)arg1 ;
-(void)performSynchronousAccessUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)performSynchronousAccessIfResourceIsAvailableUsingBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)UUID;
@end

