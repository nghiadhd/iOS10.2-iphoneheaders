/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:36:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet;

@interface MessageAttachmentController : NSObject {

	NSMutableDictionary* _peerCompletionBlocks;
	NSMutableSet* _pendingRemoteFileRequests;
	NSMutableDictionary* _localPayloadDataRequestGUIDToCompletionBlockMap;

}

@property (nonatomic,retain) NSMutableSet * pendingRemoteFileRequests;                                           //@synthesize pendingRemoteFileRequests=_pendingRemoteFileRequests - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * localPayloadDataRequestGUIDToCompletionBlockMap;              //@synthesize localPayloadDataRequestGUIDToCompletionBlockMap=_localPayloadDataRequestGUIDToCompletionBlockMap - In the implementation block
@property (nonatomic,readonly) BOOL shouldSendLowResolutionOnly; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)downloadPayloadDataForMessageGUID:(id)arg1 payLoadDictionary:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)retrieveAttachmentsForMessage:(id)arg1 inlineAttachments:(id)arg2 displayID:(id)arg3 token:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)remoteFileResponse:(id)arg1 ;
-(void)remotefileRequest:(id)arg1 attempts:(long long)arg2 ;
-(void)sendPayloadData:(id)arg1 messageGUID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)acceptFileTransfer:(id)arg1 ;
-(void)handlePayloadDataRequest:(id)arg1 attempts:(unsigned long long)arg2 ;
-(void)handlePayloadDataResponse:(id)arg1 ;
-(void)sendAttachmentsForMessage:(id)arg1 canSendInline:(BOOL)arg2 displayIDs:(id)arg3 additionalContext:(id)arg4 completionBlock:(/*^block*/id)arg5 uploadFailureBlock:(/*^block*/id)arg6 ;
-(void)sendFallbackAttachmentsForMessage:(id)arg1 displayIDs:(id)arg2 additionalContext:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(unsigned long long)_largeFileSizeFor:(id)arg1 allowedLargerRepresentation:(BOOL*)arg2 ;
-(void)_fileTransferSizeForAuxVideoFromServerBag:(unsigned long long*)arg1 smallSize:(unsigned long long*)arg2 serverBag:(id)arg3 ;
-(unsigned long long)_maxAllowedAuxVideoSize;
-(BOOL)_previewAttachmentEnabledForStickers;
-(id)_transferInfoFileForKey:(id)arg1 ;
-(id)_fileHash:(id)arg1 ;
-(id)_transferInfoForKey:(id)arg1 ;
-(double)_stickerUploadTTL;
-(void)_setTransferInfo:(id)arg1 key:(id)arg2 ;
-(void)_deleteTransferInfoForKey:(id)arg1 ;
-(id)_sizeLimitsForTransfer:(id)arg1 isUsingPreview:(BOOL*)arg2 previewFileSize:(unsigned long long*)arg3 ;
-(BOOL)shouldSendLowResolutionOnly;
-(id)_combinedTransferUserInfoForAttachmentSendContexts:(id)arg1 ;
-(BOOL)_shouldAutoDownloadUTIType:(id)arg1 fileSize:(unsigned long long)arg2 ;
-(void)retrieveLocalFileTransfer:(id)arg1 attachmentIndex:(unsigned long long)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 decryptionKey:(id)arg7 requestedSize:(id)arg8 fileSize:(unsigned long long)arg9 progressBlock:(/*^block*/id)arg10 completionBlock:(/*^block*/id)arg11 ;
-(BOOL)_shouldDisableFasterDownload:(id)arg1 message:(id)arg2 ;
-(NSMutableSet *)pendingRemoteFileRequests;
-(void)setPendingRemoteFileRequests:(NSMutableSet *)arg1 ;
-(id)_createPayloadRequestDictionaryForMessageGUID:(id)arg1 requestKey:(id)arg2 ;
-(id)_createPayloadResponseDictionaryWithDictionary:(id)arg1 payloadData:(id)arg2 attachments:(id)arg3 ;
-(unsigned long long)_maxCompressedPayloadDataLength;
-(BOOL)_shouldUploadPayloadDataOverMMCS:(id)arg1 ;
-(void)fetchPayloadDataFromCompanionForGUID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)maxTransferFileSizeForWifi:(unsigned long long*)arg1 cell:(unsigned long long*)arg2 ;
-(unsigned long long)maxTransferAudioFileSizeForWifi:(unsigned long long*)arg1 cell:(unsigned long long*)arg2 ;
-(unsigned long long)maxTransferVideoFileSizeForWifi:(unsigned long long*)arg1 cell:(unsigned long long*)arg2 ;
-(NSMutableDictionary *)localPayloadDataRequestGUIDToCompletionBlockMap;
-(void)setLocalPayloadDataRequestGUIDToCompletionBlockMap:(NSMutableDictionary *)arg1 ;
@end
