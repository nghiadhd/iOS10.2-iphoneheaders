/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <LoggingSupport/OSActivityEventMessage.h>

@class NSString;

@interface OSActivityLogMessageEvent : OSActivityEventMessage {

	unsigned char _messageType;
	NSString* _subsystem;
	NSString* _category;
	unsigned long long _senderProgramCounter;

}

@property (copy,readonly) NSString * subsystem;                            //@synthesize subsystem=_subsystem - In the implementation block
@property (copy,readonly) NSString * category;                             //@synthesize category=_category - In the implementation block
@property (readonly) unsigned long long senderProgramCounter;              //@synthesize senderProgramCounter=_senderProgramCounter - In the implementation block
@property (readonly) unsigned char messageType;                            //@synthesize messageType=_messageType - In the implementation block
-(NSString *)category;
-(NSString *)subsystem;
-(unsigned char)messageType;
-(id)initWithEntry:(os_activity_stream_entry_s*)arg1 ;
-(void)_addProperties:(id)arg1 ;
-(unsigned long long)senderProgramCounter;
@end

