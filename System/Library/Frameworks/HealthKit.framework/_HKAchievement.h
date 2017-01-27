/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSDate, NSNumber;

@interface _HKAchievement : NSObject <NSSecureCoding> {

	BOOL _alerted;
	BOOL _viewed;
	NSUUID* _UUID;
	NSString* _definitionIdentifier;
	NSDate* _completedDate;
	NSNumber* _value;
	unsigned long long _workoutActivityType;

}

@property (nonatomic,retain) NSUUID * UUID;                                       //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) NSString * definitionIdentifier;                     //@synthesize definitionIdentifier=_definitionIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * completedDate;                              //@synthesize completedDate=_completedDate - In the implementation block
@property (nonatomic,retain) NSNumber * value;                                    //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) unsigned long long workoutActivityType;              //@synthesize workoutActivityType=_workoutActivityType - In the implementation block
@property (assign,getter=isAlerted,nonatomic) BOOL alerted;                       //@synthesize alerted=_alerted - In the implementation block
@property (assign,getter=isViewed,nonatomic) BOOL viewed;                         //@synthesize viewed=_viewed - In the implementation block
+(CGSize)_fiui_badgeThumbnailSizeUsingLargerDeviceSize:(BOOL)arg1 ;
+(CGSize)fiui_badgeThumbnailRenderingSize;
+(double)fiui_badgeThumbnailRenderingScale;
+(CGSize)fiui_badgeThumbnailSize;
+(BOOL)supportsSecureCoding;
+(id)_nextUUID;
+(void)setOverridenUUID:(id)arg1 ;
+(id)_valueFromPlaceholder:(id)arg1 withAchievement:(id)arg2 context:(id)arg3 ;
+(id)_formatValue:(id)arg1 usingFormatterNamed:(id)arg2 ;
+(id)achievementWithDefinitionIdentifier:(id)arg1 completedDate:(id)arg2 value:(id)arg3 workoutActivityType:(unsigned long long)arg4 ;
+(id)_achievementWithUUID:(id)arg1 definitionIdentifier:(id)arg2 completedDate:(id)arg3 value:(id)arg4 workoutActivityType:(unsigned long long)arg5 alerted:(BOOL)arg6 ;
-(id)fiui_stickerBundle;
-(void)_addStickersFromBundle:(id)arg1 forType:(id)arg2 toArray:(id)arg3 ;
-(id)fiui_stickerURLs;
-(id)fiui_badgeTexturePath;
-(id)fiui_badgePlistPath;
-(id)_fiui_badgeAssetNameSuffix;
-(id)_fiui_badgeContainerPath;
-(id)_fiui_pathForAssetNamed:(id)arg1 ofType:(id)arg2 ;
-(id)_fiui_imagePathForUncompletedAchievementOfSizeClass:(long long)arg1 ;
-(id)fiui_imageForSizeClass:(long long)arg1 ;
-(id)fiui_compressedBadgeModelPath;
-(id)fiui_uniqueBadgeModelIdentifier;
-(BOOL)fiui_hasImageForSizeClass:(long long)arg1 ;
-(id)fiui_badgeModelFilename;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)localizedDescription;
-(NSNumber *)value;
-(void)setValue:(NSNumber *)arg1 ;
-(NSUUID *)UUID;
-(id)localizedTitle;
-(id)_initWithDefinitionIdentifier:(id)arg1 completedDate:(id)arg2 value:(id)arg3 workoutActivityType:(unsigned long long)arg4 ;
-(id)_initWithDefinitionIdentifier:(id)arg1 completedDate:(id)arg2 value:(id)arg3 ;
-(id)_achievementDefinition;
-(BOOL)_isWheelchairUser;
-(id)localizedTitleWithIsWheelchairUser:(BOOL)arg1 ;
-(id)_localizedStringWithContext:(id)arg1 ;
-(id)localizedDescriptionWithNumberOfTimesAchieved:(long long)arg1 ;
-(id)localizedDescriptionWithNumberOfTimesAchieved:(long long)arg1 isWheelchairUser:(BOOL)arg2 ;
-(id)localizedDescriptionForAlertWithUserName:(id)arg1 isWheelchairUser:(BOOL)arg2 ;
-(id)localizedShareDescriptionWithNumberOfTimesAchieved:(long long)arg1 isWheelchairUser:(BOOL)arg2 ;
-(void)_getLocalizedStringTable:(id*)arg1 bundle:(id*)arg2 includesDefinitionIdentifier:(BOOL*)arg3 ;
-(id)_buildKeyWithPrefix:(id)arg1 definitionIdentifier:(id)arg2 includingUserName:(BOOL)arg3 isWheelchairUser:(BOOL)arg4 ;
-(id)_pluralizeLocalizedString:(id)arg1 completeNumberOfTimes:(long long)arg2 ;
-(id)_replacePlaceholdersInString:(id)arg1 withContext:(id)arg2 ;
-(id)localizedDescriptionForAlertWithUserName:(id)arg1 ;
-(id)localizedDescriptionForNewUnearnedAlert;
-(id)localizedDescriptionForNewUnearnedAlertBadgeBack;
-(id)localizedShareDescriptionWithNumberOfTimesAchieved:(long long)arg1 ;
-(NSString *)definitionIdentifier;
-(NSDate *)completedDate;
-(unsigned long long)workoutActivityType;
-(BOOL)isAlerted;
-(BOOL)isViewed;
-(void)setAlerted:(BOOL)arg1 ;
-(void)setDefinitionIdentifier:(NSString *)arg1 ;
-(void)setCompletedDate:(NSDate *)arg1 ;
-(void)setWorkoutActivityType:(unsigned long long)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(void)setViewed:(BOOL)arg1 ;
-(BOOL)_validateConfiguration;
@end

