/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DictionaryUI.framework/DictionaryUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DictionaryUI/DictionaryUI-Structs.h>
@class ASAsset, NSString;

@interface DUDefinitionDictionary : NSObject {

	DCSDictionaryRef _dictionary;
	ASAsset* _assetToUpgrade;
	BOOL _activated;
	BOOL _isAppleDictionary;
	BOOL _isTTYDictionary;
	float _progress;
	ASAsset* _rawAsset;
	NSString* _definitionLanguage;

}

@property (assign) BOOL isAppleDictionary;                            //@synthesize isAppleDictionary=_isAppleDictionary - In the implementation block
@property (assign) BOOL isTTYDictionary;                              //@synthesize isTTYDictionary=_isTTYDictionary - In the implementation block
@property (readonly) ASAsset * rawAsset;                              //@synthesize rawAsset=_rawAsset - In the implementation block
@property (readonly) NSString * localizedLanguageName; 
@property (readonly) NSString * localizedSortName; 
@property (readonly) NSString * localizedDictionaryName; 
@property (readonly) NSString * definitionLanguage;                   //@synthesize definitionLanguage=_definitionLanguage - In the implementation block
@property (assign,nonatomic) BOOL activated;                          //@synthesize activated=_activated - In the implementation block
@property (assign) float progress;                                    //@synthesize progress=_progress - In the implementation block
+(id)displayNameForLanguageIdentifier:(id)arg1 forSorting:(BOOL)arg2 ;
-(void)dealloc;
-(id)description;
-(void)setProgress:(float)arg1 ;
-(float)progress;
-(NSString *)localizedDictionaryName;
-(ASAsset *)rawAsset;
-(id)_HTMLDefinitionForTerm:(id)arg1 type:(long long)arg2 ;
-(id)_shortHTMLDefinitionForTerm:(id)arg1 ;
-(id)_attributedDefinitionForTerm:(id)arg1 ;
-(id)_fullHTMLDefinitionForTerm:(id)arg1 ;
-(BOOL)activated;
-(id)initWithAsset:(id)arg1 ;
-(NSString *)localizedLanguageName;
-(BOOL)_hasDefinitionForTerm:(id)arg1 ;
-(id)_definitionValueForTerm:(id)arg1 ;
-(NSString *)definitionLanguage;
-(void)setActivated:(BOOL)arg1 ;
-(void)setIsAppleDictionary:(BOOL)arg1 ;
-(void)setIsTTYDictionary:(BOOL)arg1 ;
-(id)localizedLanguageName:(BOOL)arg1 ;
-(BOOL)isAppleDictionary;
-(BOOL)isTTYDictionary;
-(void)setAssetToUpgrade:(id)arg1 ;
-(NSString *)localizedSortName;
@end

