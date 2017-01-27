/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TIKeyboardLayoutState : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hasCandidateKey;
	BOOL _hasAccentKey;
	BOOL _canMultitap;
	BOOL _isAlphabeticPlane;
	BOOL _diacriticForwardCompose;
	BOOL _interfaceIdiomIsPad;
	NSString* _inputMode;
	NSString* _layoutTag;
	long long _userInterfaceIdiom;

}

@property (nonatomic,copy) NSString * inputMode;                        //@synthesize inputMode=_inputMode - In the implementation block
@property (assign,nonatomic) BOOL hasCandidateKey;                      //@synthesize hasCandidateKey=_hasCandidateKey - In the implementation block
@property (assign,nonatomic) BOOL hasAccentKey;                         //@synthesize hasAccentKey=_hasAccentKey - In the implementation block
@property (assign,nonatomic) BOOL canMultitap;                          //@synthesize canMultitap=_canMultitap - In the implementation block
@property (assign,nonatomic) BOOL isAlphabeticPlane;                    //@synthesize isAlphabeticPlane=_isAlphabeticPlane - In the implementation block
@property (assign,nonatomic) BOOL diacriticForwardCompose;              //@synthesize diacriticForwardCompose=_diacriticForwardCompose - In the implementation block
@property (nonatomic,copy) NSString * layoutTag;                        //@synthesize layoutTag=_layoutTag - In the implementation block
@property (assign,nonatomic) long long userInterfaceIdiom;              //@synthesize userInterfaceIdiom=_userInterfaceIdiom - In the implementation block
@property (assign,nonatomic) BOOL interfaceIdiomIsPad;                  //@synthesize interfaceIdiomIsPad=_interfaceIdiomIsPad - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setInterfaceIdiomIsPad;
-(void)setInterfaceIdiomIsPad:(BOOL)arg1 ;
-(long long)userInterfaceIdiom;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isAlphabeticPlane;
-(void)setInputMode:(NSString *)arg1 ;
-(void)setHasCandidateKey:(BOOL)arg1 ;
-(BOOL)hasAccentKey;
-(void)setHasAccentKey:(BOOL)arg1 ;
-(BOOL)canMultitap;
-(void)setCanMultitap:(BOOL)arg1 ;
-(void)setIsAlphabeticPlane:(BOOL)arg1 ;
-(BOOL)diacriticForwardCompose;
-(void)setDiacriticForwardCompose:(BOOL)arg1 ;
-(NSString *)layoutTag;
-(void)setLayoutTag:(NSString *)arg1 ;
-(void)setUserInterfaceIdiom:(long long)arg1 ;
-(NSString *)inputMode;
-(BOOL)hasCandidateKey;
-(BOOL)interfaceIdiomIsPad;
@end

