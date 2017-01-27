/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKKnowledgeQuerying, OS_dispatch_queue;
@class NSObject;

@interface RTDKKnowledgeStore : NSObject {

	id<_DKKnowledgeQuerying> _knowledgeStore;
	NSObject*<OS_dispatch_queue> _requestQueue;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(id)init;
-(void)reset;
-(void)resume;
-(void)executeQuery:(id)arg1 streamType:(long long)arg2 offset:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
@end

