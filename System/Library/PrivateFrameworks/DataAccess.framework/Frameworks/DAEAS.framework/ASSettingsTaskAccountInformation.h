/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class ASSettingsTaskAccountEmailAddresses, NSString;

@interface ASSettingsTaskAccountInformation : ASItem {

	ASSettingsTaskAccountEmailAddresses* _emailAddressList;
	NSString* _accountId;

}

@property (nonatomic,retain) ASSettingsTaskAccountEmailAddresses * emailAddressList;              //@synthesize emailAddressList=_emailAddressList - In the implementation block
@property (nonatomic,retain) NSString * accountId;                                                //@synthesize accountId=_accountId - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)description;
-(void)setAccountId:(NSString *)arg1 ;
-(NSString *)accountId;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(ASSettingsTaskAccountEmailAddresses *)emailAddressList;
-(void)setEmailAddressList:(ASSettingsTaskAccountEmailAddresses *)arg1 ;
@end

