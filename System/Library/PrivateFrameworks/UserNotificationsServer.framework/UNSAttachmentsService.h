/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UNSNotificationRepositoryObserver.h>
#import <libobjc.A.dylib/UNSPendingNotificationRepositoryObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, UNSAttachmentsRepository, UNSNotificationRepository, UNSNotificationSchedulingService, UNSPendingNotificationRepository, NSString;

@interface UNSAttachmentsService : NSObject <UNSNotificationRepositoryObserver, UNSPendingNotificationRepositoryObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	UNSAttachmentsRepository* _attachmentsRepository;
	UNSNotificationRepository* _notificationRepository;
	UNSNotificationSchedulingService* _notificationSchedulingService;
	UNSPendingNotificationRepository* _pendingNotificationRepository;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_defaultRepositoryDirectory;
+(id)_stagingDirectory;
+(id)_attachmentURLsRemovedByReplaceUpdate:(id)arg1 ;
+(id)_notificationIdentifiersForNotificationRecords:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)_beginObservingNotificationChanges;
-(void)_queue_ensureIntegrityWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_notificationIdentifiersForBundleIdentifier:(id)arg1 replyOnQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_queue_resolveAttachmentsForRequest:(id)arg1 bundleIdentifier:(id)arg2 bundleProxy:(id)arg3 error:(id*)arg4 ;
-(id)_queue_resolvedURLForNotificationAttachment:(id)arg1 request:(id)arg2 bundleIdentifier:(id)arg3 bundleProxy:(id)arg4 error:(id*)arg5 ;
-(id)_queue_validatedRepositoryURLForNotificationAttachment:(id)arg1 request:(id)arg2 bundleIdentifier:(id)arg3 bundleProxy:(id)arg4 error:(id*)arg5 ;
-(id)_queue_resolvedFileURLForNotificationAttachment:(id)arg1 request:(id)arg2 bundleIdentifier:(id)arg3 bundleProxy:(id)arg4 error:(id*)arg5 ;
-(id)_temporaryAttachmentFileURL;
-(void)_queue_deleteAttachmentDataForNotificationRecord:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)_queue_getAttachmentDataForAttachment:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_queue_applicationsDidUninstall:(id)arg1 ;
-(void)_queue_applicationDidUninstall:(id)arg1 ;
-(void)_repositoryDidPerformUpdates:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)notificationRepository:(id)arg1 didPerformUpdates:(id)arg2 forBundleIdentifier:(id)arg3 ;
-(void)pendingNotificationRepository:(id)arg1 didPerformUpdates:(id)arg2 forBundleIdentifier:(id)arg3 ;
-(id)initWithNotificationRepository:(id)arg1 notificationSchedulingService:(id)arg2 pendingNotificationRepository:(id)arg3 ;
-(void)ensureIntegrityWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)resolveAttachmentsForRequest:(id)arg1 bundleIdentifier:(id)arg2 bundleProxy:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)resolveAttachmentsSkippingErrorsForRequest:(id)arg1 bundleIdentifier:(id)arg2 bundleProxy:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_queue_deleteAttachmentDataForNotificationRecords:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)getAttachmentDataForAttachment:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

