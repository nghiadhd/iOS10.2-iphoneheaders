/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface OFKeychainInternetAccount : NSObject {

	NSMutableDictionary* _keychainData;
	NSMutableDictionary* _keychainQuery;

}

@property (retain) NSMutableDictionary * keychainData;               //@synthesize keychainData=_keychainData - In the implementation block
@property (retain) NSMutableDictionary * keychainQuery;              //@synthesize keychainQuery=_keychainQuery - In the implementation block
+(id)accountWithURL:(id)arg1 andAccount:(id)arg2 ;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(id)server;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isValid;
-(id)path;
-(id)port;
-(id)account;
-(id)secItemFormatToDictionary:(id)arg1 ;
-(void)writeToKeychain;
-(id)dictionaryToSecItemFormat:(id)arg1 ;
-(void)setKeychainQuery:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)keychainQuery;
-(void)setKeychainData:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)keychainData;
-(id)initWithURL:(id)arg1 andAccount:(id)arg2 ;
-(BOOL)deleteFromKeychain;
-(id)password;
-(void)setPassword:(id)arg1 ;
@end

