/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASDJobManager <NSObject>
@required
-(void)resumeJobsWithIDs:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)pauseJobsWithIDs:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)cancelJobsWithIDs:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)finishJobsWithIDs:(id)arg1 replyBlock:(/*^block*/id)arg2;
-(void)getJobsUsingReplyBlock:(/*^block*/id)arg1;
-(void)getJobsWithIDs:(id)arg1 usingReplyBlock:(/*^block*/id)arg2;
-(void)registerJobManagerWithOptions:(id)arg1 replyBlock:(/*^block*/id)arg2;

@end

