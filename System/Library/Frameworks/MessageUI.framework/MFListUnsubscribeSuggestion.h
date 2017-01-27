/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MailAccount, MFMessageHeaders;

@interface MFListUnsubscribeSuggestion : NSObject {

	NSString* _address;
	NSString* _subject;
	NSString* _body;
	MailAccount* _account;
	MFMessageHeaders* _headers;

}

@property (nonatomic,readonly) NSString * address;                      //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) NSString * subject;                      //@synthesize subject=_subject - In the implementation block
@property (nonatomic,readonly) NSString * body;                         //@synthesize body=_body - In the implementation block
@property (nonatomic,readonly) MailAccount * account;                   //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) MFMessageHeaders * headers;              //@synthesize headers=_headers - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)body;
-(NSString *)subject;
-(id)initWithAddress:(id)arg1 subject:(id)arg2 body:(id)arg3 account:(id)arg4 headers:(id)arg5 ;
-(MailAccount *)account;
-(NSString *)address;
-(MFMessageHeaders *)headers;
@end
