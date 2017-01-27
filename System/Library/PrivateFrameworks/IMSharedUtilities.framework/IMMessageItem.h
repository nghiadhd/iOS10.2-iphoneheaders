/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMItem.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <IMSharedUtilities/IMRemoteObjectCoding.h>

@class NSString, NSArray, NSAttributedString, NSData, NSDate, NSDictionary;

@interface IMMessageItem : IMItem <NSCoding, NSCopying, IMRemoteObjectCoding> {

	BOOL _blockingRichLinks;
	BOOL _updatingDataSourcePayload;
	BOOL _backwardsCompatibleVersion;
	unsigned _error;
	NSString* _subject;
	NSString* _plainBody;
	NSArray* _fileTransferGUIDs;
	unsigned long long _flags;
	NSAttributedString* _body;
	NSData* _bodyData;
	long long _replaceID;
	NSDate* _timeRead;
	NSDate* _timeDelivered;
	NSDate* _timePlayed;
	long long _expireState;
	NSData* _payloadData;
	NSData* _contactsAvatarRecipeData;
	NSString* _expressiveSendStyleID;
	NSDate* _timeExpressiveSendPlayed;
	NSData* _typingIndicatorIcon;
	NSDictionary* _messageSummaryInfo;

}

@property (assign,nonatomic) BOOL backwardsCompatibleVersion;                                                //@synthesize backwardsCompatibleVersion=_backwardsCompatibleVersion - In the implementation block
@property (nonatomic,retain) NSString * subject;                                                             //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) NSAttributedString * body;                                                      //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSData * bodyData;                                                              //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,retain) NSData * payloadData;                                                           //@synthesize payloadData=_payloadData - In the implementation block
@property (nonatomic,retain) NSString * expressiveSendStyleID;                                               //@synthesize expressiveSendStyleID=_expressiveSendStyleID - In the implementation block
@property (nonatomic,retain) NSDate * timeExpressiveSendPlayed;                                              //@synthesize timeExpressiveSendPlayed=_timeExpressiveSendPlayed - In the implementation block
@property (nonatomic,retain) NSDate * timeRead;                                                              //@synthesize timeRead=_timeRead - In the implementation block
@property (nonatomic,retain) NSDate * timeDelivered;                                                         //@synthesize timeDelivered=_timeDelivered - In the implementation block
@property (nonatomic,retain) NSDate * timePlayed;                                                            //@synthesize timePlayed=_timePlayed - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                                                       //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) long long expireState;                                                          //@synthesize expireState=_expireState - In the implementation block
@property (nonatomic,retain) NSArray * fileTransferGUIDs;                                                    //@synthesize fileTransferGUIDs=_fileTransferGUIDs - In the implementation block
@property (assign,nonatomic) unsigned errorCode;                                                             //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) long long replaceID;                                                            //@synthesize replaceID=_replaceID - In the implementation block
@property (assign,nonatomic) BOOL hasDataDetectorResults; 
@property (assign,nonatomic) BOOL blockingRichLinks;                                                         //@synthesize blockingRichLinks=_blockingRichLinks - In the implementation block
@property (nonatomic,readonly) BOOL isDelivered; 
@property (nonatomic,readonly) BOOL isSent; 
@property (nonatomic,readonly) BOOL isRead; 
@property (nonatomic,readonly) BOOL isPlayed; 
@property (nonatomic,readonly) BOOL isFinished; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) BOOL isAlert; 
@property (nonatomic,readonly) BOOL wasDataDetected; 
@property (nonatomic,readonly) BOOL wasDowngraded; 
@property (nonatomic,readonly) BOOL isPrepared; 
@property (nonatomic,readonly) BOOL isTypingMessage; 
@property (nonatomic,readonly) BOOL isLocatingMessage; 
@property (nonatomic,readonly) BOOL isEmote; 
@property (nonatomic,readonly) BOOL isAudioMessage; 
@property (nonatomic,readonly) BOOL isExpirable; 
@property (nonatomic,readonly) BOOL isFromExternalSource; 
@property (nonatomic,copy,readonly) NSAttributedString * breadcrumbText; 
@property (nonatomic,retain) NSString * plainBody;                                                           //@synthesize plainBody=_plainBody - In the implementation block
@property (nonatomic,retain) NSData * typingIndicatorIcon;                                                   //@synthesize typingIndicatorIcon=_typingIndicatorIcon - In the implementation block
@property (nonatomic,retain) NSData * contactsAvatarRecipeData;                                              //@synthesize contactsAvatarRecipeData=_contactsAvatarRecipeData - In the implementation block
@property (assign,getter=isUpdatingDataSourcePayload,nonatomic) BOOL updatingDataSourcePayload;              //@synthesize updatingDataSourcePayload=_updatingDataSourcePayload - In the implementation block
@property (nonatomic,retain) NSDictionary * messageSummaryInfo;                                              //@synthesize messageSummaryInfo=_messageSummaryInfo - In the implementation block
+(Class)contextClass;
-(BOOL)isSystemMessage;
-(BOOL)isTypingOrCancelTypingMessage;
-(BOOL)isIncomingTypingOrCancelTypingMessage;
-(BOOL)isIncomingTypingMessage;
-(BOOL)isCancelTypingMessage;
-(id)_service;
-(id)_newChatItemsWithFilteredChat:(BOOL)arg1 ;
-(id)_newChatItems;
-(BOOL)_hasMessageChatItem;
-(BOOL)isExtensibleMessageWithPluginPayload:(id*)arg1 ;
-(id)message;
-(BOOL)_isInvitation;
-(id)_copy;
-(void)_setInivtation:(BOOL)arg1 ;
-(id)_copyWithFlags:(unsigned long long)arg1 ;
-(id)descriptionForPurpose:(long long)arg1 isGroupMessage:(BOOL)arg2 messageDataSource:(/*^block*/id)arg3 attachmentDataSource:(/*^block*/id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)sender;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(NSAttributedString *)body;
-(BOOL)isPrepared;
-(void)setBody:(NSAttributedString *)arg1 ;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(BOOL)isFinished;
-(void)setErrorCode:(unsigned)arg1 ;
-(unsigned)errorCode;
-(id)copyDictionaryRepresentation;
-(void)setBodyData:(NSData *)arg1 ;
-(BOOL)isExpirable;
-(NSDictionary *)messageSummaryInfo;
-(BOOL)isLastMessageCandidate;
-(BOOL)blockingRichLinks;
-(void)setBlockingRichLinks:(BOOL)arg1 ;
-(BOOL)isUpdatingDataSourcePayload;
-(void)setUpdatingDataSourcePayload:(BOOL)arg1 ;
-(long long)expireState;
-(NSDate *)timePlayed;
-(BOOL)wasDataDetected;
-(id)initWithSender:(id)arg1 time:(id)arg2 guid:(id)arg3 type:(long long)arg4 ;
-(void)setPayloadData:(NSData *)arg1 ;
-(void)_updateFlags:(unsigned long long)arg1 ;
-(void)setExpireState:(long long)arg1 ;
-(void)setTimePlayed:(NSDate *)arg1 ;
-(void)setTimeExpressiveSendPlayed:(NSDate *)arg1 ;
-(id)copyWithFlags:(unsigned long long)arg1 ;
-(NSDate *)timeRead;
-(NSDate *)timeDelivered;
-(BOOL)isEmote;
-(id)initWithSenderInfo:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 subject:(id)arg6 body:(id)arg7 bodyData:(id)arg8 attributes:(id)arg9 fileTransferGUIDs:(id)arg10 flags:(unsigned long long)arg11 guid:(id)arg12 messageID:(long long)arg13 account:(id)arg14 accountID:(id)arg15 service:(id)arg16 handle:(id)arg17 roomName:(id)arg18 unformattedID:(id)arg19 countryCode:(id)arg20 expireState:(long long)arg21 balloonBundleID:(id)arg22 payloadData:(id)arg23 expressiveSendStyleID:(id)arg24 timeExpressiveSendPlayed:(id)arg25 errorType:(unsigned)arg26 ;
-(BOOL)isAlert;
-(id)_localizedBackwardsCompatibleExpressiveSendText;
-(void)setTypingIndicatorIcon:(NSData *)arg1 ;
-(NSData *)bodyData;
-(BOOL)isFromMe;
-(NSData *)typingIndicatorIcon;
-(NSString *)plainBody;
-(BOOL)isRead;
-(NSString *)expressiveSendStyleID;
-(BOOL)isDelivered;
-(BOOL)isAudioMessage;
-(NSData *)payloadData;
-(BOOL)isPlayed;
-(BOOL)hasDataDetectorResults;
-(BOOL)isTypingMessage;
-(NSArray *)fileTransferGUIDs;
-(BOOL)isLocatingMessage;
-(NSDate *)timeExpressiveSendPlayed;
-(BOOL)wasDowngraded;
-(NSAttributedString *)breadcrumbText;
-(void)setExpressiveSendStyleID:(NSString *)arg1 ;
-(BOOL)isFromExternalSource;
-(id)initWithSender:(id)arg1 time:(id)arg2 body:(id)arg3 attributes:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 ;
-(long long)replaceID;
-(void)setPlainBody:(NSString *)arg1 ;
-(void)setFileTransferGUIDs:(NSArray *)arg1 ;
-(void)setTimeDelivered:(NSDate *)arg1 ;
-(void)setTimeRead:(NSDate *)arg1 ;
-(NSData *)contactsAvatarRecipeData;
-(void)setContactsAvatarRecipeData:(NSData *)arg1 ;
-(id)copyForBackwardsCompatibility;
-(BOOL)isSent;
-(void)setFlags:(unsigned long long)arg1 ;
-(unsigned long long)flags;
-(void)setReplaceID:(long long)arg1 ;
-(void)setMessageSummaryInfo:(NSDictionary *)arg1 ;
-(void)setBackwardsCompatibleVersion:(BOOL)arg1 ;
-(void)_generateBodyDataIfNeeded;
-(id)initWithDictionary:(id)arg1 hint:(id)arg2 ;
-(id)initWithSender:(id)arg1 time:(id)arg2 body:(id)arg3 attributes:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 type:(long long)arg9 ;
-(id)initWithSenderInfo:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 subject:(id)arg6 body:(id)arg7 bodyData:(id)arg8 attributes:(id)arg9 fileTransferGUIDs:(id)arg10 flags:(unsigned long long)arg11 guid:(id)arg12 messageID:(long long)arg13 account:(id)arg14 accountID:(id)arg15 service:(id)arg16 handle:(id)arg17 roomName:(id)arg18 unformattedID:(id)arg19 countryCode:(id)arg20 expireState:(long long)arg21 balloonBundleID:(id)arg22 payloadData:(id)arg23 expressiveSendStyleID:(id)arg24 timeExpressiveSendPlayed:(id)arg25 errorType:(unsigned)arg26 type:(long long)arg27 ;
-(void)adjustIsEmptyFlag;
-(void)_regenerateBodyData;
-(void)_regenerateBodyText;
-(void)_generateBodyTextIfNeeded;
-(void)_clearBodyData;
-(id)initWithSenderInfo:(id)arg1 time:(id)arg2 guid:(id)arg3 messageID:(long long)arg4 account:(id)arg5 accountID:(id)arg6 service:(id)arg7 handle:(id)arg8 roomName:(id)arg9 unformattedID:(id)arg10 countryCode:(id)arg11 ;
-(void)setHasDataDetectorResults:(BOOL)arg1 ;
-(void)setWasDataDetected:(BOOL)arg1 ;
-(BOOL)backwardsCompatibleVersion;
@end

