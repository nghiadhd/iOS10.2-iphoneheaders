/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AXCharacterSoundMap : NSObject {

	NSMutableDictionary* _phDictionaries;

}

@property (nonatomic,retain) NSMutableDictionary * phDictionaries;              //@synthesize phDictionaries=_phDictionaries - In the implementation block
-(id)init;
-(void)dealloc;
-(id)_linguisticStringForCharacter:(id)arg1 language:(id)arg2 linguisticType:(long long)arg3 andVoiceIdentifier:(id)arg4 ;
-(id)phonemeStringForCharacter:(id)arg1 forLanguage:(id)arg2 andVoiceIdentifier:(id)arg3 ;
-(id)phoneticStringForCharacter:(id)arg1 forLanguage:(id)arg2 andVoiceIdentifier:(id)arg3 ;
-(NSMutableDictionary *)phDictionaries;
-(void)setPhDictionaries:(NSMutableDictionary *)arg1 ;
@end

