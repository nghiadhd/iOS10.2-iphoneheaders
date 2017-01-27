/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthEntity.h>

@interface HDWorkoutEventEntity : HDHealthEntity
+(id)columnsDefinition;
+(id)databaseTable;
+(long long)protectionClass;
+(BOOL)insertWorkoutEventsFromWorkout:(id)arg1 workoutPersistentID:(id)arg2 database:(id)arg3 error:(id*)arg4 ;
+(id)deleteStatementForWorkoutEventsWithDatabase:(id)arg1 ;
+(id)statementForEnumeratingEventsForWorkoutInDatabase:(id)arg1 error:(id*)arg2 ;
+(BOOL)enumerateEventsForWorkout:(long long)arg1 withStatement:(id)arg2 error:(id*)arg3 eventHandler:(/*^block*/id)arg4 ;
+(id)workoutEventsWithWorkoutID:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)insertWorkoutEventWithWorkoutID:(id)arg1 date:(id)arg2 eventType:(long long)arg3 metadata:(id)arg4 database:(id)arg5 error:(id*)arg6 ;
@end

