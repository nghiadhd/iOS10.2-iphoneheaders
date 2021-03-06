/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSSStylePropertyChangeSet.h>

@class TSSSpecDouble, TSSSpecInteger, TSSSpecString, TSSSpecBool, TSSSpecColor, TSWPSpecFontFeatures, TSDSpecShadow;

@interface TSWPCharacterStylePropertyChangeSet : TSSStylePropertyChangeSet {

	TSSSpecDouble* _baselineShift;
	TSSSpecInteger* _capitalization;
	TSSSpecString* _compatibilityFontName;
	TSSSpecString* _emphasisMarks;
	TSSSpecBool* _bold;
	TSSSpecBool* _italic;
	TSSSpecColor* _fontColor;
	TSWPSpecFontFeatures* _fontFeatures;
	TSSSpecString* _fontName;
	TSSSpecDouble* _fontSize;
	TSSSpecDouble* _fontSizeDelta;
	TSSSpecDouble* _kerning;
	TSSSpecString* _language;
	TSSSpecInteger* _ligatures;
	TSSSpecDouble* _outline;
	TSSSpecColor* _outlineColor;
	TSDSpecShadow* _textShadow;
	TSSSpecColor* _strikethruColor;
	TSSSpecInteger* _strikethru;
	TSSSpecDouble* _strikethruWidth;
	TSSSpecInteger* _superscript;
	TSSSpecColor* _textBackground;
	TSSSpecDouble* _tracking;
	TSSSpecColor* _underlineColor;
	TSSSpecInteger* _underline;
	TSSSpecDouble* _underlineWidth;
	TSSSpecBool* _wordStrikethru;
	TSSSpecBool* _wordUnderline;
	TSSSpecInteger* _writingDirection;
	BOOL _definedBaselineShift;
	BOOL _definedCapitalization;
	BOOL _definedCompatibilityFontName;
	BOOL _definedEmphasisMarks;
	BOOL _definedBold;
	BOOL _definedItalic;
	BOOL _definedFontColor;
	BOOL _definedFontFeatures;
	BOOL _definedFontName;
	BOOL _definedFontSize;
	BOOL _definedFontSizeDelta;
	BOOL _definedKerning;
	BOOL _definedLanguage;
	BOOL _definedLigatures;
	BOOL _definedOutline;
	BOOL _definedOutlineColor;
	BOOL _definedTextShadow;
	BOOL _definedStrikethruColor;
	BOOL _definedStrikethru;
	BOOL _definedStrikethruWidth;
	BOOL _definedSuperscript;
	BOOL _definedTextBackground;
	BOOL _definedTracking;
	BOOL _definedUnderlineColor;
	BOOL _definedUnderline;
	BOOL _definedUnderlineWidth;
	BOOL _definedWordStrikethru;
	BOOL _definedWordUnderline;
	BOOL _definedWritingDirection;

}
-(void)setBoxedValue:(id)arg1 forProperty:(int)arg2 ;
-(void)setSpec:(id)arg1 forProperty:(int)arg2 ;
-(void)setUnsetSpecForProperty:(int)arg1 ;
-(void)enumerateDefinedPropertiesWithBlock:(/*^block*/id)arg1 ;
@end

