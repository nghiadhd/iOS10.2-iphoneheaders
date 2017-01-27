/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:35:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIMessageReceivedMessage : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _fzError;
	NSString* _guid;
	unsigned _hasAttachments;
	unsigned _isFromEmail;
	unsigned _isFromPhoneNumber;
	unsigned _isGroupMessage;
	unsigned _isTypingIndicator;
	unsigned _messageError;
	SCD_Struct_AW11 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasFzError; 
@property (assign,nonatomic) int fzError;                               //@synthesize fzError=_fzError - In the implementation block
@property (assign,nonatomic) BOOL hasMessageError; 
@property (assign,nonatomic) unsigned messageError;                     //@synthesize messageError=_messageError - In the implementation block
@property (assign,nonatomic) BOOL hasIsTypingIndicator; 
@property (assign,nonatomic) unsigned isTypingIndicator;                //@synthesize isTypingIndicator=_isTypingIndicator - In the implementation block
@property (assign,nonatomic) BOOL hasIsGroupMessage; 
@property (assign,nonatomic) unsigned isGroupMessage;                   //@synthesize isGroupMessage=_isGroupMessage - In the implementation block
@property (assign,nonatomic) BOOL hasIsFromPhoneNumber; 
@property (assign,nonatomic) unsigned isFromPhoneNumber;                //@synthesize isFromPhoneNumber=_isFromPhoneNumber - In the implementation block
@property (assign,nonatomic) BOOL hasIsFromEmail; 
@property (assign,nonatomic) unsigned isFromEmail;                      //@synthesize isFromEmail=_isFromEmail - In the implementation block
@property (assign,nonatomic) BOOL hasHasAttachments; 
@property (assign,nonatomic) unsigned hasAttachments;                   //@synthesize hasAttachments=_hasAttachments - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasGuid;
-(NSString *)guid;
-(void)setGuid:(NSString *)arg1 ;
-(void)setFzError:(int)arg1 ;
-(void)setHasFzError:(BOOL)arg1 ;
-(BOOL)hasFzError;
-(void)setMessageError:(unsigned)arg1 ;
-(void)setHasMessageError:(BOOL)arg1 ;
-(BOOL)hasMessageError;
-(int)fzError;
-(unsigned)messageError;
-(void)setIsTypingIndicator:(unsigned)arg1 ;
-(void)setHasIsTypingIndicator:(BOOL)arg1 ;
-(BOOL)hasIsTypingIndicator;
-(void)setIsGroupMessage:(unsigned)arg1 ;
-(void)setHasIsGroupMessage:(BOOL)arg1 ;
-(BOOL)hasIsGroupMessage;
-(void)setIsFromPhoneNumber:(unsigned)arg1 ;
-(void)setHasIsFromPhoneNumber:(BOOL)arg1 ;
-(BOOL)hasIsFromPhoneNumber;
-(void)setIsFromEmail:(unsigned)arg1 ;
-(void)setHasIsFromEmail:(BOOL)arg1 ;
-(BOOL)hasIsFromEmail;
-(void)setHasAttachments:(unsigned)arg1 ;
-(void)setHasHasAttachments:(BOOL)arg1 ;
-(BOOL)hasHasAttachments;
-(unsigned)isTypingIndicator;
-(unsigned)isGroupMessage;
-(unsigned)isFromPhoneNumber;
-(unsigned)isFromEmail;
-(unsigned)hasAttachments;
@end
