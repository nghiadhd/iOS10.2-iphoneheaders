/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecCardSection.h>

@class NSString, NSArray, WBSParsecImageRepresentation, NSNumber;

@interface WBSParsecRichTitleCardSection : WBSParsecCardSection {

	BOOL _centered;
	BOOL _includesSeparateLineForRottenTomatoes;
	NSString* _titleText;
	NSString* _subtitle;
	NSArray* _moreGlyphs;
	WBSParsecImageRepresentation* _rottenTomatoesGlyph;
	NSString* _rottenTomatoesText;
	NSNumber* _rating;
	NSString* _ratingText;
	WBSParsecImageRepresentation* _image;

}

@property (nonatomic,copy,readonly) NSString * titleText;                                       //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                        //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSArray * moreGlyphs;                                            //@synthesize moreGlyphs=_moreGlyphs - In the implementation block
@property (getter=isCentered,nonatomic,readonly) BOOL centered;                                 //@synthesize centered=_centered - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * rottenTomatoesGlyph;              //@synthesize rottenTomatoesGlyph=_rottenTomatoesGlyph - In the implementation block
@property (nonatomic,copy,readonly) NSString * rottenTomatoesText;                              //@synthesize rottenTomatoesText=_rottenTomatoesText - In the implementation block
@property (nonatomic,readonly) BOOL includesSeparateLineForRottenTomatoes;                      //@synthesize includesSeparateLineForRottenTomatoes=_includesSeparateLineForRottenTomatoes - In the implementation block
@property (nonatomic,readonly) NSNumber * rating;                                               //@synthesize rating=_rating - In the implementation block
@property (nonatomic,copy,readonly) NSString * ratingText;                                      //@synthesize ratingText=_ratingText - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * image;                            //@synthesize image=_image - In the implementation block
+(id)_specializedCardSectionSchema;
-(WBSParsecImageRepresentation *)image;
-(NSString *)subtitle;
-(id)_initWithDictionary:(id)arg1 ;
-(NSNumber *)rating;
-(NSString *)titleText;
-(NSArray *)moreGlyphs;
-(NSString *)rottenTomatoesText;
-(BOOL)isCentered;
-(WBSParsecImageRepresentation *)rottenTomatoesGlyph;
-(BOOL)includesSeparateLineForRottenTomatoes;
-(NSString *)ratingText;
@end

