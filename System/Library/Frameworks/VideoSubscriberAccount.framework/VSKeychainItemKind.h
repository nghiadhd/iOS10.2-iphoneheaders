/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary;

@interface VSKeychainItemKind : NSObject <NSCopying> {

	NSString* _itemClassName;
	const CFStringRef _secItemClass;
	NSArray* _properties;

}

@property (nonatomic,copy) NSString * itemClassName;                              //@synthesize itemClassName=_itemClassName - In the implementation block
@property (assign,nonatomic) const CFStringRef secItemClass;                      //@synthesize secItemClass=_secItemClass - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * attributesByName; 
@property (nonatomic,copy) NSArray * properties;                                  //@synthesize properties=_properties - In the implementation block
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setProperties:(NSArray *)arg1 ;
-(NSArray *)properties;
-(NSDictionary *)attributesByName;
-(void)setSecItemClass:(const CFStringRef)arg1 ;
-(void)setItemClassName:(NSString *)arg1 ;
-(NSString *)itemClassName;
-(const CFStringRef)secItemClass;
@end

