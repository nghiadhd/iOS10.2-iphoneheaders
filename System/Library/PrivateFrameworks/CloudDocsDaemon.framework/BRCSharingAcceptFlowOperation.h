/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCForegroundClient.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@protocol BRCUserNotifier, OS_dispatch_queue;
@class BRCAccountSession, NSArray, NSURL, CKRecordID, CKShareMetadata, CKShare, BRCItemID, NSString, BRCAppLibrary, BRCPrivateAppLibrary, BRCXPCClient, BRCAcceptShareOperation, NSObject;

@interface BRCSharingAcceptFlowOperation : _BRCOperation <BRCForegroundClient, BRCOperationSubclass> {

	id<BRCUserNotifier> _userNotification;
	BRCAccountSession* _session;
	NSArray* _acceptationFlow;
	unsigned long long _stepIndex;
	NSURL* _shareURL;
	CKRecordID* _shareID;
	CKShareMetadata* _shareMetadata;
	CKShare* _share;
	BRCItemID* _sharedItemID;
	NSString* _unsaltedBookmarkData;
	BRCAppLibrary* _localAppLibrary;
	BRCPrivateAppLibrary* _aliasAppLibrary;
	NSURL* _shareDocumentURL;
	NSURL* _aliasURL;
	NSString* _documentName;
	NSString* _shareDocumentFileProviderString;
	BRCXPCClient* _xpcClient;
	BRCAcceptShareOperation* _acceptShareOpBlockingSyncDown;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
+(void)_openiCloudSettings;
+(void)_openShareURLInWebBrowser:(id)arg1 withReason:(id)arg2 ;
+(id)_runningShareIDs;
+(Class)userNotificationClass;
+(void)_openAppStoreForShareURL:(id)arg1 ;
-(NSString *)identifier;
-(void)main;
-(id)subclassableDescriptionWithContext:(id)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)createActivity;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)initWithShareURL:(id)arg1 client:(id)arg2 session:(id)arg3 ;
-(id)_stepNameAtIndex:(unsigned long long)arg1 withPrefix:(id)arg2 ;
-(id)localClientZone;
-(BOOL)_isiWorkShare;
-(void)_isURLWellFormed;
-(void)_isAppInstalled;
-(void)_isUserSignedInToiCloudDrive;
-(void)_isAccountRestricted;
-(void)_fetchShareMetadata;
-(void)_showSharingJoinDialog;
-(void)_parseShareMetadata;
-(void)_waitForSharedItemToSyncDownOnOwner;
-(void)_waitForFaultToBeOnDiskOnOwner;
-(void)_createSideFaultOnDisk;
-(void)_checkIfShouldWaitUntilDownloadCompletion;
-(void)_openSharedSideFaultFile;
-(void)_acceptShareURL;
-(void)_waitForSharedItemToSyncDownOnRecipient;
-(void)_waitForFaultToBeOnDiskOnRecipient;
-(void)_prepareToDownloadSharedDocument;
-(void)_openSharedDownloadedDocumentIfStillNeeded;
-(void)_endAcceptationFlow;
-(void)_isDocumentSharingSupported;
-(void)_performNextStepInQueue;
-(void)_jumpToSelectorInQueue:(SEL)arg1 ;
-(BOOL)_isOwner;
-(void)_showGenericErrorAndFinish:(id)arg1 ;
-(BOOL)_isOwnerOrShareAlreadyAccepted;
-(id)_createAcceptShareOperation;
-(BOOL)_openiWorkAppPreemptively;
-(void)_createAliasInAppLibrary:(id)arg1 target:(id)arg2 ;
-(void)_captureOpenInfoFromDocument:(id)arg1 ;
-(void)_jumpToSelector:(SEL)arg1 ;
-(id)initWithShareMetadata:(id)arg1 client:(id)arg2 session:(id)arg3 ;
-(void)moveDialogToFront;
-(void)_performNextStep;
@end

