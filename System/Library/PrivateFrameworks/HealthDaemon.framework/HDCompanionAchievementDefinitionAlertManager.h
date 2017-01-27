/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDAchievementDefinitionAlertManager.h>

@interface HDCompanionAchievementDefinitionAlertManager : HDAchievementDefinitionAlertManager
+(BOOL)isDefinitionIdentifierAvailableOnWatch:(id)arg1 withProfile:(id)arg2 error:(id*)arg3 ;
+(id)_findNextDefinitionToScheduleAmongDefinitions:(id)arg1 withCurrentDate:(id)arg2 getTaskDate:(id*)arg3 ;
+(id)_findDefinitionsToAlertWithProfile:(id)arg1 currentDate:(id)arg2 amongDefinitions:(id)arg3 getExpiredDefinitions:(id*)arg4 ;
+(id)_definitionIdentifiersInAlertedState:(unsigned long long)arg1 amongDefinitions:(id)arg2 withProfile:(id)arg3 error:(id*)arg4 ;
+(id)_availableDefinitionIdentifiersWithProfile:(id)arg1 error:(id*)arg2 ;
+(BOOL)_resetAlertedStatesWithProfile:(id)arg1 error:(id*)arg2 ;
+(BOOL)_resetAvailabilityStatesWithProfile:(id)arg1 error:(id*)arg2 ;
+(BOOL)_markDefinitionIdentifiers:(id)arg1 asAvailable:(BOOL)arg2 withProfile:(id)arg3 error:(id*)arg4 ;
+(BOOL)_markDefinitionIdentifiers:(id)arg1 asAlertedState:(unsigned long long)arg2 withProfile:(id)arg3 error:(id*)arg4 ;
+(BOOL)_needsUpdateForUserDefaultKey:(id)arg1 ;
-(void)_beginObservingDefinitionAvailabilityFactors;
@end

