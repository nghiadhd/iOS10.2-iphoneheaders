/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSDictionary;

@interface SUScriptDictionary : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _cachedNestedScriptDictionaries;
	NSDictionary* _dictionary;

}

@property (readonly) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
+(void)initialize;
+(BOOL)isKeyExcludedFromWebScript:(const char*)arg1 ;
+(BOOL)isSelectorExcludedFromWebScript:(SEL)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(id)init;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionary;
-(id)attributeKeys;
-(id)stringRepresentation;
@end

