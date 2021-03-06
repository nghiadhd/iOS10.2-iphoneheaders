/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UNSNotificationRepositoryObserver.h>
#import <libobjc.A.dylib/BBRemoteDataProvider.h>

@protocol OS_dispatch_queue;
@class NSString, BSCFBundle, NSURL, UNSApplicationLauncher, UNSNotificationRepository, UNSNotificationCategoryRepository, UNSAttachmentsService, BBDataProviderProxy, NSObject, NSMutableDictionary;

@interface UNSDefaultDataProvider : NSObject <UNSNotificationRepositoryObserver, BBRemoteDataProvider> {

	NSString* _sectionID;
	NSString* _displayName;
	BSCFBundle* _appBundle;
	NSURL* _dataContainerURL;
	UNSApplicationLauncher* _appLauncher;
	UNSNotificationRepository* _notificationRepository;
	UNSNotificationCategoryRepository* _categoryRepository;
	UNSAttachmentsService* _attachmentsService;
	BBDataProviderProxy* _proxy;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _primaryAttachments;
	NSMutableDictionary* _primaryAttachmentMetadata;

}

@property (nonatomic,retain) BBDataProviderProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id)sortDescriptors;
-(BBDataProviderProxy *)proxy;
-(BOOL)_isPushDataProvider;
-(id)_sortKey;
-(void)setProxy:(BBDataProviderProxy *)arg1 ;
-(id)sectionIdentifier;
-(id)defaultSectionInfo;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)sectionParameters;
-(id)primaryAttachmentDataForRecordID:(id)arg1 ;
-(id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2 ;
-(float)attachmentAspectRatioForRecordID:(id)arg1 ;
-(void)dataProviderDidLoad;
-(void)noteSectionInfoDidChange:(id)arg1 ;
-(void)handleBulletinActionResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)syncsBulletinDismissal;
-(id)sectionDisplayName;
-(void)notificationRepository:(id)arg1 didPerformUpdates:(id)arg2 forBundleIdentifier:(id)arg3 ;
-(void)setApplicationDescription:(id)arg1 ;
-(id)_defaultActionWithTitle:(id)arg1 ;
-(id)_categoryForIdentifier:(id)arg1 ;
-(id)_dismissActionForCategory:(id)arg1 ;
-(id)_actionsForNormalLayoutForCategory:(id)arg1 ;
-(id)_actionsForCompactLayoutForCategory:(id)arg1 ;
-(id)_pathForSoundName:(id)arg1 ;
-(void)_addAttachments:(id)arg1 toBulletinRequest:(id)arg2 ;
-(BOOL)_isResourceValidForPath:(id)arg1 withContainerPath:(id)arg2 ;
-(id)_UNActionsForCompactLayoutForCategory:(id)arg1 ;
-(id)_BBActionsFromUIUserNotificationActions:(id)arg1 ;
-(id)_UNActionsForNormalLayoutForCategory:(id)arg1 ;
-(id)_BBActionFromUIUserNotificationAction:(id)arg1 ;
-(unsigned long long)_BBActivationModeForUNAction:(id)arg1 ;
-(long long)_BBActionBehaviorForUNAction:(id)arg1 ;
-(id)_BBActionBehaviorParametersForUNAction:(id)arg1 ;
-(BOOL)_isAuthenticationRequiredForUNAction:(id)arg1 ;
-(BOOL)_isDestructiveForUNAction:(id)arg1 ;
-(id)notificationRecords;
-(id)_queue_bulletinForNotification:(id)arg1 ;
-(id)_allBulletinsWithMaxCount:(unsigned long long)arg1 sinceDate:(id)arg2 ;
-(void)_handleBulletinActionResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_unachiveNotificationFromData:(id)arg1 ;
-(void)_queue_notificationRepositoryDidPerformUpdates:(id)arg1 ;
-(void)_queue_addBulletinForNotification:(id)arg1 ;
-(void)_setBadgeForNotification:(id)arg1 ;
-(void)_queue_withdrawBulletinForNotification:(id)arg1 ;
-(unsigned long long)_destinationsForNotification:(id)arg1 ;
-(void)_logNotification:(id)arg1 ;
-(BOOL)_allowInCarPlayForCategoryIdentifier:(id)arg1 ;
-(id)initWithApplicationDescription:(id)arg1 applicationLauncher:(id)arg2 categoryRepository:(id)arg3 notificationRepository:(id)arg4 attachmentsService:(id)arg5 queue:(id)arg6 ;
-(void)uninstall;
-(id)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(unsigned long long)arg1 lastClearedInfo:(id)arg2 ;
-(void)_queue_modifyBulletinForNotification:(id)arg1 ;
@end

