/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUICacheCoding.h>

@class NSURL, NSString, NSMutableDictionary;

@interface SKUIArtwork : NSObject <SKUICacheCoding> {

	long long _height;
	NSURL* _url;
	NSString* _urlString;
	long long _width;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) long long height;                                       //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) long long width;                                        //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
-(CGSize)size;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(long long)width;
-(long long)height;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(NSMutableDictionary *)cacheRepresentation;
-(id)initWithArtworkDictionary:(id)arg1 ;
-(id)initWithURL:(id)arg1 size:(CGSize)arg2 ;
-(id)_lookupDictionary;
@end

