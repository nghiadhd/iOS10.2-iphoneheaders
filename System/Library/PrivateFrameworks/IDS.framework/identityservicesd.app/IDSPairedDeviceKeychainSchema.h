/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IDSPairedDeviceKeychainSchema : NSObject
-(id)_propertyDictionariesFromPairedDevices:(id)arg1 ;
-(unsigned long long)_migrationTypeForKeychainDictionary:(id)arg1 ;
-(id)_migrateFromSinglePairedDeviceToMultipleWithKeychainDictionary:(id)arg1 ;
-(id)keychainDictionaryWithPairedDevices:(id)arg1 ;
-(BOOL)isMigrationRequiredForKeychainDictionary:(id)arg1 ;
-(id)migrateKeychainDictionary:(id)arg1 ;
@end

