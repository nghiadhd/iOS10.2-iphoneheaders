/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDCollection, EDContentFormatsCollection, EDFontsCollection, EDStylesCollection, EDColorsCollection, EDLinksCollection, EDTableStylesCollection;

@interface EDResources : NSObject {

	EDCollection* mStrings;
	EDContentFormatsCollection* mContentFormats;
	EDFontsCollection* mFonts;
	EDCollection* mAlignmentInfos;
	EDStylesCollection* mStyles;
	EDColorsCollection* mColors;
	EDColorsCollection* mThemes;
	EDCollection* mNames;
	EDLinksCollection* mLinks;
	EDCollection* mBorders;
	EDCollection* mBorder;
	EDCollection* mFills;
	EDCollection* mDifferentialStyles;
	EDTableStylesCollection* mTableStyles;

}
-(void)setColors:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)strings;
-(id)colors;
-(id)fonts;
-(id)names;
-(id)themes;
-(id)links;
-(id)borders;
-(id)styles;
-(id)fills;
-(id)tableStyles;
-(id)contentFormats;
-(id)initWithStringOptimization:(BOOL)arg1 ;
-(id)border;
-(id)differentialStyles;
-(id)alignmentInfos;
-(void)setThemes:(id)arg1 ;
@end

