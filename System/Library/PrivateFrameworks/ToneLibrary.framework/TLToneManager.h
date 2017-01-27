/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ToneLibrary/ToneLibrary-Structs.h>
@class TLAccessQueue, NSMutableDictionary, NSDictionary, NPSDomainAccessor, NSString;

@interface TLToneManager : NSObject {

	TLAccessQueue* _accessQueue;
	NSMutableDictionary* _iTunesTonesByIdentifier;
	NSMutableDictionary* _iTunesToneIdentifiersByPID;
	NSMutableDictionary* _alertTonesByIdentifier;
	NSDictionary* _toneIdentifierAliasMap;
	BOOL _cachedWatchPrefersSalientNotifications;
	BOOL _hasValidCachedWatchPrefersSalientNotifications;
	BOOL _shouldSkipNextWatchPrefersSalientNotificationsDidChangeNotification;
	NPSDomainAccessor* _transientNanoPreferencesDomainAccessor;
	BOOL _shouldUseServiceToAccessTonePreferences;
	NSDictionary* _cachedTonePreferences;
	BOOL _shouldIgnoreNextToneDidChangeNotification;

}

@property (nonatomic,readonly) NSString * _rootDirectory; 
@property (nonatomic,readonly) NSString * _deviceITunesRingtoneDirectory; 
@property (nonatomic,readonly) NSString * _deviceITunesRingtoneInformationPlist; 
@property (nonatomic,readonly) NSString * _iTunesRingtoneDirectory; 
@property (nonatomic,readonly) NSString * _iTunesRingtoneInformationPlist; 
@property (nonatomic,readonly) NSString * _systemRingtoneDirectory; 
+(CFStringRef)_copySharedResourcesPreferencesDomainForDomain:(CFStringRef)arg1 ;
+(id)_systemWideTonePreferenceKeyForAlertType:(long long)arg1 ;
+(id)_defaultToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2 ;
+(BOOL)_checkForFileExistenceAtPath:(id)arg1 allowingTCCPreflight:(BOOL)arg2 ;
+(BOOL)_migrateLegacyToneSettings;
+(id)sharedToneManager;
-(id)init;
-(void)dealloc;
-(id)nameForToneIdentifier:(id)arg1 ;
-(BOOL)toneWithIdentifierIsValid:(id)arg1 ;
-(id)initWithITunesRingtonePlistAtPath:(id)arg1 ;
-(void)_loadITunesRingtoneInfoPlistAtPath:(id)arg1 ;
-(void)_loadAlertToneInfo;
-(void)_loadToneIdentifierAliasMap;
-(void)_performBlockInAccessQueue:(/*^block*/id)arg1 ;
-(NSString *)_rootDirectory;
-(id)_copyITunesRingtonesFromManifestPath:(id)arg1 mediaDirectoryPath:(id)arg2 ;
-(NSString *)_iTunesRingtoneInformationPlist;
-(NSString *)_deviceITunesRingtoneInformationPlist;
-(id)_installedTones;
-(BOOL)_addToneEntries:(id)arg1 toManifestAtPath:(id)arg2 mediaDirectory:(id)arg3 shouldSkipReload:(BOOL)arg4 ;
-(BOOL)_ensureDirectoryExistsAtPath:(id)arg1 ;
-(int)_lockManifestAtPath:(id)arg1 ;
-(void)_reloadITunesRingtonesAfterExternalChange;
-(BOOL)_removeTonesFromManifestAtPath:(id)arg1 fileNames:(id)arg2 shouldSkipReload:(BOOL)arg3 alreadyLockedManifest:(BOOL)arg4 removedEntries:(id*)arg5 ;
-(id)_systemEmbeddedSoundDirectory;
-(id)_baseDirectoryForAlertToneSoundFiles;
-(id)_systemSoundDirectory;
-(id)_systemNewSoundDirectory;
-(id)_systemEmbeddedModernSoundDirectory;
-(id)defaultRingtoneIdentifier;
-(id)_newServiceConnection;
-(void)setCurrentToneIdentifier:(id)arg1 forAlertType:(long long)arg2 topic:(id)arg3 ;
-(id)_tonePreferencesFromService;
-(id)_currentToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2 ;
-(id)_defaultToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2 ;
-(BOOL)_setToneIdentifierUsingService:(id)arg1 keyedByTopic:(id)arg2 forPreferenceKey:(id)arg3 ;
-(void)_didSetTonePreferenceSuccessfullyWithKey:(id)arg1 inDomain:(id)arg2 usingPreferencesOfKind:(unsigned long long)arg3 ;
-(unsigned)currentToneSoundIDForAlertType:(long long)arg1 topic:(id)arg2 ;
-(id)_soundForToneIdentifier:(id)arg1 ;
-(id)filePathForToneIdentifier:(id)arg1 ;
-(BOOL)_toneWithIdentifierIsSystemAlertTone:(id)arg1 ;
-(BOOL)_toneWithIdentifierIsITunesRingtone:(id)arg1 ;
-(BOOL)_toneWithIdentifierIsNonDefaultSystemRingtone:(id)arg1 ;
-(BOOL)_toneWithIdentifierIsDefaultRingtone:(id)arg1 ;
-(BOOL)_toneWithIdentifierIsAlarmWakeUp:(id)arg1 ;
-(id)_filePathForToneIdentifier:(id)arg1 isValid:(BOOL*)arg2 ;
-(id)_fileNameFromToneIdentifier:(id)arg1 withPrefix:(id)arg2 ;
-(NSString *)_systemRingtoneDirectory;
-(id)_alarmWakeUpRingtoneDirectory;
-(id)_defaultRingtonePath;
-(id)_nameForToneIdentifier:(id)arg1 isValid:(BOOL*)arg2 ;
-(id)_localizedNameOfToneWithIdentifier:(id)arg1 ;
-(id)_defaultRingtoneName;
-(BOOL)_toneWithIdentifierIsValid:(id)arg1 ;
-(BOOL)_addToneToManifestAtPath:(id)arg1 metadata:(id)arg2 fileName:(id)arg3 mediaDirectory:(id)arg4 ;
-(BOOL)_removeToneFromManifestAtPath:(id)arg1 fileName:(id)arg2 ;
-(long long)_evaluateOrphanEntriesCleanupStatusForcingReevaluationIfPreviouslyDone:(BOOL)arg1 returningFilePathsForFoundOrphans:(id*)arg2 wasAffectedByAccidentalToneDeletion:(BOOL*)arg3 ;
-(id)_toneIdentifierForFileAtPath:(id)arg1 ;
-(id)_removeOrphanedPlistEntriesInManifestAtPath:(id)arg1 mediaDirectory:(id)arg2 ;
-(long long)_currentToneWatchAlertPolicyForAlertType:(long long)arg1 topic:(id)arg2 ;
-(long long)_currentToneWatchAlertPolicyForAlertType:(long long)arg1 topic:(id)arg2 didFindPersistedWatchAlertPolicy:(BOOL*)arg3 ;
-(id)_currentToneWatchAlertPolicyPreferenceKeyForAlertType:(long long)arg1 topic:(id)arg2 ;
-(void)_setCurrentToneWatchAlertPolicy:(long long)arg1 forAlertType:(long long)arg2 topic:(id)arg3 ;
-(void)_handleWatchPrefersSalientNotificationDidChange;
-(BOOL)_watchPrefersSalientNotifications;
-(void)_handleTonePreferencesChangedNotificationForPreferencesKinds:(unsigned long long)arg1 ;
-(unsigned long long)_installedTonesSize;
-(void)setCurrentToneIdentifier:(id)arg1 forAlertType:(long long)arg2 ;
-(id)currentToneNameForAlertType:(long long)arg1 ;
-(unsigned)currentToneSoundIDForAlertType:(long long)arg1 ;
-(id)_previewSoundForToneIdentifier:(id)arg1 ;
-(void)importTone:(id)arg1 metadata:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)removeImportedToneWithIdentifier:(id)arg1 ;
-(BOOL)_insertPurchasedToneMetadata:(id)arg1 fileName:(id)arg2 ;
-(BOOL)_transferPurchasedToITunes:(id)arg1 ;
-(id)_allSyncedTones;
-(id)_iTunesToneForPID:(id)arg1 ;
-(BOOL)_insertSyncedToneMetadata:(id)arg1 fileName:(id)arg2 ;
-(BOOL)_removeSyncedToneByPID:(id)arg1 ;
-(void)_removeAllSyncedData;
-(long long)_removeOrphanedManifestEntriesReturningFilePathsForFoundOrphans:(id*)arg1 ;
-(void)_registerDidRequestResetSyncPostAccidentalToneDeletion;
-(long long)_currentToneWatchAlertPolicyForAlertType:(long long)arg1 ;
-(void)_setCurrentToneWatchAlertPolicy:(long long)arg1 forAlertType:(long long)arg2 ;
-(void)_setWatchPrefersSalientNotifications:(BOOL)arg1 ;
-(BOOL)_toneIsSettableForAlertType:(long long)arg1 ;
-(void)_handleDeviceRingtonesChangedNotification;
-(long long)_currentToneWatchAlertPolicyForAlertType:(long long)arg1 accountIdentifier:(id)arg2 ;
-(void)_setCurrentToneWatchAlertPolicy:(long long)arg1 forAlertType:(long long)arg2 accountIdentifier:(id)arg3 ;
-(BOOL)_wasAffectedByAccidentalToneDeletion;
-(id)currentToneIdentifierForAlertType:(long long)arg1 ;
-(id)currentToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2 ;
-(id)_aliasForToneIdentifier:(id)arg1 ;
-(NSString *)_iTunesRingtoneDirectory;
-(NSString *)_deviceITunesRingtoneDirectory;
-(id)_iTunesToneWithIdentifier:(id)arg1 ;
-(BOOL)_filePathHasSupportedExtensionForRingtone:(id)arg1 ;
-(id)_toneIdentifierForFileAtPath:(id)arg1 isValid:(BOOL*)arg2 ;
-(id)newAVItemForToneIdentifier:(id)arg1 ;
-(id)currentToneIdentifierForAlertType:(long long)arg1 accountIdentifier:(id)arg2 ;
-(id)defaultToneIdentifierForAlertType:(long long)arg1 ;
-(void)setCurrentToneIdentifier:(id)arg1 forAlertType:(long long)arg2 accountIdentifier:(id)arg3 ;
@end

