/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:36:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IMDAppleServiceSession.h>
#import <libobjc.A.dylib/MessagePushHandlerListener.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@class NSMutableArray, IMMultiQueue, IMTimer, NSMutableDictionary, NSString;

@interface MessageServiceSession : IMDAppleServiceSession <MessagePushHandlerListener, IDSServiceDelegate> {

	NSMutableArray* _messagePushHandlers;
	IMMultiQueue* _incomingMessageMultiQueue;
	IMTimer* _resetFailureRetriesTimer;
	NSMutableDictionary* _failureMap;
	BOOL _networkOverride;
	NSMutableArray* _pendingSendBlockQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)sendBalloonPayload:(id)arg1 attachments:(id)arg2 withMessageGUID:(id)arg3 bundleID:(id)arg4 ;
-(void)updateBalloonPayload:(id)arg1 attachments:(id)arg2 forMessageGUID:(id)arg3 ;
-(void)addAccount:(id)arg1 ;
-(id)initWithAccount:(id)arg1 service:(id)arg2 ;
-(void)sessionDidBecomeActive;
-(void)sessionWillBecomeInactiveWithAccount:(id)arg1 ;
-(BOOL)overrideNetworkAvailability;
-(void)requestProperty:(id)arg1 ofPerson:(id)arg2 ;
-(void)removePersonInfo:(id)arg1 chatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)updateDisplayName:(id)arg1 fromDisplayName:(id)arg2 forChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5 ;
-(void)sendReadReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)sendPlayedReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)sendSavedReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)sendCommand:(id)arg1 withProperties:(id)arg2 toPerson:(id)arg3 ;
-(void)sendCommand:(id)arg1 withProperties:(id)arg2 toPerson:(id)arg3 toChatID:(id)arg4 identifier:(id)arg5 style:(unsigned char)arg6 ;
-(BOOL)networkConditionsAllowLogin;
-(void)refreshServiceCapabilities;
-(void)sendLocationSharingInfo:(id)arg1 toID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)replayMessage:(id)arg1 ;
-(void)didReceiveMessages:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 account:(id)arg4 ;
-(void)sendMessage:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3 ;
-(BOOL)canMakeExpireStateChecks;
-(void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4 ;
-(void)joinChat:(id)arg1 handleInfo:(id)arg2 style:(unsigned char)arg3 groupID:(id)arg4 joinProperties:(id)arg5 ;
-(void)leaveChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)refreshRegistration;
-(id)callerURI;
-(void)_iMessageBagLoaded:(id)arg1 ;
-(void)_updateNetworkOverride;
-(void)_handleFileTransferAccepted:(id)arg1 ;
-(BOOL)_enableReadReceiptForChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)_logLocalInfo;
-(id)_messageItemToConsumeForNewBreadcrumbMessage:(id)arg1 outBreadcrumbItems:(id*)arg2 ;
-(BOOL)_updateReadReceiptProperties:(id)arg1 withIncomingProperties:(id)arg2 ;
-(void)_updateGlobalReadReceiptValue:(BOOL)arg1 withVersionID:(id)arg2 ;
-(void)_updateLocalReadReceiptValueWithGlobalValue:(BOOL)arg1 ;
-(unsigned long long)_failuresForID:(id)arg1 ;
-(unsigned long long)_maxFailuresAllowed;
-(void)_incrementDecryptionFailureForID:(id)arg1 ;
-(void)sendDeliveryReceiptForMessageID:(id)arg1 toID:(id)arg2 deliveryContext:(id)arg3 needsDeliveryReceipt:(id)arg4 callerID:(id)arg5 account:(id)arg6 ;
-(void)forwardDeliveryReceiptForMessageID:(id)arg1 withAccount:(id)arg2 callerURI:(id)arg3 ;
-(void)handler:(id)arg1 messageIDSaved:(id)arg2 ofType:(id)arg3 toIdentifier:(id)arg4 fromIdentifier:(id)arg5 groupContext:(id)arg6 fromToken:(id)arg7 timeStamp:(id)arg8 fromIDSID:(id)arg9 needsDeliveryReceipt:(id)arg10 deliveryContext:(id)arg11 storageContext:(id)arg12 ;
-(void)_enqueueBlock:(/*^block*/id)arg1 withTimeout:(double)arg2 description:(id)arg3 ;
-(void)_checkGlobalReadReceiptValueAndUpdateIfNeeded:(id)arg1 ;
-(void)_updateChatProperties:(id)arg1 withProperties:(id)arg2 ;
-(BOOL)isDefaultPairedDeviceToken:(id)arg1 ;
-(BOOL)_isRegisteredURI:(id)arg1 ;
-(BOOL)_isFromLinkedID:(id)arg1 fromID:(id)arg2 ;
-(BOOL)_isWhitelistedUnencryptedSender:(id)arg1 ;
-(void)_updateTransfersForAttributionInfoArray:(id)arg1 message:(id)arg2 ;
-(void)_addItemToRecentsIfApplicable:(id)arg1 ;
-(id)storeBreadcrumbAndSetConsumedPayloadsForNewMessageItemIfNecessary:(id)arg1 inChatWithIdentifier:(id)arg2 ;
-(void)_fixParticipantsForChat:(id)arg1 ;
-(void)_handleMessageSentToSelf:(id)arg1 chatIdentifier:(id)arg2 style:(unsigned char)arg3 isLocal:(BOOL)arg4 account:(id)arg5 ;
-(double)_richLinkDelayTimeInterval;
-(void)_flushQueuedMessageWrapperBlocks;
-(void)_stageMessageWrapperBlock:(id)arg1 ;
-(BOOL)_richLinkPendSendingWithGUID:(id)arg1 ;
-(id)_messageDictionaryToReflectWithDeliveryReceipt:(id)arg1 ;
-(void)_setWeeklyFailureResetTimer;
-(void)_resetFailureRetries;
-(void)handler:(id)arg1 incomingMessage:(id)arg2 originalEncryptionType:(id)arg3 messageID:(id)arg4 toIdentifier:(id)arg5 fromIdentifier:(id)arg6 fromToken:(id)arg7 timeStamp:(id)arg8 fromIDSID:(id)arg9 needsDeliveryReceipt:(id)arg10 deliveryContext:(id)arg11 storageContext:(id)arg12 messageContext:(id)arg13 isBeingReplayed:(BOOL)arg14 ;
-(void)handler:(id)arg1 messageIDDelivered:(id)arg2 toIdentifier:(id)arg3 status:(id)arg4 deliveryContext:(id)arg5 timeStamp:(id)arg6 fromIDSID:(id)arg7 needsDeliveryReceipt:(id)arg8 deliveryContext:(id)arg9 storageContext:(id)arg10 ;
-(void)handler:(id)arg1 messageIDReflectedDelivered:(id)arg2 incomingMessage:(id)arg3 toIdentifier:(id)arg4 fromIdentifier:(id)arg5 status:(id)arg6 deliveryContext:(id)arg7 timeStamp:(id)arg8 fromIDSID:(id)arg9 needsDeliveryReceipt:(id)arg10 deliveryContext:(id)arg11 storageContext:(id)arg12 ;
-(void)handler:(id)arg1 messageIDRead:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 timeStamp:(id)arg6 fromIDSID:(id)arg7 needsDeliveryReceipt:(id)arg8 deliveryContext:(id)arg9 storageContext:(id)arg10 ;
-(void)handler:(id)arg1 messageIDPlayed:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 timeStamp:(id)arg6 fromIDSID:(id)arg7 needsDeliveryReceipt:(id)arg8 deliveryContext:(id)arg9 storageContext:(id)arg10 ;
-(void)handler:(id)arg1 receivedError:(id)arg2 forMessageID:(id)arg3 toIdentifier:(id)arg4 fromIdentifier:(id)arg5 fromToken:(id)arg6 timeStamp:(id)arg7 fromIDSID:(id)arg8 needsDeliveryReceipt:(id)arg9 deliveryContext:(id)arg10 storageContext:(id)arg11 additionalInfo:(id)arg12 shouldShowPeerErrors:(BOOL)arg13 ;
-(void)handler:(id)arg1 genericNotification:(id)arg2 incomingMessage:(id)arg3 userInfo:(id)arg4 toIdentifier:(id)arg5 fromIdentifier:(id)arg6 fromToken:(id)arg7 timeStamp:(id)arg8 fromIDSID:(id)arg9 needsDeliveryReceipt:(id)arg10 deliveryContext:(id)arg11 storageContext:(id)arg12 ;
-(void)handler:(id)arg1 locationShareInfo:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 timeStamp:(id)arg6 fromIDSID:(id)arg7 needsDeliveryReceipt:(id)arg8 deliveryContext:(id)arg9 storageContext:(id)arg10 ;
-(void)handler:(id)arg1 groupMessageCommand:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 timeStamp:(id)arg6 fromIDSID:(id)arg7 needsDeliveryReceipt:(id)arg8 deliveryContext:(id)arg9 storageContext:(id)arg10 ;
-(void)handler:(id)arg1 bubblePayloadData:(id)arg2 forMessageID:(id)arg3 toIdentifier:(id)arg4 fromIdentifier:(id)arg5 fromToken:(id)arg6 timeStamp:(id)arg7 fromIDSID:(id)arg8 needsDeliveryReceipt:(id)arg9 deliveryContext:(id)arg10 storageContext:(id)arg11 ;
-(void)handler:(id)arg1 remoteFileRequest:(id)arg2 ;
-(void)handler:(id)arg1 remoteFileResponse:(id)arg2 ;
-(void)handler:(id)arg1 payloadDataRequest:(id)arg2 ;
-(void)handler:(id)arg1 payloadDataResponse:(id)arg2 ;
-(void)_forwardP2PGroupCommand:(id)arg1 fromPerson:(id)arg2 toPerson:(id)arg3 ;
-(void)joinChat:(id)arg1 handleInfo:(id)arg2 style:(unsigned char)arg3 joinProperties:(id)arg4 ;
-(id)pendingSendBlockQueue;
-(id)getMessageGroupController;
-(id)getMessageDeliveryController;
-(id)getMessageAttachmentController;
-(id)getStickerRefreshDeliveryController;
-(unsigned long long)capabilities;
-(void)removeAccount:(id)arg1 ;
@end

