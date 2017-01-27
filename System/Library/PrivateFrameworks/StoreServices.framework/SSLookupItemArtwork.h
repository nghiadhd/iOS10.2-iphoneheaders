/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:34:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSURL;

@interface SSLookupItemArtwork : NSObject {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * lookupDictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) long long height; 
@property (nonatomic,readonly) long long width; 
@property (nonatomic,readonly) NSURL * URL; 
-(id)URLWithHeight:(long long)arg1 width:(long long)arg2 format:(id)arg3 ;
-(void)dealloc;
-(NSURL *)URL;
-(long long)width;
-(long long)height;
-(id)URLWithHeight:(long long)arg1 width:(long long)arg2 cropStyle:(id)arg3 format:(id)arg4 ;
-(BOOL)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 forColorKind:(id)arg5 ;
-(id)initWithLookupDictionary:(id)arg1 ;
-(NSDictionary *)lookupDictionary;
-(id)URLWithHeight:(long long)arg1 width:(long long)arg2 ;
@end

