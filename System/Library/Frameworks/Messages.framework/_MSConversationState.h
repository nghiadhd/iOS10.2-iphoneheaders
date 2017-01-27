/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSArray, NSString, MSMessage;

@interface _MSConversationState : NSObject <NSSecureCoding> {

	NSUUID* _conversationIdentifier;
	NSUUID* _senderIdentifier;
	NSArray* _recipientIdentifiers;
	NSString* _conversationID;
	MSMessage* _activeMessage;

}

@property (nonatomic,retain) NSUUID * conversationIdentifier;              //@synthesize conversationIdentifier=_conversationIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * senderIdentifier;                    //@synthesize senderIdentifier=_senderIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * recipientIdentifiers;               //@synthesize recipientIdentifiers=_recipientIdentifiers - In the implementation block
@property (nonatomic,retain) NSString * conversationID;                    //@synthesize conversationID=_conversationID - In the implementation block
@property (nonatomic,retain) MSMessage * activeMessage;                    //@synthesize activeMessage=_activeMessage - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)recipientIdentifiers;
-(NSUUID *)senderIdentifier;
-(NSString *)conversationID;
-(void)setConversationID:(NSString *)arg1 ;
-(NSUUID *)conversationIdentifier;
-(void)setConversationIdentifier:(NSUUID *)arg1 ;
-(void)setSenderIdentifier:(NSUUID *)arg1 ;
-(void)setRecipientIdentifiers:(NSArray *)arg1 ;
-(MSMessage *)activeMessage;
-(void)setActiveMessage:(MSMessage *)arg1 ;
@end

