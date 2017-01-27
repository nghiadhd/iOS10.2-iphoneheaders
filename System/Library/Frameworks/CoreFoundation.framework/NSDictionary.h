/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/HFPropertyListConvertible.h>
#import <libobjc.A.dylib/PQLBindable.h>
#import <libobjc.A.dylib/CSCoderEncoder.h>
#import <libobjc.A.dylib/PHFetchDictionaryAccessing.h>
#import <libobjc.A.dylib/NSFetchRequestResult.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSString, NSArray, NSNumber;

@interface NSDictionary : NSObject <HFPropertyListConvertible, PQLBindable, CSCoderEncoder, PHFetchDictionaryAccessing, NSFetchRequestResult, NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long lastServerRevision; 
@property (assign,nonatomic) unsigned long long lastClientRevision; 
@property (assign,nonatomic) unsigned long long newRevision; 
@property (nonatomic,copy) NSString * versionToken; 
@property (readonly) NSString * npkRelevancyUniqueID; 
@property (readonly) NSString * npkRelevancyRelevantText; 
@property (nonatomic,readonly) NSString * hk_title; 
@property (nonatomic,readonly) NSString * hk_bundleId; 
@property (nonatomic,readonly) NSString * hk_priceFormatted; 
@property (nonatomic,readonly) NSArray * hk_categories; 
@property (nonatomic,readonly) NSNumber * hk_storeID; 
@property (nonatomic,readonly) BOOL hk_isInstalled; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * bundleId; 
@property (nonatomic,readonly) NSString * creator; 
@property (nonatomic,readonly) float averageRating; 
@property (nonatomic,readonly) unsigned long long ratingCount; 
@property (nonatomic,readonly) NSString * url; 
@property (nonatomic,readonly) NSString * priceFormatted; 
@property (nonatomic,readonly) NSArray * transitModeKeys; 
@property (nonatomic,readonly) NSArray * categories; 
@property (nonatomic,readonly) NSNumber * storeID; 
@property (nonatomic,readonly) BOOL isOfficialApp; 
@property (nonatomic,readonly) BOOL isInstalled; 
@property (nonatomic,readonly) NSString * __im_associatedMessageSummary; 
@property (nonatomic,readonly) NSNumber * __im_associatedMessageContentType; 
@property (nonatomic,readonly) NSString * __im_associatedMessagePluginBundleID; 
@property (nonatomic,readonly) NSString * __im_associatedMessagePluginDisplayName; 
@property (nonatomic,readonly) unsigned short fileHFSFlags; 
@property (nonatomic,readonly) unsigned long long fileHFSResourceForkSize; 
@property (readonly) unsigned long long count; 
+(id)MCM_dictionaryWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)npkRelevancyTupleWithUniqueID:(id)arg1 relevantText:(id)arg2 ;
+(id)sd_dictionaryFromDictionary:(id)arg1 forKeys:(id)arg2 ;
+(id)fc_dictionary:(/*^block*/id)arg1 ;
+(id)fc_dictionaryWithObjects:(id)arg1 keyBlock:(/*^block*/id)arg2 ;
+(id)fc_dictionaryFromJSON:(id)arg1 ;
+(id)fc_dictionaryByAddingEntriesFromDictionary:(id)arg1 toDictionary:(id)arg2 ;
+(id)fc_dictionaryFromArray:(id)arg1 keyBlock:(/*^block*/id)arg2 valueBlock:(/*^block*/id)arg3 ;
+(id)fc_dictionaryWithKeys:(id)arg1 valueBlock:(/*^block*/id)arg2 ;
+(id)fc_dictionaryWithKeys:(id)arg1 valueWithIndexBlock:(/*^block*/id)arg2 ;
+(id)_gkImageCacheKeyPathsByKey;
+(id)_gkClientImageDictionaryForServerImageURLs:(id)arg1 ;
+(id)_gkDictionaryWithFormEncodedString:(id)arg1 ;
+(id)sk_dictionaryWithSize:(CGSize)arg1 ;
+(id)fm_dictionaryWithContentsOfData:(id)arg1 ;
+(id)fm_dictionaryWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(id)dictionaryWithContentsOfData:(id)arg1 ;
+(id)dictionaryWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)hk_acceptsMetadataValue:(id)arg1 ;
+(BOOL)_hk_validateMetadataValueContent:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
+(id)hk_acceptedMetadataValueClasses;
+(id)hk_secureCodingClasses;
+(id)safari_dictionaryWithPropertyListData:(id)arg1 options:(unsigned long long)arg2 ;
+(id)safari_dictionaryWithPropertyListData:(id)arg1 ;
+(id)safari_dictionaryWithContentsOfData:(id)arg1 options:(unsigned long long)arg2 ;
+(id)dictionaryWithParametersInURLString:(id)arg1 ;
+(id)SLDictionaryWithOAuthAccessTokenResponseData:(id)arg1 ;
+(id)dictionaryWithAssociatedMessageSummary:(id)arg1 contentType:(unsigned char)arg2 pluginBundleID:(id)arg3 pluginDisplayName:(id)arg4 ;
+(id)dictionaryWithMessageSummaryInfoData:(id)arg1 ;
+(id)vcp_exifFromImageURL:(id)arg1 ;
+(id)_dictionaryWithData:(id)arg1 isPlist:(BOOL)arg2 allowedClasses:(id)arg3 ;
+(id)dictionaryWithArchiveData:(id)arg1 allowedClasses:(id)arg2 ;
+(id)dictionaryWithArchiveData:(id)arg1 ;
+(id)dictionaryWithKeyArray:(id)arg1 defaultValue:(id)arg2 ;
+(id)dictionaryWithPlistData:(id)arg1 ;
+(id)dictionaryWithAXAuditIssue:(long long)arg1 element:(id)arg2 ;
+(id)ak_dictionaryWithResponseData:(id)arg1 ;
+(id)_geo_dictionaryFromXPCObject:(id)arg1 ;
+(id)_geo_replyDictionaryForError:(id)arg1 key:(id)arg2 ;
+(id)MCShortenedDictionary:(id)arg1 ;
+(id)MCShortenedArray:(id)arg1 ;
+(id)MCShortenedData:(id)arg1 ;
+(id)MCShortenedObject:(id)arg1 ;
+(id)newWithContentsOf:(id)arg1 immutable:(BOOL)arg2 ;
+(id)dictionaryWithContentsOfURL:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)dictionaryWithContentsOfFile:(id)arg1 ;
+(id)newDictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
+(id)dictionaryWithDictionary:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)dictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
+(id)dictionaryWithObject:(id)arg1 forKey:(id)arg2 ;
+(id)dictionary;
+(id)dictionaryWithObjectsAndKeys:(id)arg1 ;
+(id)dictionaryWithDictionary:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)dictionaryWithObjects:(id)arg1 forKeys:(id)arg2 ;
+(id)sharedKeySetForKeys:(id)arg1 ;
-(id)keyMap:(/*^block*/id)arg1 ;
-(id)reduce:(/*^block*/id)arg1 withInitialValue:(id)arg2 ;
-(id)dictionaryByAddingEntriesFromDictionary:(id)arg1 ;
-(id)map:(/*^block*/id)arg1 ;
-(long long)_compareBundleDictionary:(id)arg1 ;
-(id)vs_arrayForKey:(id)arg1 ;
-(id)vs_stringForKey:(id)arg1 ;
-(id)vs_numberForKey:(id)arg1 ;
-(id)vs_arrayOfStringsForKey:(id)arg1 ;
-(id)vs_objectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)vs_dictionaryForKey:(id)arg1 ;
-(BOOL)_writeBinaryPlist:(id)arg1 error:(id*)arg2 ;
-(id)searchResultWithFileVersion:(int)arg1 ;
-(id)searchResult;
-(BOOL)MCM_writeToURL:(id)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)model;
-(id)displayName;
-(void)setDisplayName:(id)arg1 ;
-(id)osVersion;
-(void)setOsVersion:(id)arg1 ;
-(void)setModel:(id)arg1 ;
-(id)devicePairingId;
-(void)setOsType:(id)arg1 ;
-(void)setGrappaInfo:(id)arg1 ;
-(void)setEnabledDataClasses:(id)arg1 ;
-(void)setDevicePairingId:(id)arg1 ;
-(id)grappaInfo;
-(unsigned long long)lastServerRevision;
-(id)enabledDataClasses;
-(void)setLastServerRevision:(unsigned long long)arg1 ;
-(unsigned long long)lastClientRevision;
-(void)setLastClientRevision:(unsigned long long)arg1 ;
-(void)setNewRevision:(unsigned long long)arg1 ;
-(unsigned long long)newRevision;
-(NSString *)versionToken;
-(void)setVersionToken:(NSString *)arg1 ;
-(id)osType;
-(id)wlk_stringForKey:(id)arg1 ;
-(id)wlk_artworkVariantListingForKey:(id)arg1 ;
-(id)wlk_numberForKey:(id)arg1 ;
-(id)wlk_arrayForKey:(id)arg1 ;
-(id)wlk_dictionaryForKey:(id)arg1 ;
-(BOOL)wlk_boolForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(id)wlk_dateFromMillisecondsSince1970ForKey:(id)arg1 ;
-(id)_lookupValueForKey:(id)arg1 expectedClass:(Class)arg2 ;
-(id)wlk_dateForKey:(id)arg1 ;
-(id)wlk_dataForKey:(id)arg1 ;
-(unsigned long long)wlk_deepHash;
-(id)nas_stringValueForKey:(id)arg1 ;
-(id)nas_arrayValueForKey:(id)arg1 expectedContainingObjectsType:(Class)arg2 ;
-(BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)aap_arrayValueForKey:(id)arg1 expectedContainingObjectsType:(Class)arg2 ;
-(id)aap_stringValueForKey:(id)arg1 ;
-(NSString *)npkRelevancyUniqueID;
-(NSString *)npkRelevancyRelevantText;
-(id)PKStringForKey:(id)arg1 ;
-(id)PKURLForKey:(id)arg1 ;
-(id)PKNumberForKey:(id)arg1 ;
-(id)PKArrayForKey:(id)arg1 ;
-(id)PKSetForKey:(id)arg1 ;
-(id)PKDecimalNumberForKey:(id)arg1 ;
-(id)PKDateForKey:(id)arg1 ;
-(id)PKUUIDForKey:(id)arg1 ;
-(id)PKColorForKey:(id)arg1 ;
-(long long)PKIntegerForKey:(id)arg1 ;
-(double)PKDoubleForKey:(id)arg1 ;
-(BOOL)PKBoolForKey:(id)arg1 ;
-(id)PKDictionaryForKey:(id)arg1 ;
-(id)PKArrayContaining:(Class)arg1 forKey:(id)arg2 ;
-(id)PKSetContaining:(Class)arg1 forKey:(id)arg2 ;
-(id)stringFromQueryComponents;
-(id)regionFromDataForKey:(id)arg1 ;
-(id)locationFromDataForKey:(id)arg1 ;
-(id)shortDescription;
-(id)secureDescriptionWithBlacklistKeys:(id)arg1 ;
-(id)secureDescriptionWithIndent:(id)arg1 newLine:(BOOL)arg2 blacklistedKeys:(id)arg3 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)urlForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)arrayOfDateComponentsFromDataForKey:(id)arg1 ;
-(id)predicateFromDataForKey:(id)arg1 ;
-(id)setForKey:(id)arg1 ;
-(id)dateForKey:(id)arg1 ;
-(id)mutableDictionaryForKey:(id)arg1 ;
-(id)mutableSetForKey:(id)arg1 ;
-(id)numberForKey:(id)arg1 ;
-(id)uuidForKey:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 keyPresent:(BOOL*)arg2 ;
-(id)timeZoneForKey:(id)arg1 ;
-(id)dateComponentsForKey:(id)arg1 ;
-(id)mutableArrayForKey:(id)arg1 ;
-(id)errorFromDataForKey:(id)arg1 ;
-(id)uuidFromStringForKey:(id)arg1 ;
-(id)errorForKey:(id)arg1 ;
-(id)base64EncodedDataForKey:(id)arg1 ;
-(id)nsValueForKey:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(id)nullForKey:(id)arg1 ;
-(id)timeZoneFromDataForKey:(id)arg1 ;
-(id)dateComponentsFromDataForKey:(id)arg1 ;
-(id)calendarFromDataForKey:(id)arg1 ;
-(id)calendarForKey:(id)arg1 ;
-(id)sd_dictionaryForKeys:(id)arg1 ;
-(id)fc_dictionaryByTransformingValuesWithBlock:(/*^block*/id)arg1 ;
-(id)fc_objectsForKeysWithoutMarker:(id)arg1 ;
-(id)fc_dictionaryBySwappingValuesAndKeys;
-(id)fc_subdictionaryWithKeys:(id)arg1 ;
-(id)fc_dictionaryByRemovingObjectForKey:(id)arg1 ;
-(id)fc_subdictionaryWithCopiesForKeys:(id)arg1 ;
-(id)fc_dictionaryByTransformingKeysWithKeyAndValueBlock:(/*^block*/id)arg1 ;
-(id)fc_dictionaryByTransformingKeysWithBlock:(/*^block*/id)arg1 ;
-(id)fc_dictionaryByTransformingValuesWithKeyAndValueBlock:(/*^block*/id)arg1 ;
-(id)fc_deepCopy;
-(id)fr_descriptionWithKeyComparator:(/*^block*/id)arg1 ;
-(id)jsonString;
-(BOOL)fc_localDataHint;
-(id)fc_actionTypes;
-(id)objectForInt:(int)arg1 ;
-(id)mutableCopyWithElementsCopy;
-(id)_gkImageURLForSize:(long long)arg1 scale:(double)arg2 ;
-(id)_gkImageURLForSize:(long long)arg1 scale:(double)arg2 foundSize:(out unsigned long long*)arg3 ;
-(id)_gkDescriptionWithChildren:(int)arg1 ;
-(id)_gkDictionaryByRemovingObjectsForKeys:(id)arg1 ;
-(id)_gkDictionaryByRemovingObjectForKey:(id)arg1 ;
-(id)_gkSubDictionaryWithKeys:(id)arg1 ;
-(id)_gkSubDictionaryWithKeys:(id)arg1 mappedToNewKeys:(id)arg2 ;
-(id)_gkValuesForKeys:(id)arg1 ;
-(id)CKPercentEscapedQueryString;
-(id)CKObjectForKeyCaseInsensitive:(id)arg1 ;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(int)iterations;
-(float)offset;
-(SEL)setupSelector;
-(SEL)testSelector;
-(id)scriptPath;
-(id)scriptEntry;
-(id)SCNMutableDeepCopy;
-(SCNVector4)SCNVector4Value;
-(SCNVector3)SCNVector3Value;
-(SCNMatrix4)SCNMatrix4Value;
-(unsigned long long)SCN_safeHash;
-(id)_defaultOffer;
-(id)_hk_circularArtwork;
-(id)_hk_bestImageURLForWidth:(double)arg1 fromArtworkArray:(id)arg2 ;
-(id)_hk_artwork;
-(NSString *)hk_title;
-(NSString *)hk_bundleId;
-(NSNumber *)hk_storeID;
-(NSString *)hk_priceFormatted;
-(id)hk_bestCircularImageURLForWidth:(double)arg1 ;
-(id)hk_bestImageURLForWidth:(double)arg1 ;
-(NSArray *)hk_categories;
-(BOOL)hk_isInstalled;
-(id)fm_filter:(/*^block*/id)arg1 ;
-(id)fm_dictionaryWithLowercaseKeys;
-(id)dictionaryWithLowercaseKeys;
-(id)fm_dictionaryByMappingValues:(/*^block*/id)arg1 ;
-(BOOL)hk_validateMetadataKeysAndValuesAllowingPrivateMetadataKeys:(BOOL)arg1 error:(id*)arg2 ;
-(id)__ftreg_responseAppleID;
-(id)__ftreg_responseProfileID;
-(id)__ftreg_responseAuthToken;
-(BOOL)__ftreg_responseIsUpgrade;
-(BOOL)__ftreg_isValidSetupDictionary;
-(id)__ftreg_candidateAliases;
-(id)safari_stringForKey:(id)arg1 ;
-(id)safari_dateForKey:(id)arg1 ;
-(BOOL)safari_boolForKey:(id)arg1 ;
-(id)safari_dictionaryForKey:(id)arg1 ;
-(id)safari_arrayForKey:(id)arg1 ;
-(id)safari_URLForKey:(id)arg1 ;
-(id)safari_numberForKey:(id)arg1 ;
-(id)safari_dataForKey:(id)arg1 ;
-(id)safari_UUIDForKey:(id)arg1 ;
-(id)safari_mapAndFilterKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)blj_dictionaryBySwappingValuesWithDictionary:(id)arg1 ;
-(id)blj_dictionaryByRemovingValuesForKey:(id)arg1 ;
-(id)yql_objectForKey:(id)arg1 ofClass:(Class)arg2 ;
-(id)wf_arrayForKeyPath:(id)arg1 ;
-(id)wf_numberForKeyPath:(id)arg1 ;
-(id)wf_temperatureWithCelsiusKeyPath:(id)arg1 fahrenheitKeyPath:(id)arg2 ;
-(id)wf_dictionaryForKeyPath:(id)arg1 ;
-(id)wf_stringForKeyPath:(id)arg1 ;
-(id)wf_objectOfKind:(Class)arg1 forKeyPath:(id)arg2 ;
-(id)wf_objectForKeyPath:(id)arg1 ;
-(id)wf_URLForKeyPath:(id)arg1 ;
-(long long)wf_integerForKeyPath:(id)arg1 ;
-(float)wf_floatForKeyPath:(id)arg1 ;
-(double)wf_doubleForKeyPath:(id)arg1 ;
-(id)mf_filterUsingMap:(id)arg1 inverse:(BOOL)arg2 ;
-(BOOL)_mapkit_writeBinaryPlist:(id)arg1 atomically:(BOOL)arg2 ;
-(NSString *)url;
-(NSString *)title;
-(NSArray *)categories;
-(NSString *)bundleId;
-(BOOL)isInstalled;
-(id)_ratingData;
-(float)averageRating;
-(NSString *)priceFormatted;
-(id)bestImageURLForWidth:(double)arg1 ;
-(NSArray *)transitModeKeys;
-(BOOL)isOfficialApp;
-(id)_defaultOffer;
-(unsigned long long)ratingCount;
-(NSNumber *)storeID;
-(NSString *)creator;
-(BOOL)mf_boolForKey:(id)arg1 ;
-(int)mf_integerForKey:(id)arg1 ;
-(long long)abCompare:(id)arg1 ;
-(id)DAObjectForKeyCaseInsensitive:(id)arg1 ;
-(id)DAMergeOverrideDictionary:(id)arg1 ;
-(id)dictionaryByMergingWithDictionary:(id)arg1 ;
-(id)objectForKey:(id)arg1 withDefaultValueBlock:(/*^block*/id)arg2 ;
-(id)objectOrDefaultValueForKey:(id)arg1 ;
-(BOOL)hasCaseIgnoringKey:(id)arg1 ;
-(BOOL)bb_boolForKey:(id)arg1 ;
-(long long)bb_integerForKey:(id)arg1 ;
-(float)bl_floatForKey:(id)arg1 ;
-(CGPoint)bl_pointFromStringForKey:(id)arg1 ;
-(BOOL)bl_boolForKey:(id)arg1 ;
-(BOOL)bl_boolForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(int)bl_intForKey:(id)arg1 ;
-(long long)bl_integerForKey:(id)arg1 ;
-(int)bl_intForKey:(id)arg1 defaultValue:(int)arg2 ;
-(long long)bl_integerForKey:(id)arg1 defaultValue:(long long)arg2 ;
-(float)bl_floatForKey:(id)arg1 defaultValue:(float)arg2 ;
-(double)bl_doubleForKey:(id)arg1 ;
-(double)bl_doubleForKey:(id)arg1 defaultValue:(double)arg2 ;
-(CGRect)bl_rectForKey:(id)arg1 ;
-(CGRect)bl_rectForKey:(id)arg1 defaultValue:(CGRect)arg2 ;
-(CGRect)bl_rectFromStringForKey:(id)arg1 ;
-(CGRect)bl_rectFromStringForKey:(id)arg1 defaultValue:(CGRect)arg2 ;
-(CGPoint)bl_pointFromStringForKey:(id)arg1 defaultValue:(CGPoint)arg2 ;
-(CGAffineTransform)bl_affineTransformForKey:(id)arg1 ;
-(id)bl_objectForKey:(id)arg1 defaultValue:(id)arg2 ;
-(id)bl_objectOrNullForKey:(id)arg1 ;
-(id)bl_nonRetainedObjectForKey:(id)arg1 ;
-(id)bl_objectForIndex:(int)arg1 ;
-(id)bl_dictionaryBySwappingValuesWithDictionary:(id)arg1 ;
-(id)bl_dictionaryByRemovingValuesForKey:(id)arg1 ;
-(BOOL)wb_boolForKey:(id)arg1 ;
-(id)wb_numberForKey:(id)arg1 isValid:(BOOL*)arg2 ;
-(id)wb_dictionaryForKey:(id)arg1 isValid:(BOOL*)arg2 ;
-(id)wb_arrayForKey:(id)arg1 isValid:(BOOL*)arg2 ;
-(id)wb_stringForKey:(id)arg1 isValid:(BOOL*)arg2 ;
-(id)wb_objectOfType:(Class)arg1 forKey:(id)arg2 isValid:(BOOL*)arg3 ;
-(id)wb_numberForKey:(id)arg1 ;
-(id)CalMutableRecursiveCopy;
-(id)mutableCopyWithElementsCopy;
-(BOOL)CalHasKeyIn:(id)arg1 ;
-(id)filteredDictionaryPassingTest:(/*^block*/id)arg1 ;
-(id)CDVMergeOverrideDictionary:(id)arg1 ;
-(id)CDVObjectForKeyWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)CDVObjectForKeyCaseInsensitive:(id)arg1 ;
-(void)encodeKeysAndValuesWithCSCoder:(id)arg1 filterBlock:(/*^block*/id)arg2 ;
-(void)encodeWithCSCoder:(id)arg1 ;
-(id)setOfAllObjects;
-(NSString *)__im_associatedMessageSummary;
-(NSNumber *)__im_associatedMessageContentType;
-(NSString *)__im_associatedMessagePluginBundleID;
-(NSString *)__im_associatedMessagePluginDisplayName;
-(id)na_dictionaryByMappingValues:(/*^block*/id)arg1 ;
-(id)na_filter:(/*^block*/id)arg1 ;
-(id)copyGKSDeep;
-(id)copyGKSDeepMutable;
-(SCD_Struct_NS27)vcp_syncPoint;
-(SCD_Struct_NS28)vcp_timerange;
-(int)vcp_version;
-(unsigned long long)vcp_types;
-(id)vcp_fingerprint;
-(BOOL)vcp_degraded;
-(id)vcp_dateModified;
-(unsigned long long)vcp_flags;
-(id)vcp_results;
-(id)vcp_dateAnalyzed;
-(double)vcp_quality;
-(float)vcp_scaledExposureTime;
-(BOOL)vcp_flashFired;
-(BOOL)MSASIsGlobalResetSync;
-(id)MSASAlbumResetSyncAlbumGUID;
-(BOOL)MSASIsLocalChange;
-(id)MSASEventIsDueToAlbumDeletionAlbumGUID;
-(id)MSASEventIsDueToAssetCollectionDeletionAssetCollectionGUID;
-(BOOL)MSASIsNotInteresting;
-(BOOL)MSASIsErrorRecovery;
-(id)MSMutableDeepCopyWithZone:(NSZone*)arg1 ;
-(id)MSDeepCopyWithZone:(NSZone*)arg1 ;
-(id)MSMutableDeepCopy;
-(id)MSDeepCopy;
-(id)plistArchiveWithCPLArchiver:(id)arg1 ;
-(id)initWithCPLArchiver:(id)arg1 ;
-(void)CKAssignToContainerWithID:(id)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(BOOL)writeToProtectedFile:(id)arg1 atomically:(BOOL)arg2 ;
-(id)asQueryParameterString;
-(id)_FTFilteredDictionaryForAPS;
-(id)_cn_keysAndValues;
-(id)_cn_mapKeys:(/*^block*/id)arg1 ;
-(id)_cn_mapValues:(/*^block*/id)arg1 ;
-(id)_cn_map:(/*^block*/id)arg1 ;
-(id)_cn_filter:(/*^block*/id)arg1 ;
-(void)_cn_each:(/*^block*/id)arg1 ;
-(unsigned long long)fileHFSResourceForkSize;
-(unsigned short)fileHFSFlags;
-(id)_dictionaryForKey:(id)arg1 ;
-(id)_arrayForKey:(id)arg1 ;
-(id)_numberForKey:(id)arg1 ;
-(id)_dataForKey:(id)arg1 ;
-(id)_stringForKey:(id)arg1 ;
-(id)archiveData;
-(id)__imDeepCopy;
-(id)dictionaryFromChanges:(id)arg1 ;
-(id)plistData;
-(BOOL)__imIsMutable;
-(id)keysOfChangedEntriesComparedTo:(id)arg1 ;
-(id)parsec_dictionaryForKey:(id)arg1 ;
-(id)parsec_stringForKey:(id)arg1 ;
-(BOOL)parsec_boolForKey:(id)arg1 ;
-(id)parsec_numberForKey:(id)arg1 ;
-(id)parsec_URLForKey:(id)arg1 ;
-(id)parsec_arrayForKey:(id)arg1 ;
-(id)parsec_dataForKey:(id)arg1 ;
-(id)parsec_dateForKey:(id)arg1 ;
-(id)parsec_UUIDForKey:(id)arg1 ;
-(id)sf_asImage:(id)arg1 ;
-(id)sf_imageForKey:(id)arg1 reply:(id)arg2 ;
-(unsigned long long)sf_textColorForKey:(id)arg1 ;
-(id)sf_asFormattedText:(id)arg1 ;
-(id)sf_asPunchout:(id)arg1 ;
-(void)sf_baseCardSection:(id)arg1 reply:(id)arg2 ;
-(id)sf_asActionItem:(id)arg1 ;
-(id)sf_asMediaOffer:(id)arg1 ;
-(id)sf_asAppLink:(id)arg1 ;
-(id)sf_asTrack:(id)arg1 ;
-(id)sf_asPunchout;
-(id)sf_asMediaItem:(id)arg1 ;
-(id)sf_asMediaDetail:(id)arg1 ;
-(id)sf_asTableAlignmentSchema;
-(id)sf_asRichText:(id)arg1 ;
-(id)sf_asRowCardSection:(id)arg1 ;
-(id)sf_asRichTitleCardSection:(id)arg1 ;
-(id)sf_asTitleCardSection:(id)arg1 ;
-(id)sf_asAppLinkCardSection:(id)arg1 ;
-(id)sf_asTrackListCardSection:(id)arg1 ;
-(id)sf_asDescriptionCardSection:(id)arg1 ;
-(id)sf_asMediaInfoCardSection:(id)arg1 ;
-(id)sf_asMediaPlayerCardSection:(id)arg1 ;
-(id)sf_asSocialMediaPostCardSection:(id)arg1 ;
-(id)sf_asMetaInfoCardSection:(id)arg1 ;
-(id)sf_asScoreboardCardSection:(id)arg1 ;
-(id)sf_asNowPlayingCardSection:(id)arg1 ;
-(id)sf_asKeyValueDataCardSection:(id)arg1 ;
-(id)sf_asTableRowCardSection:(id)arg1 ;
-(id)sf_asTextColumnsCardSection:(id)arg1 ;
-(id)sf_asStockChartCardSection:(id)arg1 ;
-(id)_accessibilityLeafDescendantsWithCount:(unsigned long long)arg1 shouldStopAtRemoteElement:(BOOL)arg2 options:(id)arg3 treeLogger:(id)arg4 ;
-(id)_rearrangeKeyboardIfNecessaryWithOriginalArray:(id)arg1 processedArray:(id)arg2 ;
-(id)_web_messageText;
-(int)_web_messageLineNumber;
-(id)_web_messageSourceURL;
-(int)_web_messageType;
-(BOOL)_boolForKey:(id)arg1 ;
-(BOOL)_ui_dictionaryContainsUIStringDrawingKeys;
-(id)_ui_attributesForDictionaryContainingUIStringDrawingKeys;
-(void)cl_json_serializeValue:(value_ostream*)arg1 ;
-(unsigned)bw_optimalMicPolarPattern;
-(BOOL)bw_containsBuiltInMicAsAnInput;
-(id)bw_dataSourceDictionaryForDesiredMicOrientation:(unsigned)arg1 ;
-(BOOL)matchesUID:(id)arg1 ;
-(id)_webkit_objectForMIMEType:(id)arg1 ;
-(id)_webkit_stringForKey:(id)arg1 ;
-(BOOL)_webkit_boolForKey:(id)arg1 ;
-(id)_webkit_arrayForKey:(id)arg1 ;
-(id)_webkit_numberForKey:(id)arg1 ;
-(int)_webkit_intForKey:(id)arg1 ;
-(id)dictionaryChanging:(id)arg1 to:(id)arg2 ;
-(id)_geo_newXPCObject;
-(id)_geo_errorForKey:(id)arg1 ;
-(id)_placeOrCurrentLocation:(BOOL*)arg1 ;
-(void)cl_json_serializeValue:(value_ostream*)arg1 ;
-(BOOL)MR_isEqualToNowPlayingInfo:(id)arg1 ;
-(BOOL)MCSCWriteToFile:(id)arg1 atomically:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)MCSCWriteToFile:(id)arg1 atomically:(BOOL)arg2 mode:(unsigned short)arg3 error:(id*)arg4 ;
-(BOOL)MCSCWriteToURL:(id)arg1 atomically:(BOOL)arg2 mode:(unsigned short)arg3 error:(id*)arg4 ;
-(BOOL)MCSCWriteToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(BOOL)MCSCWriteToURL:(id)arg1 atomically:(BOOL)arg2 error:(id*)arg3 ;
-(id)MCMutableDeepCopyWithZone:(NSZone*)arg1 ;
-(id)MCDeepCopyWithZone:(NSZone*)arg1 ;
-(id)MCMutableDeepCopy;
-(id)MCDeepCopy;
-(id)MCRetainRequiredObjectKey:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 missingDataCode:(long long)arg4 missingDataErrorString:(id)arg5 invalidDataCode:(long long)arg6 invalidDataErrorString:(id)arg7 outError:(id*)arg8 ;
-(id)MCRetainOptionalObjectKey:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 invalidDataCode:(long long)arg4 invalidDataErrorString:(id)arg5 outError:(id*)arg6 ;
-(id)MCRetainRequiredNonZeroLengthStringKey:(id)arg1 errorDomain:(id)arg2 missingDataCode:(long long)arg3 missingDataErrorString:(id)arg4 invalidDataCode:(long long)arg5 invalidDataErrorString:(id)arg6 outError:(id*)arg7 ;
-(id)MCRetainOptionalNonZeroLengthStringKey:(id)arg1 errorDomain:(id)arg2 invalidDataCode:(long long)arg3 invalidDataErrorString:(id)arg4 outError:(id*)arg5 ;
-(id)MCShortenedPlistDescription;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLType;
-(KeyValueArray*)CA_copyRenderKeyValueArray;
-(id)invertedDictionary;
-(void)bs_each:(/*^block*/id)arg1 ;
-(BOOL)bs_safeBOOLForKey:(id)arg1 ;
-(id)bs_safeURLForKey:(id)arg1 ;
-(id)bs_safeStringForKey:(id)arg1 ;
-(id)bs_safeArrayForKey:(id)arg1 ;
-(id)bs_safeDictionaryForKey:(id)arg1 ;
-(id)bs_dictionaryByAddingEntriesFromDictionary:(id)arg1 ;
-(BOOL)bs_boolForKey:(id)arg1 ;
-(id)bs_filter:(/*^block*/id)arg1 ;
-(id)bs_safeObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(id)un_nonEmptyCopy;
-(id)un_safeCastObjectForKey:(id)arg1 class:(Class)arg2 ;
-(id)_sa_mappedDictionaryWithBlock:(/*^block*/id)arg1 ;
-(id)ls_resolvePlugInKitInfoPlistWithDictionary:(id)arg1 ;
-(id)insertExtensionPointVersion:(id)arg1 ;
-(id)_LS_objectForKey:(id)arg1 ofType:(Class)arg2 ;
-(BOOL)_LS_containsKey:(id)arg1 ;
-(unsigned long long)_LS_integerForKey:(id)arg1 ;
-(BOOL)_LS_BoolForKey:(id)arg1 ;
-(id)_parseQueryForIdentifiers:(id)arg1 ;
-(unsigned long long)_hashQuery;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)_web_numberForKey:(id)arg1 ;
-(int)_web_intForKey:(id)arg1 ;
-(id)_web_objectForMIMEType:(id)arg1 ;
-(id)_web_stringForKey:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)fileOwnerAccountName;
-(unsigned long long)fileOwnerAccountNumber;
-(id)fileGroupOwnerAccountName;
-(unsigned long long)fileGroupOwnerAccountNumber;
-(long long)fileSystemNumber;
-(unsigned long long)fileSystemFileNumber;
-(BOOL)fileExtensionHidden;
-(unsigned)fileHFSCreatorCode;
-(unsigned)fileHFSTypeCode;
-(BOOL)fileIsImmutable;
-(BOOL)fileIsAppendOnly;
-(id)fileOwnerAccountID;
-(id)fileGroupOwnerAccountID;
-(id)fileType;
-(id)fileModificationDate;
-(unsigned long long)fileSize;
-(id)fileCreationDate;
-(unsigned long long)filePosixPermissions;
-(id)_stringToWrite;
-(id)descriptionInStringsFileFormat;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(Class)classForCoder;
-(id)initWithContentsOfFile:(id)arg1 ;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(BOOL)__getValue:(id*)arg1 forKey:(id)arg2 ;
-(id)keyOfEntryWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)keysOfEntriesWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)keysSortedByValueWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)invertedDictionary;
-(id)keyOfEntryPassingTest:(/*^block*/id)arg1 ;
-(id)initWithObject:(id)arg1 forKey:(id)arg2 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(unsigned long long)_cfTypeID;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)getKeys:(id*)arg1 ;
-(void)__apply:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS25*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(id)initWithObjectsAndKeys:(id)arg1 ;
-(id)allKeys;
-(id)allObjects;
-(id)objectEnumerator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(BOOL)isEqualToDictionary:(id)arg1 ;
-(id)initWithObjects:(id)arg1 forKeys:(id)arg2 ;
-(id)allValues;
-(id)keyEnumerator;
-(id)keysOfEntriesPassingTest:(/*^block*/id)arg1 ;
-(id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2 ;
-(unsigned long long)countForObject:(id)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(BOOL)containsKey:(id)arg1 ;
-(id)keysSortedByValueUsingComparator:(/*^block*/id)arg1 ;
-(BOOL)isNSDictionary__;
-(id)descriptionWithLocale:(id)arg1 ;
-(unsigned long long)countForKey:(id)arg1 ;
-(id)keysSortedByValueUsingSelector:(SEL)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(id)allKeysForObject:(id)arg1 ;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

