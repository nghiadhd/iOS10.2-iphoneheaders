/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FMScheduler : NSObject
+(id)schedulerWithDispatchQueue:(id)arg1 ;
+(id)serialDispatchQueueSchedulerWithName:(id)arg1 ;
+(id)operationQueueSchedulerWithMaxConcurrentOperationCount:(long long)arg1 ;
+(id)mainThreadScheduler;
+(id)globalAsyncScheduler;
+(id)immediateScheduler;
@end

