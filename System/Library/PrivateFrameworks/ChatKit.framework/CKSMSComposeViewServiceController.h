/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <libobjc.A.dylib/CKComposeChatControllerDelegate.h>
#import <libobjc.A.dylib/CKSMSComposeViewServiceProtocol.h>

@class CKModalTranscriptController, NSString;

@interface CKSMSComposeViewServiceController : UINavigationController <CKComposeChatControllerDelegate, CKSMSComposeViewServiceProtocol> {

	BOOL _canEditRecipients;
	BOOL _supportsAttachments;
	BOOL _supportsMessageInspection;
	BOOL _forceMMS;
	BOOL _disableCameraAttachments;
	CKModalTranscriptController* _modalTranscriptController;
	/*^block*/id _gameCenterPickerBlock;

}

@property (nonatomic,copy) id gameCenterPickerBlock;                                               //@synthesize gameCenterPickerBlock=_gameCenterPickerBlock - In the implementation block
@property (nonatomic,retain) CKModalTranscriptController * modalTranscriptController;              //@synthesize modalTranscriptController=_modalTranscriptController - In the implementation block
@property (assign,nonatomic) BOOL canEditRecipients; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
+(BOOL)_isSecureForRemoteViewService;
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_willAppearInRemoteViewController;
-(void)setGameCenterPickerBlock:(id)arg1 ;
-(void)setGameCenterPickedHandles:(id)arg1 playerNames:(id)arg2 ;
-(void)forceMMS;
-(id)gameCenterPickerBlock;
-(void)composeChatController:(id)arg1 shouldSendComposition:(id)arg2 inConversation:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)chatController:(id)arg1 forwardComposition:(id)arg2 ;
-(void)setCanEditRecipients:(BOOL)arg1 ;
-(void)setModalTranscriptController:(CKModalTranscriptController *)arg1 ;
-(CKModalTranscriptController *)modalTranscriptController;
-(void)insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 ;
-(void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 ;
-(void)_insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 preview:(id)arg4 isFullyRealized:(BOOL)arg5 appendedVideoURL:(id)arg6 ;
-(void)_insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2 preview:(id)arg3 isFullyRealized:(BOOL)arg4 appendedVideoURL:(id)arg5 appendedBundleURL:(id)arg6 ;
-(void)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2 ;
-(void)composeChatControllerDidCancelComposition:(id)arg1 ;
-(void)_forceMMSIfNecessary;
-(void)setPendingAddresses:(id)arg1 ;
-(void)disableCameraAttachments;
-(void)setTextEntryContentsVisible:(BOOL)arg1 ;
-(BOOL)supportsMessageInspection;
-(void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3 ;
-(void)setUICustomizationData:(id)arg1 ;
-(void)insertRemoteItemForSending:(id)arg1 ;
-(void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4 ;
-(void)forceCancelComposition;
-(void)setGameCenterModeWithPickerBlock:(/*^block*/id)arg1 ;
-(BOOL)composeChatControllerCanEditRecipients;
-(void)composeChatController:(id)arg1 didSelectNewConversation:(id)arg2 ;
-(void)chatController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3 ;
-(void)chatController:(id)arg1 didSendCompositionInConversation:(id)arg2 ;
-(void)chatController:(id)arg1 didReportSpamForConversation:(id)arg2 ;
-(BOOL)supportsAttachments;
@end

