/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, FCOperationCancelingFCOperationPrioritizing;
@class NSObject, FCMutexLock;

@interface FCAsyncOnceOperation : NSObject {

	BOOL _finished;
	BOOL _succeeded;
	/*^block*/id _workBlock;
	unsigned long long _interest;
	NSObject*<OS_dispatch_group> _activeGroup;
	id<FCOperationCanceling><FCOperationPrioritizing> _activeOperation;
	long long _relativePriority;
	FCMutexLock* _lock;

}

@property (nonatomic,copy) id workBlock;                                                                     //@synthesize workBlock=_workBlock - In the implementation block
@property (assign,nonatomic) BOOL finished;                                                                  //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) BOOL succeeded;                                                                 //@synthesize succeeded=_succeeded - In the implementation block
@property (assign,nonatomic) unsigned long long interest;                                                    //@synthesize interest=_interest - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> activeGroup;                                       //@synthesize activeGroup=_activeGroup - In the implementation block
@property (nonatomic,retain) id<FCOperationCanceling><FCOperationPrioritizing> activeOperation;              //@synthesize activeOperation=_activeOperation - In the implementation block
@property (assign,nonatomic) long long relativePriority;                                                     //@synthesize relativePriority=_relativePriority - In the implementation block
@property (nonatomic,retain) FCMutexLock * lock;                                                             //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) BOOL finishedExecuting; 
@property (nonatomic,readonly) BOOL finishedExecutingWithFailure; 
-(FCMutexLock *)lock;
-(void)setFinished:(BOOL)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(BOOL)finished;
-(void)setLock:(FCMutexLock *)arg1 ;
-(long long)relativePriority;
-(void)setRelativePriority:(long long)arg1 ;
-(unsigned long long)interest;
-(NSObject*<OS_dispatch_group>)activeGroup;
-(id<FCOperationCanceling><FCOperationPrioritizing>)activeOperation;
-(void)setActiveGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(id)workBlock;
-(void)setSucceeded:(BOOL)arg1 ;
-(void)setInterest:(unsigned long long)arg1 ;
-(void)setActiveOperation:(id<FCOperationCanceling><FCOperationPrioritizing>)arg1 ;
-(void)setWorkBlock:(id)arg1 ;
-(BOOL)succeeded;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(id)executeWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)finishedExecuting;
-(BOOL)finishedExecutingWithFailure;
@end
