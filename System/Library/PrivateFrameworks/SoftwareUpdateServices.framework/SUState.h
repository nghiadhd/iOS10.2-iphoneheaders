/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSKeyedUnarchiverDelegate.h>

@class SUDownload, SUDescriptor, NSDate, NSString, NSDictionary, _SUAutoInstallOperationModel;

@interface SUState : NSObject <NSKeyedUnarchiverDelegate> {

	SUDownload* _lastDownload;
	SUDescriptor* _lastScannedDescriptor;
	SUDescriptor* _currentDescriptor;
	SUDescriptor* _failedPatchDescriptor;
	NSDate* _lastScannedDescriptorTime;
	NSDate* _scheduledManualDownloadWifiPeriodEndTime;
	NSDate* _scheduledAutodownloadWifiPeriodEndTime;
	NSDate* _scheduledAutodownloadPolicyChangeTime;
	BOOL _autodownloadNeedsOneTimeRetry;
	BOOL _stashbagPersisted;
	NSString* _lastProductVersion;
	NSString* _lastProductBuild;
	NSString* _lastProductType;
	NSString* _lastReleaseType;
	NSDictionary* _unlockCallbacks;
	_SUAutoInstallOperationModel* _lastAutoInstallOperationModel;
	BOOL _manifestSubmitted;

}

@property (nonatomic,retain) _SUAutoInstallOperationModel * lastAutoInstallOperationModel;              //@synthesize lastAutoInstallOperationModel=_lastAutoInstallOperationModel - In the implementation block
@property (nonatomic,copy) SUDownload * lastDownload;                                                   //@synthesize lastDownload=_lastDownload - In the implementation block
@property (nonatomic,copy) SUDescriptor * lastScannedDescriptor;                                        //@synthesize lastScannedDescriptor=_lastScannedDescriptor - In the implementation block
@property (nonatomic,copy) SUDescriptor * currentDescriptor;                                            //@synthesize currentDescriptor=_currentDescriptor - In the implementation block
@property (nonatomic,copy) SUDescriptor * failedPatchDescriptor;                                        //@synthesize failedPatchDescriptor=_failedPatchDescriptor - In the implementation block
@property (nonatomic,retain) NSDate * lastScannedDescriptorTime;                                        //@synthesize lastScannedDescriptorTime=_lastScannedDescriptorTime - In the implementation block
@property (nonatomic,retain) NSDate * scheduledManualDownloadWifiPeriodEndTime;                         //@synthesize scheduledManualDownloadWifiPeriodEndTime=_scheduledManualDownloadWifiPeriodEndTime - In the implementation block
@property (nonatomic,retain) NSDate * scheduledAutodownloadWifiPeriodEndTime;                           //@synthesize scheduledAutodownloadWifiPeriodEndTime=_scheduledAutodownloadWifiPeriodEndTime - In the implementation block
@property (nonatomic,retain) NSDate * scheduledAutodownloadPolicyChangeTime;                            //@synthesize scheduledAutodownloadPolicyChangeTime=_scheduledAutodownloadPolicyChangeTime - In the implementation block
@property (assign,nonatomic) BOOL autodownloadNeedsOneTimeRetry;                                        //@synthesize autodownloadNeedsOneTimeRetry=_autodownloadNeedsOneTimeRetry - In the implementation block
@property (assign,nonatomic) BOOL stashbagPersisted;                                                    //@synthesize stashbagPersisted=_stashbagPersisted - In the implementation block
@property (nonatomic,retain) NSString * lastProductVersion;                                             //@synthesize lastProductVersion=_lastProductVersion - In the implementation block
@property (nonatomic,retain) NSString * lastProductBuild;                                               //@synthesize lastProductBuild=_lastProductBuild - In the implementation block
@property (nonatomic,retain) NSString * lastProductType;                                                //@synthesize lastProductType=_lastProductType - In the implementation block
@property (nonatomic,retain) NSString * lastReleaseType;                                                //@synthesize lastReleaseType=_lastReleaseType - In the implementation block
@property (nonatomic,retain) NSDictionary * unlockCallbacks;                                            //@synthesize unlockCallbacks=_unlockCallbacks - In the implementation block
@property (assign,nonatomic) BOOL manifestSubmitted;                                                    //@synthesize manifestSubmitted=_manifestSubmitted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentState;
+(id)statePath;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)load;
-(void)save;
-(SUDescriptor *)failedPatchDescriptor;
-(void)setLastScannedDescriptor:(SUDescriptor *)arg1 ;
-(void)setLastScannedDescriptorTime:(NSDate *)arg1 ;
-(void)setCurrentDescriptor:(SUDescriptor *)arg1 ;
-(void)setFailedPatchDescriptor:(SUDescriptor *)arg1 ;
-(void)setScheduledManualDownloadWifiPeriodEndTime:(NSDate *)arg1 ;
-(void)setScheduledAutodownloadWifiPeriodEndTime:(NSDate *)arg1 ;
-(void)setScheduledAutodownloadPolicyChangeTime:(NSDate *)arg1 ;
-(void)setAutodownloadNeedsOneTimeRetry:(BOOL)arg1 ;
-(void)setStashbagPersisted:(BOOL)arg1 ;
-(void)setLastDownload:(SUDownload *)arg1 ;
-(void)setLastAutoInstallOperationModel:(_SUAutoInstallOperationModel *)arg1 ;
-(void)setUnlockCallbacks:(NSDictionary *)arg1 ;
-(void)resetDownloadAndScanHistory;
-(void)setLastProductVersion:(NSString *)arg1 ;
-(void)setLastProductBuild:(NSString *)arg1 ;
-(void)setLastProductType:(NSString *)arg1 ;
-(void)setLastReleaseType:(NSString *)arg1 ;
-(id)_stateAsDictionary;
-(SUDownload *)lastDownload;
-(SUDescriptor *)lastScannedDescriptor;
-(NSDate *)lastScannedDescriptorTime;
-(SUDescriptor *)currentDescriptor;
-(NSDate *)scheduledManualDownloadWifiPeriodEndTime;
-(NSDate *)scheduledAutodownloadWifiPeriodEndTime;
-(NSDate *)scheduledAutodownloadPolicyChangeTime;
-(BOOL)autodownloadNeedsOneTimeRetry;
-(BOOL)stashbagPersisted;
-(NSString *)lastProductVersion;
-(NSString *)lastProductBuild;
-(NSString *)lastProductType;
-(NSString *)lastReleaseType;
-(_SUAutoInstallOperationModel *)lastAutoInstallOperationModel;
-(void)resetAllHistory;
-(NSDictionary *)unlockCallbacks;
-(BOOL)manifestSubmitted;
-(void)setManifestSubmitted:(BOOL)arg1 ;
-(Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3 ;
@end

