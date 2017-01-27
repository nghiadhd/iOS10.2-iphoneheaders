/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/XPCServices/com.apple.MobileInstallationHelperService.xpc/com.apple.MobileInstallationHelperService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.MobileInstallationHelperService/com.apple.MobileInstallationHelperService-Structs.h>
#import <com.apple.MobileInstallationHelperService/MIBundle.h>

@class MIBundleContainer, NSError, MIEmbeddedWatchBundle, MICodeSigningInfo, NSString, NSURL, NSArray;

@interface MIExecutableBundle : MIBundle {

	CFBundleRef _cfBundleInstance;
	MIBundleContainer* _bundleContainer;
	unsigned long long _codeSignatureVerificationState;
	NSError* _wk1AppBundleError;
	MIEmbeddedWatchBundle* _wk1AppBundle;
	NSError* _wk2AppBundleError;
	MIEmbeddedWatchBundle* _wk2AppBundle;
	MICodeSigningInfo* _codeSigningInfo;
	NSError* _codeSigningInfoError;

}

@property (nonatomic,retain) NSError * wk1AppBundleError;                                      //@synthesize wk1AppBundleError=_wk1AppBundleError - In the implementation block
@property (nonatomic,retain) MIEmbeddedWatchBundle * wk1AppBundle;                             //@synthesize wk1AppBundle=_wk1AppBundle - In the implementation block
@property (nonatomic,retain) NSError * wk2AppBundleError;                                      //@synthesize wk2AppBundleError=_wk2AppBundleError - In the implementation block
@property (nonatomic,retain) MIEmbeddedWatchBundle * wk2AppBundle;                             //@synthesize wk2AppBundle=_wk2AppBundle - In the implementation block
@property (nonatomic,retain) MICodeSigningInfo * codeSigningInfo;                              //@synthesize codeSigningInfo=_codeSigningInfo - In the implementation block
@property (nonatomic,retain) NSError * codeSigningInfoError;                                   //@synthesize codeSigningInfoError=_codeSigningInfoError - In the implementation block
@property (assign,nonatomic,__weak) MIBundleContainer * bundleContainer;                       //@synthesize bundleContainer=_bundleContainer - In the implementation block
@property (nonatomic,copy,readonly) NSString * executableName; 
@property (nonatomic,readonly) NSURL * executableURL; 
@property (nonatomic,readonly) NSURL * rootSinfURL; 
@property (nonatomic,readonly) NSURL * rootSuppURL; 
@property (nonatomic,readonly) NSURL * rootSupfURL; 
@property (nonatomic,readonly) BOOL needsSinf; 
@property (nonatomic,readonly) BOOL hasSinf; 
@property (nonatomic,readonly) long long dataContainerContentClass; 
@property (nonatomic,readonly) unsigned maxLinkedSDKVersion; 
@property (nonatomic,readonly) BOOL hasWatchGlance; 
@property (nonatomic,readonly) BOOL hasWatchCustomNotification; 
@property (nonatomic,readonly) unsigned char watchKitVersion; 
@property (nonatomic,readonly) BOOL isWatchKitApp; 
@property (nonatomic,readonly) unsigned long long codeSignatureVerificationState;              //@synthesize codeSignatureVerificationState=_codeSignatureVerificationState - In the implementation block
@property (nonatomic,copy,readonly) NSArray * vpnPluginIdentifiers; 
@property (nonatomic,readonly) Class dataContainerClass; 
+(id)bundlesInParentBundle:(id)arg1 subDirectory:(id)arg2 matchingPredicate:(/*^block*/id)arg3 error:(id*)arg4 ;
-(id)codeSigningInfoByValidatingResources:(BOOL)arg1 performingOnlineAuthorization:(BOOL)arg2 ignoringCachedSigningInfo:(BOOL)arg3 error:(id*)arg4 ;
-(id)dataContainerCreatingIfNeeded:(BOOL)arg1 makeLive:(BOOL)arg2 created:(BOOL*)arg3 error:(id*)arg4 ;
-(id)watchKitAppBundleForWKVersionOrEarler:(unsigned char)arg1 error:(id*)arg2 ;
-(void)setBundleParentDirectoryURL:(id)arg1 ;
-(id)dataContainerWithError:(id*)arg1 ;
-(Class)dataContainerClass;
-(BOOL)updateSinfWithData:(id)arg1 error:(id*)arg2 ;
-(id)fairPlaySinfInfoWithError:(id*)arg1 ;
-(id)initWithBundleInContainer:(id)arg1 withExtension:(id)arg2 error:(id*)arg3 ;
-(void)setBundleContainer:(MIBundleContainer *)arg1 ;
-(unsigned)maxLinkedSDKVersion;
-(BOOL)needsDataContainer;
-(MIEmbeddedWatchBundle *)wk1AppBundle;
-(MIEmbeddedWatchBundle *)wk2AppBundle;
-(id)uniqueInstallIDWithError:(id*)arg1 ;
-(id)setUniqueInstallIDWithError:(id*)arg1 ;
-(unsigned long long)codeSignatureVerificationState;
-(long long)dataContainerContentClass;
-(MICodeSigningInfo *)codeSigningInfo;
-(NSError *)codeSigningInfoError;
-(id)_codeSigningInfoFromMCM;
-(void)setCodeSigningInfo:(MICodeSigningInfo *)arg1 ;
-(BOOL)_useInternalValidation;
-(void)setCodeSigningInfoError:(NSError *)arg1 ;
-(id)_dataContainerCreatingIfNeeded:(BOOL)arg1 makeLive:(BOOL)arg2 checkIfNeeded:(BOOL)arg3 created:(BOOL*)arg4 error:(id*)arg5 ;
-(id)_sinfSubPaths;
-(NSURL *)rootSinfURL;
-(id)sinfURLsWithError:(id*)arg1 ;
-(BOOL)_writeSinfData:(id)arg1 toURLs:(id)arg2 error:(id*)arg3 ;
-(NSURL *)rootSuppURL;
-(NSURL *)rootSupfURL;
-(BOOL)hasSinf;
-(BOOL)_hasResource:(id)arg1 withExtension:(id)arg2 ;
-(id)watchKitV1AppBundleWithError:(id*)arg1 ;
-(id)watchKitV2AppBundleWithError:(id*)arg1 ;
-(NSError *)wk1AppBundleError;
-(void)setWk1AppBundle:(MIEmbeddedWatchBundle *)arg1 ;
-(void)setWk1AppBundleError:(NSError *)arg1 ;
-(NSError *)wk2AppBundleError;
-(void)setWk2AppBundle:(MIEmbeddedWatchBundle *)arg1 ;
-(void)setWk2AppBundleError:(NSError *)arg1 ;
-(id)lsInstallTypeWithError:(id*)arg1 ;
-(BOOL)setLSInstallType:(id)arg1 error:(id*)arg2 ;
-(id)uniqueInstallIDSettingIfNotSetWithError:(id*)arg1 ;
-(BOOL)updateMCMWithCodeSigningInfoWithError:(id*)arg1 ;
-(void)installEmbeddedProvisioningProfileWithProgress:(/*^block*/id)arg1 ;
-(BOOL)hasNoConflictsWithOtherInstalledEntitiesForSigningInfo:(id)arg1 error:(id*)arg2 ;
-(NSArray *)vpnPluginIdentifiers;
-(BOOL)makeExecutableWithError:(id*)arg1 ;
-(BOOL)replicateRootSinfWithError:(id*)arg1 ;
-(void)removeSinf;
-(BOOL)needsSinf;
-(BOOL)validateSinfWithError:(id*)arg1 ;
-(BOOL)hasWatchCustomNotification;
-(BOOL)hasWatchGlance;
-(BOOL)hasOnlyAllowedWatchKitAppInfoPlistKeysForWatchKitVersion:(unsigned char)arg1 error:(id*)arg2 ;
-(MIBundleContainer *)bundleContainer;
-(NSURL *)executableURL;
-(unsigned char)watchKitVersion;
-(NSString *)executableName;
-(void)dealloc;
-(BOOL)_validateWithError:(id*)arg1 ;
-(BOOL)isWatchKitApp;
@end

