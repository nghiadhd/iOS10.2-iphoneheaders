/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFMessageViewingContextDelegate, OS_dispatch_queue, SGSuggestionsServiceMailProtocol;
@class NSObject, MFMailMessage, MFMessageBody, MFLock, MFActivityMonitor, MFMimePart, NSArray, MFError, MFAttachmentManager, NSConditionLock, NSError;

@interface MFMessageViewingContext : NSObject {

	NSObject*<MFMessageViewingContextDelegate> _delegate;
	MFMailMessage* _message;
	MFMessageBody* _body;
	id _content;
	MFLock* _contentLock;
	MFActivityMonitor* _loadTask;
	MFMimePart* _loadedPart;
	NSArray* _signers;
	MFError* _secureMIMEError;
	MFAttachmentManager* _attachmentManager;
	unsigned long long _contentOffset;
	unsigned _loadIncrement;
	unsigned _loadedFullData : 1;
	unsigned _hasNoContent : 1;
	unsigned _failedToLoad : 1;
	unsigned _isOutgoingMessage : 1;
	unsigned _isDraftMessage : 1;
	unsigned _isEditableMessage : 1;
	unsigned _showMailboxName : 1;
	unsigned _shouldAnalyzeMessage : 1;
	NSObject*<OS_dispatch_queue> _suggestionsQueue;
	NSObject*<SGSuggestionsServiceMailProtocol> _suggestionsService;
	NSConditionLock* _suggestionsLock;
	NSArray* _suggestions;
	long long _loadAlternative;
	NSError* _messageAnalysisError;

}

@property (setter=_setMessageBody:,nonatomic,retain) MFMessageBody * messageBody;                          //@synthesize body=_body - In the implementation block
@property (setter=_setLoadedPart:,nonatomic,retain) MFMimePart * loadedPart;                               //@synthesize loadedPart=_loadedPart - In the implementation block
@property (setter=_setSigners:,nonatomic,copy) NSArray * signers;                                          //@synthesize signers=_signers - In the implementation block
@property (setter=_setSecureMIMEError:,nonatomic,retain) MFError * secureMimeError;                        //@synthesize secureMIMEError=_secureMIMEError - In the implementation block
@property (setter=_setSuggestions:,nonatomic,copy) NSArray * suggestions; 
@property (setter=_setMessageAnalysisError:,nonatomic,retain) NSError * messageAnalysisError;              //@synthesize messageAnalysisError=_messageAnalysisError - In the implementation block
@property (setter=_setContent:,nonatomic,retain) id content; 
@property (assign,setter=_setContentOffset:,nonatomic) unsigned long long contentOffset;                   //@synthesize contentOffset=_contentOffset - In the implementation block
@property (nonatomic,retain,readonly) MFMailMessage * message;                                             //@synthesize message=_message - In the implementation block
@property (nonatomic,retain,readonly) MFAttachmentManager * attachmentManager;                             //@synthesize attachmentManager=_attachmentManager - In the implementation block
@property (nonatomic,retain,readonly) MFActivityMonitor * loadTask;                                        //@synthesize loadTask=_loadTask - In the implementation block
@property (nonatomic,readonly) BOOL hasLoaded; 
@property (nonatomic,readonly) BOOL hasAnalyzedMessage; 
@property (nonatomic,readonly) BOOL isPartial; 
@property (nonatomic,readonly) BOOL failedToLoad; 
@property (nonatomic,readonly) BOOL hasNoContent; 
@property (nonatomic,readonly) BOOL isMessageSigned; 
@property (nonatomic,readonly) BOOL isMessageEncrypted; 
@property (assign,nonatomic) id<MFMessageViewingContextDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isOutgoingMessage; 
@property (assign,nonatomic) BOOL isDraftMessage; 
@property (assign,nonatomic) BOOL isEditableMessage; 
@property (assign,nonatomic) BOOL showMailboxName; 
@property (assign,nonatomic) BOOL shouldAnalyzeMessage; 
+(unsigned long long)nextOffsetForOffset:(unsigned long long)arg1 totalLength:(unsigned long long)arg2 requestedAmount:(unsigned long long)arg3 ;
+(BOOL)isAttachmentTooLargeToDownload:(id)arg1 ;
-(MFMessageBody *)messageBody;
-(void)setDelegate:(id<MFMessageViewingContextDelegate>)arg1 ;
-(void)dealloc;
-(id<MFMessageViewingContextDelegate>)delegate;
-(unsigned long long)contentOffset;
-(id)content;
-(MFMailMessage *)message;
-(void)load;
-(void)_setContentOffset:(unsigned long long)arg1 ;
-(id)attachments;
-(NSArray *)suggestions;
-(id)uniqueID;
-(MFAttachmentManager *)attachmentManager;
-(BOOL)isPartial;
-(NSArray *)signers;
-(void)_setSigners:(id)arg1 ;
-(id)initWithMessage:(id)arg1 attachmentManager:(id)arg2 ;
-(BOOL)hasAnalyzedMessageWithTimeout:(id)arg1 ;
-(void)_setMessageBody:(id)arg1 ;
-(void)_setContent:(id)arg1 ;
-(void)_notifyInitialLoadComplete;
-(void)_notifyFullMessageLoadFailed;
-(void)_setLoadedPart:(id)arg1 ;
-(void)_setSecureMIMEError:(id)arg1 ;
-(void)loadAsPlainText:(BOOL)arg1 asHTML:(BOOL)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(void)analyzeMessageContent:(id)arg1 ;
-(void)_notifyCompletelyComplete;
-(void)loadFull;
-(void)setLoadTask:(MFActivityMonitor *)arg1 ;
-(void)loadWithPriority:(int)arg1 ;
-(void)loadMore;
-(void)_setMessageAnalysisError:(id)arg1 ;
-(void)_setSuggestions:(id)arg1 ;
-(void)_notifyMessageAnalysisComplete;
-(BOOL)isOutgoingMessage;
-(void)setIsOutgoingMessage:(BOOL)arg1 ;
-(BOOL)isDraftMessage;
-(void)setIsDraftMessage:(BOOL)arg1 ;
-(BOOL)isEditableMessage;
-(void)setIsEditableMessage:(BOOL)arg1 ;
-(BOOL)showMailboxName;
-(void)setShowMailboxName:(BOOL)arg1 ;
-(BOOL)shouldAnalyzeMessage;
-(void)setShouldAnalyzeMessage:(BOOL)arg1 ;
-(BOOL)hasNoContent;
-(BOOL)isMessageSigned;
-(BOOL)isMessageEncrypted;
-(MFError *)secureMimeError;
-(BOOL)hasAnalyzedMessage;
-(BOOL)failedToLoad;
-(void)loadBestAlternative;
-(MFActivityMonitor *)loadTask;
-(MFMimePart *)loadedPart;
-(NSError *)messageAnalysisError;
-(BOOL)hasLoaded;
-(void)cancelLoad;
@end

