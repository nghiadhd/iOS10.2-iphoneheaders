/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface SKUILibraryItemState : NSObject <NSCopying> {

	long long _availability;
	unsigned long long _avTypes;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	BOOL _highDefinition;
	BOOL _preview;
	BOOL _rental;
	NSNumber* _storeAccountIdentifier;
	NSString* _storeFlavorIdentifier;
	NSString* _storePlatformKind;
	NSNumber* _storeVersionIdentifier;

}

@property (nonatomic,readonly) NSString * itemStateVariantIdentifier; 
@property (assign,nonatomic) long long availability;                                   //@synthesize availability=_availability - In the implementation block
@property (assign,nonatomic) unsigned long long AVTypes;                               //@synthesize avTypes=_avTypes - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                                   //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (assign,getter=isHighDefinition,nonatomic) BOOL highDefinition;              //@synthesize highDefinition=_highDefinition - In the implementation block
@property (assign,getter=isPreview,nonatomic) BOOL preview;                            //@synthesize preview=_preview - In the implementation block
@property (assign,getter=isRental,nonatomic) BOOL rental;                              //@synthesize rental=_rental - In the implementation block
@property (nonatomic,copy) NSNumber * storeAccountIdentifier;                          //@synthesize storeAccountIdentifier=_storeAccountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storeFlavorIdentifier;                           //@synthesize storeFlavorIdentifier=_storeFlavorIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storePlatformKind;                               //@synthesize storePlatformKind=_storePlatformKind - In the implementation block
@property (nonatomic,copy) NSNumber * storeVersionIdentifier;                          //@synthesize storeVersionIdentifier=_storeVersionIdentifier - In the implementation block
-(id)initWithApplication:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleVersion;
-(void)setBundleVersion:(NSString *)arg1 ;
-(BOOL)isPreview;
-(void)setPreview:(BOOL)arg1 ;
-(BOOL)isRental;
-(long long)availability;
-(NSString *)storePlatformKind;
-(id)newJavaScriptRepresentation;
-(NSString *)itemStateVariantIdentifier;
-(unsigned long long)AVTypes;
-(void)setAvailability:(long long)arg1 ;
-(void)setAVTypes:(unsigned long long)arg1 ;
-(void)setHighDefinition:(BOOL)arg1 ;
-(void)setRental:(BOOL)arg1 ;
-(void)setStoreAccountIdentifier:(NSNumber *)arg1 ;
-(void)setStorePlatformKind:(NSString *)arg1 ;
-(BOOL)isHighDefinition;
-(NSNumber *)storeAccountIdentifier;
-(NSString *)storeFlavorIdentifier;
-(void)setStoreFlavorIdentifier:(NSString *)arg1 ;
-(NSNumber *)storeVersionIdentifier;
-(void)setStoreVersionIdentifier:(NSNumber *)arg1 ;
@end

