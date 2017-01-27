/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CNFoundationSocialProfile : NSObject <NSCopying> {

	NSString* _urlString;
	NSString* _username;
	NSString* _userIdentifier;
	NSString* _service;
	NSString* _displayName;

}

@property (copy,readonly) NSString * urlString;                   //@synthesize urlString=_urlString - In the implementation block
@property (copy,readonly) NSString * username;                    //@synthesize username=_username - In the implementation block
@property (copy,readonly) NSString * userIdentifier;              //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (copy,readonly) NSString * service;                     //@synthesize service=_service - In the implementation block
@property (copy,readonly) NSString * displayName;                 //@synthesize displayName=_displayName - In the implementation block
+(id)emptySocialProfile;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(NSString *)displayName;
-(id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 displayName:(id)arg5 ;
-(NSString *)urlString;
-(NSString *)username;
-(NSString *)service;
-(NSString *)userIdentifier;
@end

