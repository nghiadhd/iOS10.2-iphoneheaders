/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface DCService : NSObject {

	NSURL* _url;
	NSString* _keychainItemIdentifier;
	NSString* _uniqueIdentifier;

}

@property (retain,readonly) NSURL * url;                                    //@synthesize url=_url - In the implementation block
@property (retain,readonly) NSString * keychainItemIdentifier;              //@synthesize keychainItemIdentifier=_keychainItemIdentifier - In the implementation block
@property (retain,readonly) NSString * uniqueIdentifier;                    //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
+(id)serviceWithURL:(id)arg1 keychainItemIdentifier:(id)arg2 ;
+(id)serviceWithHostName:(id)arg1 uniqueIdentifier:(id)arg2 ;
+(id)serviceWithAccount:(id)arg1 ;
+(id)serverIdentifierForURL:(id)arg1 ;
-(id)description;
-(NSURL *)url;
-(NSString *)uniqueIdentifier;
-(id)_initWithURL:(id)arg1 keychainItemIdentifier:(id)arg2 ;
-(id)_initWithHostName:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(id)_initWithAccount:(id)arg1 ;
-(void)portNumberDidChange:(id)arg1 ;
-(NSString *)keychainItemIdentifier;
@end

