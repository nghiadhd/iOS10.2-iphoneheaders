/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HDAchievementDeduplicator : NSObject
+(void)findDuplicatesInAddedAchievements:(id)arg1 existingAchievements:(id)arg2 foundDuplicatesInAdded:(id*)arg3 duplicatesInExisting:(id*)arg4 ;
+(unsigned long long)_pickWinningAchievementWithAdded:(id)arg1 existing:(id)arg2 strategy:(unsigned long long)arg3 ;
+(id)findAchievementsInSet:(id)arg1 missingFromSet:(id)arg2 inCalendar:(id)arg3 ;
@end

