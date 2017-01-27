/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WDDocument, WDParagraphProperties, WDCharacterProperties, WDOfficeArt, NSMutableString;

@interface WDListLevel : NSObject {

	WDDocument* mDocument;
	WDParagraphProperties* mParagraphProperties;
	WDCharacterProperties* mCharacterProperties;
	WDOfficeArt* mImage;
	long long mStartNumber;
	int mNumberFormat;
	BOOL mRestartNumbering;
	long long mRestartLevel;
	BOOL mLegal;
	int mSuffix;
	NSMutableString* mText;
	BOOL mLegacy;
	long long mLegacySpace;
	long long mLegacyIndent;
	int mJustification;

}
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)image;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(void)setLegacy:(BOOL)arg1 ;
-(int)numberFormat;
-(void)setNumberFormat:(int)arg1 ;
-(id)paragraphProperties;
-(id)characterProperties;
-(int)justification;
-(long long)startNumber;
-(BOOL)restartLevelOverridden;
-(long long)restartLevel;
-(void)setStartNumber:(long long)arg1 ;
-(void)setJustification:(int)arg1 ;
-(void)setSuffix:(int)arg1 ;
-(BOOL)startNumberOverridden;
-(BOOL)numberFormatOverridden;
-(BOOL)imageBullet;
-(BOOL)imageBulletOverridden;
-(BOOL)restartNumbering;
-(void)setRestartNumbering:(BOOL)arg1 ;
-(BOOL)restartNumberingOverridden;
-(void)setRestartLevel:(long long)arg1 ;
-(BOOL)legal;
-(void)setLegal:(BOOL)arg1 ;
-(BOOL)legalOverridden;
-(int)suffix;
-(BOOL)suffixOverridden;
-(BOOL)textOverridden;
-(BOOL)legacy;
-(long long)legacySpace;
-(void)setLegacySpace:(long long)arg1 ;
-(long long)legacyIndent;
-(void)setLegacyIndent:(long long)arg1 ;
-(BOOL)justificationOverridden;
@end

