/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecCardSection.h>

@class WBSParsecImageRepresentation, NSString, NSArray;

@interface WBSParsecMovieCardSection : WBSParsecCardSection {

	WBSParsecImageRepresentation* _imageRepresentation;
	WBSParsecImageRepresentation* _rottenTomatoesGlyphRepresentation;
	NSString* _rottenTomatoesText;
	NSArray* _sections;
	NSArray* _buyButtonSections;

}

@property (nonatomic,readonly) WBSParsecImageRepresentation * imageRepresentation;                            //@synthesize imageRepresentation=_imageRepresentation - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * rottenTomatoesGlyphRepresentation;              //@synthesize rottenTomatoesGlyphRepresentation=_rottenTomatoesGlyphRepresentation - In the implementation block
@property (nonatomic,copy,readonly) NSString * rottenTomatoesText;                                            //@synthesize rottenTomatoesText=_rottenTomatoesText - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sections;                                                       //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy,readonly) NSArray * buyButtonSections;                                              //@synthesize buyButtonSections=_buyButtonSections - In the implementation block
+(id)_specializedCardSectionSchema;
-(id)_initWithDictionary:(id)arg1 ;
-(NSArray *)sections;
-(WBSParsecImageRepresentation *)imageRepresentation;
-(WBSParsecImageRepresentation *)rottenTomatoesGlyphRepresentation;
-(NSString *)rottenTomatoesText;
-(NSArray *)buyButtonSections;
@end

