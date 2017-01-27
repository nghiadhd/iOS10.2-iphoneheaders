/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSBundle, NSString;

@interface SKUILocalizedStringTable : NSObject {

	NSDictionary* _strings;
	NSBundle* _bundle;
	NSString* _tableName;

}

@property (nonatomic,readonly) NSBundle * bundle;                 //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) NSString * tableName;              //@synthesize tableName=_tableName - In the implementation block
-(NSBundle *)bundle;
-(id)localizedStringForKey:(id)arg1 ;
-(NSString *)tableName;
-(id)initWithBundle:(id)arg1 localeName:(id)arg2 tableName:(id)arg3 ;
-(id)_legacyLanguageNameForLanguageCode:(id)arg1 ;
@end

