/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDActivityCacheManagerObserver <NSObject>
@optional
-(void)activityCacheManager:(id)arg1 changedYesterdayActivityCache:(id)arg2 updatedFields:(unsigned long long)arg3 error:(id)arg4;

@required
-(void)activityCacheManager:(id)arg1 changedTodayActivityCache:(id)arg2 currentStatisticsBuilder:(id)arg3 updatedFields:(unsigned long long)arg4 error:(id)arg5;

@end

