/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDKeyValueEntity.h>

@interface HDProtectedKeyValueEntity : HDKeyValueEntity
+(id)databaseTable;
+(long long)protectionClass;
+(id)userCharacteristicForType:(id)arg1 profile:(id)arg2 entity:(id*)arg3 error:(id*)arg4 ;
+(BOOL)setUserCharacteristic:(id)arg1 forType:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(long long)_deviceLocalCategory;
+(BOOL)setAchievementValuesWithDictionary:(id)arg1 category:(long long)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)setUserDefaultValue:(id)arg1 forKey:(id)arg2 bundleIdentifier:(id)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(BOOL)removeUserDefaultForKey:(id)arg1 bundleIdentifier:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)setAchievementValuesWithDictionary:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)codableAchievementValuesForKeys:(id)arg1 category:(long long)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)removeAchievementValuesForKeys:(id)arg1 category:(long long)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)achievementValueForKey:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)achievementStringValueForKey:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_keyForDataType:(id)arg1 error:(id*)arg2 ;
+(id)modificationDateForCharacteristicWithType:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)keyForUserCharacteristicType:(id)arg1 ;
+(id)achievementValueForKey:(id)arg1 category:(long long)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)enumerateAchievementValuesForKeys:(id)arg1 category:(long long)arg2 profile:(id)arg3 error:(id*)arg4 usingBlock:(/*^block*/id)arg5 ;
+(id)userDefaultForKey:(id)arg1 bundleIdentifier:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
@end

