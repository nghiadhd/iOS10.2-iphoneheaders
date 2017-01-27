/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OADParagraphProperties, NSMutableArray, OADCharacterProperties;

@interface OADParagraph : NSObject {

	OADParagraphProperties* mProperties;
	NSMutableArray* mTextRuns;
	OADCharacterProperties* mParagraphEndCharacterProperties;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(BOOL)isEmpty;
-(void)applyProperties:(id)arg1 ;
-(id)properties;
-(id)plainText;
-(unsigned long long)textRunCount;
-(id)textRunAtIndex:(unsigned long long)arg1 ;
-(id)paragraphEndCharacterProperties;
-(id)addRegularTextRun;
-(id)addTextLineBreak;
-(id)addDateTimeFieldWithFormat:(int)arg1 ;
-(id)addGenericTextFieldWithGuid:(id)arg1 type:(id)arg2 ;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
-(void)changeParentParagraphPropertiesPreservingEffectiveValues:(id)arg1 ;
-(void)removeAllTextRuns;
-(unsigned long long)lineBreakCount;
-(id)addFooterField;
-(void)setParagraphEndCharacterProperties:(id)arg1 ;
-(BOOL)hasBulletCharacterProperties;
-(id)bulletCharacterProperties;
-(BOOL)isSimilarToParagraph:(id)arg1 ;
-(void)removeUnnecessaryOverrides;
-(unsigned long long)characterCount;
-(id)findFirstTextRunOfClass:(Class)arg1 ;
-(id)addSlideNumberField;
@end

