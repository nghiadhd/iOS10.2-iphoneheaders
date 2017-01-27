/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoGlanceSettings.framework/NanoGlanceSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, NPSManager, NSArray, NSString, NSObject;

@interface NGSInternalSettingsManager : NSObject {

	NSMutableArray* _glanceDefinitions;
	NSMutableDictionary* _installStatesByGlanceID;
	NPSManager* _syncManager;
	NSArray* _storedSettings;
	NSString* _selectedGlanceIdentifier;
	NSArray* _blacklistedWatchKitIDs;
	BOOL _hasSettings;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) BOOL hasSettings; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSString * selectedGlanceIdentifier; 
@property (nonatomic,readonly) unsigned long long glanceCount; 
-(id)init;
-(void)loadSettings;
-(void)saveSettings;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_loadBlacklistedWatchKitIDs;
-(unsigned long long)_glanceCount;
-(BOOL)_hasSettings;
-(void)enumerateAllGlanceDefinitionsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)_shouldSaveGlanceDefinitions;
-(void)_willSaveGlanceDefinitions;
-(BOOL)_shouldMergeGlanceDefinitions;
-(void)_mergeAdditionalGlanceDefinitionsIntoArray:(id)arg1 ;
-(void)_sortGlanceDefinitions:(id)arg1 ;
-(id)_storedSettingsRepresentationFromGlanceDefinitions:(id)arg1 ;
-(void)didLoadGlanceDefinitions;
-(unsigned long long)_numberOfActiveGlances;
-(void)_sortGlanceDefinitions;
-(BOOL)_shouldSortGlanceDefinitions;
-(id)glanceDefinitions;
-(NSString *)selectedGlanceIdentifier;
-(unsigned long long)glanceCount;
-(void)setSelectedGlanceIdentifier:(NSString *)arg1 ;
-(BOOL)hasSettings;
-(void)addGlanceDefinition:(id)arg1 ;
-(void)removeGlanceDefinitionsInArray:(id)arg1 ;
-(void)moveGlanceDefinitionFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(id)glanceDefinitionForWatchKitIdentifier:(id)arg1 ;
-(id)glanceIdentifierForGlanceDefinitionAtIndex:(unsigned long long)arg1 ;
-(BOOL)isWatchKitBundleIDBlacklisted:(id)arg1 ;
-(void)invalidateAndReloadSettings;
-(void)willSaveGlanceDefinitions;
-(void)sortGlanceDefinitions;
-(id)glanceDefinitionForAppBundleIdentifier:(id)arg1 ;
-(id)glanceDefinitionForGlanceIdentifier:(id)arg1 ;
-(BOOL)hasMaximumNumberOfActiveGlances;
-(void)enumerateGlanceDefinitionsUsingBlock:(/*^block*/id)arg1 ;
-(void)_saveSettings:(id)arg1 ;
-(void)_saveSettings;
@end

