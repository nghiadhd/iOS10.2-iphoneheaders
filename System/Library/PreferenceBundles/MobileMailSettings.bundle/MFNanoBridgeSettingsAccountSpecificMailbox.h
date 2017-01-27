/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailBridgeSettings/MFNanoBridgeSettingsMailbox.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MFMailboxUid, NSURL, NSString;

@interface MFNanoBridgeSettingsAccountSpecificMailbox : MFNanoBridgeSettingsMailbox <NSSecureCoding> {

	MFMailboxUid* _mailboxUid;
	NSURL* _mailboxURL;
	NSString* _accountUniqueIdentifier;

}

@property (nonatomic,readonly) NSString * accountUniqueIdentifier;              //@synthesize accountUniqueIdentifier=_accountUniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * mailboxURL;                              //@synthesize mailboxURL=_mailboxURL - In the implementation block
@property (nonatomic,readonly) int type; 
+(BOOL)supportsSecureCoding;
-(NSString *)accountUniqueIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(int)type;
-(BOOL)isValid;
-(unsigned long long)level;
-(id)icon;
-(id)displayName;
-(id)initWithMailboxUid:(id)arg1 ;
-(id)initWithAccountUniqueIdentifier:(id)arg1 mailboxURL:(id)arg2 ;
-(id)_mailboxUid;
-(NSURL *)mailboxURL;
-(void)invalidateCachedData;
@end

