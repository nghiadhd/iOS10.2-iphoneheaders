/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class NSObject, NSError;

@interface SGFuture : NSObject {

	NSObject* _result;
	NSError* _error;
	opaque_pthread_mutex_t _lock;
	NSObject*<OS_dispatch_queue> _callbacks;
	BOOL _isComplete;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,readonly) BOOL isComplete;                                     //@synthesize isComplete=_isComplete - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
+(id)futureForObject:(id)arg1 withKey:(void*)arg2 onCreate:(/*^block*/id)arg3 ;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(BOOL)isComplete;
-(void)wait:(/*^block*/id)arg1 ;
-(BOOL)succeed:(id)arg1 ;
-(BOOL)fail:(id)arg1 ;
-(BOOL)_finishWithResult:(id)arg1 orError:(id)arg2 ;
-(id)wait;
@end

