/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/PQLValuable.h>
#import <libobjc.A.dylib/QLPreviewItem.h>
#import <libobjc.A.dylib/SBFFileCacheFileIdentifier.h>
#import <libobjc.A.dylib/CKXPCSuitableString.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSPersonNameComponents, NSArray, LSAppLink, NSData, NSNumber;

@interface NSURL : NSObject <PQLValuable, QLPreviewItem, SBFFileCacheFileIdentifier, CKXPCSuitableString, NSSecureCoding, NSCopying> {

	NSString* _urlString;
	NSURL* _baseURL;
	void* _clients;
	void* _reserved;

}

@property (nonatomic,readonly) NSURL * uniquedURL; 
@property (nonatomic,readonly) BOOL isMapURL; 
@property (nonatomic,readonly) BOOL isNewsURL; 
@property (nonatomic,readonly) BOOL isiTunesURL; 
@property (nonatomic,readonly) BOOL isAppStoreURL; 
@property (nonatomic,readonly) NSString * br_lastEditorDeviceName; 
@property (nonatomic,readonly) NSString * br_lastEditorName; 
@property (nonatomic,readonly) NSPersonNameComponents * br_lastEditorNameComponents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL ckShouldShowComposeUI; 
@property (nonatomic,readonly) BOOL ckShouldShowDigitalTouchCanvas; 
@property (nonatomic,readonly) BOOL ckAllowRetargeting; 
@property (nonatomic,readonly) NSArray * ckSuggestedReplies; 
@property (nonatomic,readonly) BOOL sf_isWebSearchURL; 
@property (nonatomic,readonly) BOOL sf_isOfflineReadingListURL; 
@property (nonatomic,readonly) LSAppLink * sf_appLink; 
@property (nonatomic,readonly) NSURL * previewItemURL; 
@property (nonatomic,readonly) NSString * previewItemTitle; 
@property (nonatomic,readonly) long long mpUniversalTrackIDType; 
@property (nonatomic,readonly) NSString * mpUniversalTrackIDBaseID; 
@property (nonatomic,readonly) BOOL ssb_hasUserInfo; 
@property (nonatomic,readonly) BOOL ssb_isSafeURL; 
@property (readonly) NSString * phoneNumber; 
@property (readonly) BOOL forceAssist; 
@property (readonly) BOOL suppressAssist; 
@property (readonly) BOOL wasAlreadyAssisted; 
@property (readonly) BOOL isEmergencyURL; 
@property (readonly) BOOL isEmergencyCallURL; 
@property (readonly) BOOL isVoicemailURL; 
@property (readonly) int callService; 
@property (readonly) NSString * originatingUIIdentifier; 
@property (readonly) int addressBookUID; 
@property (readonly) BOOL isBasebandLogURL; 
@property (setter=ls_setPreferredLocalizations:,retain) NSArray * ls_preferredLocalizations; 
@property (copy,readonly) NSArray * pathComponents; 
@property (copy,readonly) NSString * lastPathComponent; 
@property (copy,readonly) NSString * pathExtension; 
@property (copy,readonly) NSURL * URLByDeletingLastPathComponent; 
@property (copy,readonly) NSURL * URLByDeletingPathExtension; 
@property (copy,readonly) NSURL * URLByStandardizingPath; 
@property (copy,readonly) NSURL * URLByResolvingSymlinksInPath; 
@property (copy,readonly) NSData * dataRepresentation; 
@property (copy,readonly) NSString * absoluteString; 
@property (copy,readonly) NSString * relativeString; 
@property (copy,readonly) NSURL * baseURL; 
@property (copy,readonly) NSURL * absoluteURL; 
@property (copy,readonly) NSString * scheme; 
@property (copy,readonly) NSString * resourceSpecifier; 
@property (copy,readonly) NSString * host; 
@property (copy,readonly) NSNumber * port; 
@property (copy,readonly) NSString * user; 
@property (copy,readonly) NSString * password; 
@property (copy,readonly) NSString * path; 
@property (copy,readonly) NSString * fragment; 
@property (copy,readonly) NSString * parameterString; 
@property (copy,readonly) NSString * query; 
@property (copy,readonly) NSString * relativePath; 
@property (readonly) BOOL hasDirectoryPath; 
@property (readonly) const char* fileSystemRepresentation; 
@property (getter=isFileURL,readonly) BOOL fileURL; 
@property (copy,readonly) NSURL * standardizedURL; 
@property (copy,readonly) NSURL * filePathURL; 
+(id)fc_URLWithResourceID:(id)arg1 ;
+(id)fc_urlForUserDomainDocumentsDirectory;
+(id)fc_urlForUserDomainCachesDirectory;
+(id)fc_urlForUserDomainLibraryDirectory;
+(void)br_documentURLFromBookmarkableString:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)br_containerIDsWithExternalReferencesTo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)brc_fileURLWithVolumeDeviceID:(id)arg1 fileID:(id)arg2 isDirectory:(BOOL)arg3 ;
+(id)brc_fileURLWithFileDescriptor:(int)arg1 ;
+(id)URLWithDirtyString:(id)arg1 ;
+(int)classicPortForScheme:(id)arg1 ;
+(id)URLWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 uri:(id)arg4 ;
+(id)davCompatibleFilenameForFilename:(id)arg1 ;
+(id)iDiskSmallNameCompatibleNameForFilename:(id)arg1 ;
+(id)newFromSqliteValue:(MemRef)arg1 ;
+(id)termsAndConditionsURL;
+(id)ckURLForResource:(id)arg1 withExtension:(id)arg2 ;
+(id)ckURLForChatIdentifier:(id)arg1 entryBody:(id)arg2 ;
+(id)dd_URLWithPotentiallyInvalidURLString:(id)arg1 ;
+(id)safari_URLWithDataAsString:(id)arg1 ;
+(id)safari_URLWithUserTypedString:(id)arg1 ;
+(void)safari_enumeratePossibleURLsForUserTypedString:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(NSRange)safari_hostAndPortRangeFromUserTypedString:(id)arg1 ;
+(id)safari_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2 ;
+(id)URLForFacebookGraphAPIWithPath:(id)arg1 ;
+(id)URLForFacebookRESTMethod:(id)arg1 ;
+(BOOL)_isBetaSwitchEnabledForKey:(CFStringRef)arg1 ;
+(id)URLForFacebookGraphAPIWithDomain:(id)arg1 path:(id)arg2 ;
+(id)URLForFacebookPageAtPath:(id)arg1 ;
+(id)SLTwitterUpdateStatusURL;
+(id)SLTwitterUpdateMultiPartStatusURL;
+(id)SLTwitterNearbyPlacesURL;
+(id)SLTwitterFriendshipsURL;
+(id)SLTwitterFriendsURL;
+(id)SLTwitterTCoLengthURL;
+(id)SLTwitterImageLimitsURL;
+(id)SLTwitterVerifyCredentialsURL;
+(id)SLTwitterCleanupPushDestinationsURL;
+(id)SLTwitterRequestTokenURL;
+(id)SLTwitterAccessTokenURL;
+(id)SLTwitterUserInfoURL;
+(id)SLTwitterAccountSettingsURL;
+(id)SLTwitterUsersLookupURL;
+(id)SLTwitterAccountGenerateURL;
+(id)SLTwitterRetweetURLForTweetID:(id)arg1 ;
+(id)SLTwitterDirectMessageURL;
+(id)wf_inMemoryAddress;
+(id)launchQueryForValue:(id)arg1 ;
+(id)tp_inCallServiceURLWithReason:(long long)arg1 ;
+(id)ab_URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2 ;
+(id)ab_faceTimeURLWithDestinationID:(id)arg1 ;
+(id)da_URLWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 uri:(id)arg4 ;
+(id)da_URLWithDirtyString:(id)arg1 ;
+(int)da_classicPortForScheme:(id)arg1 ;
+(id)da_URLWithScheme:(id)arg1 host:(id)arg2 user:(id)arg3 port:(int)arg4 uri:(id)arg5 ;
+(id)_cnui_faceTimeVideoURLWithDestinationID:(id)arg1 contact:(id)arg2 ;
+(id)_cnui_ttyURLWithDestinationID:(id)arg1 contact:(id)arg2 ;
+(id)_cnui_ttyRelayURLWithDestinationID:(id)arg1 contact:(id)arg2 ;
+(id)_cnui_faceTimeAudioURLWithDestinationID:(id)arg1 contact:(id)arg2 ;
+(id)_cnui_telephonyURLWithDestinationID:(id)arg1 contact:(id)arg2 ;
+(id)_cnui_skypeTextURLWithDestinationID:(id)arg1 ;
+(id)_cnui_skypeVoiceURLWithDestinationID:(id)arg1 ;
+(id)_cnui_skypeVideoURLWithDestinationID:(id)arg1 ;
+(id)_cnui_messagesURLWithDestinationID:(id)arg1 contact:(id)arg2 ;
+(id)_cnui_mailURLWithDestinationID:(id)arg1 contact:(id)arg2 ;
+(id)_cnui_dialRequestURLWithDestinationID:(id)arg1 contact:(id)arg2 faceTime:(BOOL)arg3 video:(BOOL)arg4 ttyType:(long long)arg5 ;
+(id)_cnui_telephonyURLFutureWithDestinationID:(id)arg1 contact:(id)arg2 ;
+(id)_cnui_faceTimeAudioURLFutureWithDestinationID:(id)arg1 contact:(id)arg2 ;
+(id)_cnui_faceTimeVideoURLFutureWithDestinationID:(id)arg1 contact:(id)arg2 ;
+(id)_cnui_ttyURLFutureWithDestinationID:(id)arg1 contact:(id)arg2 ;
+(id)_cnui_ttyRelayURLFutureWithDestinationID:(id)arg1 contact:(id)arg2 ;
+(id)_cnui_skypeTextURLFutureWithDestinationID:(id)arg1 ;
+(id)_cnui_skypeVoiceURLFutureWithDestinationID:(id)arg1 ;
+(id)_cnui_skypeVideoURLFutureWithDestinationID:(id)arg1 ;
+(id)_cnui_messagesURLFutureWithDestinationID:(id)arg1 contact:(id)arg2 ;
+(id)_cnui_mailURLFutureWithDestinationID:(id)arg1 contact:(id)arg2 ;
+(id)URLWithAddressBookUID:(id)arg1 ;
+(id)davCompatibleFilenameForFilename:(id)arg1 ;
+(id)CDVURLWithScheme:(id)arg1 user:(id)arg2 password:(id)arg3 host:(id)arg4 port:(id)arg5 path:(id)arg6 ;
+(id)CDVDefaultPortForScheme:(id)arg1 ;
+(id)CDVURLWithScheme:(id)arg1 host:(id)arg2 port:(id)arg3 path:(id)arg4 ;
+(id)_web_URLWithWTFString:(const String*)arg1 ;
+(id)_web_URLWithWTFString:(const String*)arg1 relativeToURL:(id)arg2 ;
+(id)telephonyURLWithDestinationID:(id)arg1 promptUser:(BOOL)arg2 ;
+(id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 ;
+(id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(BOOL)arg3 suppressAssist:(BOOL)arg4 wasAssisted:(BOOL)arg5 ;
+(id)telephonyURLForVoicemail;
+(id)telephonyURLForTelEmergencyCall;
+(id)URLWithTelephoneNumber:(id)arg1 promptUser:(BOOL)arg2 ;
+(id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2 ;
+(id)URLWithTelephoneNumber:(id)arg1 ;
+(id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(BOOL)arg3 suppressAssist:(BOOL)arg4 wasAssisted:(BOOL)arg5 ;
+(id)telephonyURLWithDestinationID:(id)arg1 ;
+(id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(BOOL)arg3 suppressAssist:(BOOL)arg4 wasAssisted:(BOOL)arg5 ;
+(id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 audioOnly:(BOOL)arg3 forceAssist:(BOOL)arg4 suppressAssist:(BOOL)arg5 wasAssisted:(BOOL)arg6 ;
+(id)faceTimePromptURLWithURL:(id)arg1 ;
+(id)_faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(BOOL)arg3 ;
+(id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(BOOL)arg3 ;
+(id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1 showPrompt:(BOOL)arg2 ;
+(id)_applyFaceTimeScheme:(id)arg1 toFaceTimeURL:(id)arg2 ;
+(id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 ;
+(id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(BOOL)arg3 suppressAssist:(BOOL)arg4 wasAssisted:(BOOL)arg5 audioOnly:(BOOL)arg6 ;
+(id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1 ;
+(id)faceTimeURLWithURL:(id)arg1 ;
+(id)faceTimeLaunchForIncomingCallURL;
+(id)faceTimeShowInCallUIURL;
+(id)faceTimeURLWithDestinationID:(id)arg1 ;
+(id)_af_URLWithMessageIdentifier:(id)arg1 ;
+(id)mapsURLWithQuery:(id)arg1 ;
+(id)mapsURLWithSourceAddress:(id)arg1 destinationAddress:(id)arg2 ;
+(id)URLWithDisplayIdentifier:(id)arg1 forSearchResultDomain:(int)arg2 andIdentifier:(unsigned long long)arg3 ;
+(id)ui_URLFromExportBookmark:(id)arg1 ;
+(id)ui_incomingDirectory:(BOOL)arg1 ;
+(id)ui_cloudDocsContainerURL;
+(id)unescapedStringForString:(id)arg1 ;
+(id)_URLQueryParameterValueAllowedCharacterSet;
+(id)escapedStringForString:(id)arg1 ;
+(id)queryStringForDictionary:(id)arg1 escapedValues:(BOOL)arg2 ;
+(id)copyDictionaryForQueryString:(id)arg1 unescapedValues:(BOOL)arg2 ;
+(id)uniqueURLWithRelativePart:(id)arg1 ;
+(id)_web_URLWithUserTypedString:(id)arg1 relativeToURL:(id)arg2 ;
+(id)_webkit_URLWithUserTypedString:(id)arg1 relativeToURL:(id)arg2 ;
+(id)_web_URLWithData:(id)arg1 ;
+(id)_web_URLWithData:(id)arg1 relativeToURL:(id)arg2 ;
+(id)_web_URLWithDataAsString:(id)arg1 ;
+(id)_web_URLWithUserTypedString:(id)arg1 ;
+(id)_webkit_URLWithUserTypedString:(id)arg1 ;
+(id)_web_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2 ;
+(id)_web_uniqueWebDataURL;
+(id)_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2 ;
+(id)_URLWithData:(id)arg1 relativeToURL:(id)arg2 ;
+(id)_web_URLWithString:(id)arg1 relativeToURL:(id)arg2 ;
+(id)_web_URLWithComponents:(SCD_Struct_NS32)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)fileURLWithPathComponents:(id)arg1 ;
+(id)URLByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(BOOL*)arg4 error:(id*)arg5 ;
+(id)URLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2 ;
+(id)absoluteURLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2 ;
+(id)fileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3 ;
+(id)fileURLWithPath:(id)arg1 relativeToURL:(id)arg2 ;
+(id)fileURLWithFileSystemRepresentation:(const char*)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3 ;
+(id)URLByResolvingAliasFileAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)URLWithString:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)fileURLWithPath:(id)arg1 ;
+(id)fileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2 ;
+(id)URLWithString:(id)arg1 relativeToURL:(id)arg2 ;
+(id)resourceValuesForKeys:(id)arg1 fromBookmarkData:(id)arg2 ;
+(id)__unurl;
+(BOOL)supportsSecureCoding;
+(id)bookmarkDataWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)writeBookmarkData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)afui_hasMapItemScheme;
-(BOOL)isAppleURL;
-(BOOL)isMapURL;
-(BOOL)isiTunesURL;
-(BOOL)isAppStoreURL;
-(BOOL)isNewsURL;
-(NSURL *)uniquedURL;
-(id)queryComponents;
-(BOOL)sd_containsOrIsItemAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)sd_strictlyContainsItemAtURL:(id)arg1 error:(id*)arg2 ;
-(id)URLByReallyResolvingSymlinksInPath;
-(id)fc_resourceID;
-(BOOL)fc_isResourceURL;
-(id)br_cloudDocsContainer;
-(BOOL)br_isExternalDocumentReference;
-(id)br_URLByResolvingExternalDocumentReferenceWithError:(id*)arg1 ;
-(BOOL)br_isInMobileDocuments;
-(BOOL)br_isInTrash;
-(id)br_itemID;
-(void)br_addPhysicalProperty;
-(id)br_pathRelativeToSyncedRootURLForContainerID:(id)arg1 ;
-(void)br_bookmarkableStringWithEtag:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)br_containerIDIfIsDocumentsContainerURL;
-(BOOL)br_isInLocalHomeDirectory;
-(BOOL)br_isParentOfURL:(id)arg1 strictly:(BOOL)arg2 ;
-(id)br_pathRelativeToMobileDocuments;
-(id)br_pathRelativeToSyncedRootURL:(id)arg1 ;
-(id)br_debugDescription;
-(BOOL)_br_isInSyncedLocationStrictly:(BOOL)arg1 ;
-(BOOL)br_isParentOfURL:(id)arg1 ;
-(id)br_containerIDWithResolveInnerSharedContainerID:(BOOL)arg1 ;
-(id)br_cloudDocsContainerWithResolveInnerSharedContainerID:(BOOL)arg1 ;
-(BOOL)br_isInCloudDocsPrivateStorages;
-(id)br_realpathURL;
-(void)br_bookmarkableStringForRemoteOpeningAppWithBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)br_containerIDsWithExternalReferencesWithHandler:(/*^block*/id)arg1 ;
-(BOOL)br_isInSyncedDesktop;
-(BOOL)br_isInSyncedDocuments;
-(BOOL)br_isStrictlyInSyncedLocation;
-(BOOL)br_isInCloudDocsPrivateStoragesForRemoteDocumentVersions;
-(void)br_isConflictedWithHandler:(/*^block*/id)arg1 ;
-(BOOL)br_isInSharedDocsContainer;
-(id)br_containerIDIfIsDesktopOrDocumentsURL;
-(BOOL)br_isDocumentsContainer;
-(BOOL)br_setAccessTime:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)br_typeIdentifierWithError:(id*)arg1 ;
-(BOOL)br_wouldBeExcludedFromSync;
-(void)br_preCacheBookmarkData:(id)arg1 versionEtag:(id)arg2 ;
-(BOOL)br_mightBeBRAlias;
-(id)br_containerID;
-(BOOL)br_isInSyncedLocation;
-(id)br_physicalURL;
-(id)br_logicalURL;
-(id)br_externalDocumentPropertiesWithError:(id*)arg1 ;
-(id)br_URLByResolvingInProcessExternalDocumentReferenceWithProperties:(id)arg1 ;
-(NSString *)br_lastEditorDeviceName;
-(NSPersonNameComponents *)br_lastEditorNameComponents;
-(NSString *)br_lastEditorName;
-(id)br_addFakeConflictLoserFromItemAtURL:(id)arg1 lastEditorDeviceName:(id)arg2 error:(id*)arg3 ;
-(id)br_addFakeConflictLoserFromItemAtURL:(id)arg1 lastEditorDeviceName:(id)arg2 lastEditorUserName:(id)arg3 error:(id*)arg4 ;
-(BOOL)br_getTagNames:(id*)arg1 error:(id*)arg2 ;
-(BOOL)br_setTagNames:(id)arg1 error:(id*)arg2 ;
-(id)brc_issueSandboxExtensionOfClass:(const char*)arg1 error:(id*)arg2 ;
-(id)URLWithoutUsername;
-(id)URLWithUsername:(id)arg1 ;
-(id)initWithDirtyString:(id)arg1 ;
-(id)URLWithoutPassword;
-(BOOL)absoluteURLisEqual:(id)arg1 ;
-(id)uri;
-(BOOL)isEqualToURL:(id)arg1 ;
-(id)serverURL;
-(id)queryParameters;
-(id)URLWithUsername:(id)arg1 withPassword:(id)arg2 ;
-(id)initWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 path:(id)arg4 ;
-(id)pathWithoutTrailingRemovingSlash;
-(id)unquotedPassword;
-(id)pathWithoutDecodingAndRemovingTrailingSlash;
-(BOOL)_gkIsValidServerURL;
-(BOOL)_gkIsSecure;
-(id)_gkURLByAddingQueryParameters:(id)arg1 ;
-(id)_gkURLByReplacingSchemeWithScheme:(id)arg1 ;
-(id)_gkQueryDictionary;
-(id)cacheKeyRepresentation;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(long long)storeURLType;
-(id)fm_preferencesPathURLForDomain:(id)arg1 ;
-(id)preferencesPathURLForDomain:(id)arg1 ;
-(BOOL)_isPhoneNumberID:(id)arg1 ;
-(id)formattedFaceTimeDestinationAccount;
-(id)CNFQueryDictionary;
-(id)URLByAppendingCNFQueryDictionary:(id)arg1 ;
-(id)ckWillNotLaunchComposeUIURL;
-(BOOL)ckShouldShowComposeUI;
-(BOOL)ckShouldShowDigitalTouchCanvas;
-(BOOL)ckAllowRetargeting;
-(NSArray *)ckSuggestedReplies;
-(id)dd_phoneNumberFromTelScheme;
-(id)dd_emailFromMailtoScheme;
-(LSAppLink *)sf_appLink;
-(BOOL)sf_isWebSearchURL;
-(BOOL)sf_isOfflineReadingListURL;
-(NSURL *)previewItemURL;
-(BOOL)isStoreServicesURL;
-(id)safari_userVisibleString;
-(id)safari_canonicalURL;
-(BOOL)safari_hasScheme:(id)arg1 ;
-(id)safari_URLByReplacingSchemeWithString:(id)arg1 ;
-(BOOL)safari_isHTTPFamilyURL;
-(id)safari_userVisibleHostWithoutWWWSubdomain;
-(id)safari_originalDataAsString;
-(BOOL)safari_isDataURL;
-(id)_safari_URLByReplacingComponent:(long long)arg1 includingSeparators:(BOOL)arg2 withString:(id)arg3 ;
-(id)_safari_URLByReplacingComponent:(long long)arg1 withString:(id)arg2 ;
-(id)safari_userVisibleHost;
-(id)safari_path;
-(BOOL)safari_hasSameOriginAsURL:(id)arg1 ;
-(id)safari_URLByReplacingHostWithString:(id)arg1 ;
-(id)safari_URLByReplacingQueryWithString:(id)arg1 ;
-(id)safari_URLByDeletingPort;
-(id)safari_URLByDeletingScheme;
-(BOOL)safari_hasCharactersBeyondPath;
-(id)safari_displayNameWithTitle:(id)arg1 ;
-(BOOL)isMusicStoreURL;
-(BOOL)isAssetURL;
-(BOOL)loadingInUIWebViewWillLaunchAnotherApp;
-(BOOL)isAppStoreURL;
-(id)wf_URLWithTracking:(id)arg1 ;
-(BOOL)wf_URLHasParameter:(id)arg1 ;
-(BOOL)wf_isInMemoryAddress;
-(BOOL)tp_isInCallServiceURLWithReason:(long long)arg1 ;
-(unsigned)mf_rowID;
-(id)mf_lastPartNumber;
-(BOOL)mf_isValidAttachmentURL;
-(id)mf_partNumbers;
-(BOOL)mf_isResourceURL;
-(id)mf_firstPartNumber;
-(id)da_leastInfoStringRepresentationRelativeToParentURL:(id)arg1 ;
-(id)da_urlBySettingUsername:(id)arg1 ;
-(id)da_rawPath;
-(id)da_urlBySettingScheme:(id)arg1 keepUsername:(BOOL)arg2 ;
-(id)da_urlBySettingHost:(id)arg1 keepUsername:(BOOL)arg2 ;
-(id)da_urlBySettingPort:(id)arg1 keepUsername:(BOOL)arg2 ;
-(id)da_urlBySettingPath:(id)arg1 keepUsername:(BOOL)arg2 ;
-(BOOL)da_isEqualToDAVURL:(id)arg1 ;
-(id)da_urlByRemovingUsername;
-(id)da_urlBySettingScheme:(id)arg1 ;
-(id)da_urlBySettingHost:(id)arg1 ;
-(id)da_urlBySettingPort:(id)arg1 ;
-(id)da_urlBySettingPath:(id)arg1 ;
-(id)da_pathWithoutTrailingRemovingSlash;
-(id)URLWithUsername:(id)arg1 withPassword:(id)arg2 ;
-(id)URLByRemovingLastPathComponent;
-(id)URLWithoutUsername;
-(id)URLWithUsername:(id)arg1 ;
-(id)uri;
-(id)fileCacheStableDataRepresentation;
-(long long)_mpUTITypeFromMRUTIType:(unsigned)arg1 ;
-(long long)mpUniversalTrackIDType;
-(NSString *)mpUniversalTrackIDBaseID;
-(BOOL)_webBookmarks_isHTTPFamilyURL;
-(BOOL)isEqualToURL:(id)arg1 ;
-(id)serverURL;
-(id)queryParameters;
-(id)initWithCalDirtyString:(id)arg1 ;
-(BOOL)compareToLocalURL:(id)arg1 ;
-(id)hostWithoutWWW;
-(id)URLWithUsername:(id)arg1 withPassword:(id)arg2 ;
-(id)initWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 path:(id)arg4 ;
-(id)pathWithoutTrailingRemovingSlash;
-(id)pathDecodedAndWithoutTrailingSlashRemoved;
-(id)unquotedPassword;
-(BOOL)isOnRemoteFileSystem;
-(BOOL)compareToLocalString:(id)arg1 ;
-(BOOL)isEqualToURLIgnoringScheme:(id)arg1 ;
-(id)CDVServerURL;
-(id)CDVRawLastPathComponent;
-(id)CDVURLWithPassword:(id)arg1 ;
-(BOOL)CDVIsSafeRedirectForRequestURL:(id)arg1 ;
-(id)initWithCDVScheme:(id)arg1 user:(id)arg2 password:(id)arg3 host:(id)arg4 port:(id)arg5 path:(id)arg6 parameterString:(id)arg7 query:(id)arg8 fragment:(id)arg9 ;
-(id)CDVURLWithScheme:(id)arg1 userandpass:(id)arg2 host:(id)arg3 port:(id)arg4 path:(id)arg5 parameters:(id)arg6 encodePercents:(BOOL)arg7 ;
-(id)CDVPassword;
-(id)CDVRawLastPathComponentPreservingEscapes;
-(id)CDVServerURLWithPath:(BOOL)arg1 ;
-(id)CDVFileSystemSafePath;
-(id)CDVURLWithUser:(id)arg1 ;
-(BOOL)CDVIsEqualToURL:(id)arg1 ;
-(id)CDVRawPath;
-(id)CDVURLWithPath:(id)arg1 ;
-(id)CDVfixedURLByAppendingPathComponent:(id)arg1 ;
-(id)CDVURLByDeletingLastPathComponent;
-(BOOL)cs_addDocumentTracking;
-(BOOL)cs_isInMobileDocuments;
-(void)chmod:(unsigned short)arg1 ;
-(id)gs_issueExtension:(const char*)arg1 error:(id*)arg2 ;
-(id)gs_issueReadExtensionIfNeededForPid:(int)arg1 ;
-(id)gs_URLByUpdatingPathExtensionWithPathOrURL:(id)arg1 ;
-(BOOL)ssb_isSafeURL;
-(BOOL)ssb_hasUserInfo;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(String*)_web_originalDataAsWTFString;
-(id)plistArchiveWithCPLArchiver:(id)arg1 ;
-(id)initWithCPLArchiver:(id)arg1 ;
-(id)CKXPCSuitableString;
-(id)CKSharingURLSubscheme;
-(BOOL)hasTelephonyScheme;
-(NSString *)phoneNumber;
-(id)_destinationIDConvertingNumbersToLatin:(BOOL)arg1 ;
-(id)_mobilePhoneQueryParameters;
-(BOOL)isEmergencyCallURL;
-(BOOL)_dialAssistBooleanQueryParameterValueForKey:(id)arg1 ;
-(BOOL)_hasScheme:(id)arg1 ;
-(BOOL)isTelephonyPromptURL;
-(BOOL)isVoicemailURL;
-(id)_mobilePhonePathParameters;
-(int)addressBookUID;
-(NSString *)originatingUIIdentifier;
-(BOOL)forceAssist;
-(BOOL)suppressAssist;
-(BOOL)wasAlreadyAssisted;
-(id)numberQualifiedForAddressBook;
-(BOOL)isWebSafeTelephoneURL;
-(id)webSafeTelephoneURL;
-(BOOL)isBasebandLogURL;
-(BOOL)isEmergencyURL;
-(id)telephonyParameterDictionary;
-(int)callService;
-(BOOL)isTelephonyURL;
-(id)formattedPhoneNumber;
-(BOOL)isFaceTimeURL;
-(BOOL)isFaceTimeAudioURL;
-(BOOL)isFaceTimePromptURL;
-(BOOL)isFaceTimeAudioPromptURL;
-(BOOL)isLaunchForIncomingCallURL;
-(BOOL)isShowInCallUIURL;
-(id)faceTimeDestinationAccount;
-(BOOL)_isPhoneNumberID:(id)arg1 ;
-(BOOL)hasNoPromptOption;
-(BOOL)isDialCallURL;
-(id)queryParameters;
-(id)tuQueryParameters;
-(id)URLWithNewQueryParameterDictionary:(id)arg1 ;
-(id)URLBySettingQueryParameterValue:(id)arg1 forKey:(id)arg2 ;
-(id)URLByDeletingQueryParameterWithKey:(id)arg1 ;
-(id)__imURLByAppendingQueryString:(id)arg1 ;
-(id)sf_asPunchout;
-(BOOL)isAMOSIdentifier;
-(BOOL)isAMOSCommittedIdentifier;
-(id)_af_messageIdentifierValue;
-(BOOL)isInternalUIKitURL;
-(id)searchResultIdentifier;
-(id)searchResultDomain;
-(void)_domain:(id*)arg1 subdomain:(id*)arg2 ;
-(BOOL)_isGoogleMapsDomain:(id)arg1 subdomain:(id)arg2 path:(id)arg3 queryKeysAndValues:(id)arg4 ;
-(BOOL)isGoogleMapsURL;
-(id)phobosURL;
-(id)itmsURL;
-(id)appleStoreURL;
-(id)radarWebURL;
-(BOOL)isSpringboardHandledURL;
-(BOOL)isWebcalURL;
-(BOOL)isAccountURL;
-(BOOL)isJavaScriptURL;
-(BOOL)isHTTPOrHTTPSURL;
-(void)ui_scheduleForCleanup;
-(BOOL)ui_hasReadSandboxExtended;
-(id)ui_issueSandboxExtensionOfClass:(const char*)arg1 error:(id*)arg2 ;
-(BOOL)ui_hasSandboxExtendedForClass:(const char*)arg1 ;
-(BOOL)ui_isFileProviderURL;
-(id)ui_issueReadSandboxExtensionWithError:(id*)arg1 ;
-(id)ui_issueReadWriteSandboxExtensionWithError:(id*)arg1 ;
-(void)ui_setIsFileProviderURL:(BOOL)arg1 ;
-(BOOL)ui_canOpenInPlace;
-(BOOL)ui_isUnfulfilledPromiseURL;
-(id)ui_bookmarkForExportWithError:(id*)arg1 ;
-(id)ui_resolveOnDiskBookmarkAndPromise;
-(id)ui_downloadOperationForActivity:(id)arg1 ;
-(id)sanitizedURL;
-(id)urlByReplacingSchemeWithScheme:(id)arg1 ;
-(void)enumerateQueryWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isSafeExternalURL;
-(id)schemeSwizzledURL;
-(id)URLByAppendingQueryParameter:(id)arg1 value:(id)arg2 ;
-(id)copyQueryStringDictionaryWithUnescapedValues:(BOOL)arg1 ;
-(id)urlBySettingQueryStringDictionary:(id)arg1 ;
-(id)_webkit_URLFromURLOrSchemelessFileURL;
-(BOOL)_webkit_isFileURL;
-(id)_web_schemeData;
-(id)_web_hostData;
-(id)_web_originalData;
-(BOOL)_web_isEmpty;
-(const char*)_web_URLCString;
-(id)_web_URLByRemovingUserInfo;
-(id)_web_schemeSeparatorWithoutColon;
-(id)_web_dataForURLComponentType:(long long)arg1 ;
-(id)_webkit_suggestedFilenameWithMIMEType:(id)arg1 ;
-(id)_web_userVisibleString;
-(id)_webkit_URLByRemovingFragment;
-(id)_webkit_scriptIfJavaScriptURL;
-(id)_webkit_canonicalize;
-(id)_web_hostString;
-(id)_web_originalDataAsString;
-(BOOL)_webkit_isJavaScriptURL;
-(id)_geo_portionAfterHostname;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(BOOL)isStoreServicesURL;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLType;
-(id)un_resourceTypeHint;
-(unsigned long long)un_fileSize;
-(NSArray *)ls_preferredLocalizations;
-(void)ls_setPreferredLocalizations:(id)arg1 ;
-(id)fmfURL;
-(id)fmipURL;
-(id)photosURL;
-(id)iCloudEmailPrefsURL;
-(id)keynoteLiveURL;
-(id)iCloudSharingURL;
-(BOOL)LS_pathHasCaseInsensitivePrefix:(id)arg1 ;
-(id)keynoteLiveURL_noFragment;
-(id)LS_nooverride:(id)arg1 ;
-(id)iCloudSharingURL_noFragment;
-(BOOL)conformsToOverridePatternWithKey:(id)arg1 ;
-(id)iTunesStoreURL;
-(id)mapsURL;
-(BOOL)isiWorkURL;
-(id)iWorkApplicationName;
-(id)iWorkDocumentName;
-(id)_hostString;
-(id)_web_URLByRemovingLastPathComponent_nowarn;
-(id)_web_URLByRemovingUserAndPath_nowarn;
-(id)_web_URLByRemovingUserAndQueryAndFragment_nowarn;
-(id)_URLByEscapingSpacesAndControlChars;
-(BOOL)_web_isJavaScriptURL;
-(SCD_Struct_NS32)_web_URLComponents;
-(id)_web_scriptIfJavaScriptURL;
-(id)_web_suggestedFilenameWithMIMEType:(id)arg1 ;
-(NSURL *)URLByStandardizingPath;
-(NSString *)lastPathComponent;
-(id)URLByAppendingPathComponent:(id)arg1 ;
-(NSArray *)pathComponents;
-(id)URLByAppendingPathComponent:(id)arg1 isDirectory:(BOOL)arg2 ;
-(NSString *)pathExtension;
-(NSURL *)URLByDeletingLastPathComponent;
-(NSURL *)URLByDeletingPathExtension;
-(id)URLByAppendingPathExtension:(id)arg1 ;
-(NSURL *)URLByResolvingSymlinksInPath;
-(unsigned long long)_cfTypeID;
-(CFURLRef)_cfurl;
-(void)_freeClients;
-(BOOL)_isAbsolute;
-(id)initWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2 ;
-(id)initAbsoluteURLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2 ;
-(id)initFileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3 ;
-(id)initFileURLWithPath:(id)arg1 relativeToURL:(id)arg2 ;
-(id)initFileURLWithFileSystemRepresentation:(const char*)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3 ;
-(id)initByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(BOOL*)arg4 error:(id*)arg5 ;
-(id)initByResolvingAliasFileAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(CFDictionaryRef)_clientsCreatingIfNecessary:(BOOL)arg1 ;
-(id)initWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3 ;
-(NSString *)parameterString;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isMemberOfClass:(Class)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)scheme;
-(BOOL)isFileURL;
-(NSString *)query;
-(NSString *)path;
-(const char*)fileSystemRepresentation;
-(id)initFileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_isDeallocating;
-(id)initWithString:(id)arg1 ;
-(NSString *)absoluteString;
-(NSString *)host;
-(NSString *)resourceSpecifier;
-(NSString *)fragment;
-(id)initFileURLWithPath:(id)arg1 ;
-(BOOL)_tryRetain;
-(BOOL)getFileSystemRepresentation:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(NSURL *)absoluteURL;
-(NSURL *)standardizedURL;
-(NSURL *)baseURL;
-(NSString *)relativeString;
-(NSNumber *)port;
-(BOOL)hasDirectoryPath;
-(NSString *)user;
-(NSString *)password;
-(NSData *)dataRepresentation;
-(NSString *)relativePath;
-(id)initWithString:(id)arg1 relativeToURL:(id)arg2 ;
-(long long)_promiseExtensionConsume;
-(void)_promiseExtensionRelease:(long long)arg1 ;
-(id)_fixedUpSideFaultError:(id)arg1 ;
-(void)_performWithPhysicalURL:(/*^block*/id)arg1 ;
-(id)_valueFromFaultDictionary:(id)arg1 forKey:(id)arg2 ;
-(BOOL)checkPromisedItemIsReachableAndReturnError:(id*)arg1 ;
-(id)promisedItemResourceValuesForKeys:(id)arg1 error:(id*)arg2 ;
-(BOOL)getPromisedItemResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3 ;
-(BOOL)_isSafeFileForBackgroundUpload:(int)arg1 ;
-(BOOL)_isSafeDirectoryForDownloads:(int)arg1 ;
-(id)bookmarkDataWithAliasRecord:(id)arg1 ;
-(BOOL)checkResourceIsReachableAndReturnError:(id*)arg1 ;
-(BOOL)isFileReferenceURL;
-(NSURL *)filePathURL;
-(id)bookmarkDataWithOptions:(unsigned long long)arg1 includingResourceValuesForKeys:(id)arg2 relativeToURL:(id)arg3 error:(id*)arg4 ;
-(void)setTemporaryResourceValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)startAccessingSecurityScopedResource;
-(void)stopAccessingSecurityScopedResource;
-(BOOL)getResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3 ;
-(id)resourceValuesForKeys:(id)arg1 error:(id*)arg2 ;
-(id)fileReferenceURL;
-(BOOL)setResourceValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)setResourceValues:(id)arg1 error:(id*)arg2 ;
-(void)removeCachedResourceValueForKey:(id)arg1 ;
-(void)removeAllCachedResourceValues;
@end

