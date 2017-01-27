/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, CPZone, CPPage;

@interface CPParagraphMaker : NSObject {

	NSMutableArray* avail;
	NSMutableArray* paragraphs;
	NSMutableArray* compoundedShapesOnPage;
	BOOL spacingSet;
	double currentSpacing;
	CPZone* parent;
	CPPage* page;

}
+(BOOL)line:(id)arg1 alignsWith:(id)arg2 ;
-(void)dealloc;
-(void)makeParagraphsIn:(id)arg1 ;
-(id)paragraphs;
-(BOOL)line:(id)arg1 isDirectlyBelow:(id)arg2 ;
-(BOOL)line:(id)arg1 isBelow:(id)arg2 ;
-(int)indexOfUniqueLineBelow:(id)arg1 from:(int)arg2 ;
-(int)linesThatOverlapLineAt:(int)arg1 between:(double)arg2 and:(double)arg3 from:(int)arg4 ;
-(BOOL)isGraphicBetween:(id)arg1 and:(id)arg2 ;
-(unsigned long long)alignmentOf:(id)arg1 and:(id)arg2 ;
-(BOOL)fitsBelow:(id)arg1 alignment:(unsigned long long)arg2 spacing:(double)arg3 from:(int)arg4 ;
-(BOOL)spacingOf:(id)arg1 and:(id)arg2 and:(id)arg3 is:(double*)arg4 ;
-(unsigned long long)alignmentOf:(id)arg1 and:(id)arg2 and:(id)arg3 ;
-(BOOL)styleOf:(id)arg1 differsFromStyleOf:(id)arg2 ;
-(BOOL)firstWordOf:(id)arg1 fits:(id)arg2 indent:(double)arg3 ;
-(BOOL)line:(id)arg1 isAlignedWith:(id)arg2 ;
-(int)paragraph:(id)arg1 splits:(id)arg2 ;
-(void)addCompoundedShapesOn:(id)arg1 to:(id)arg2 ;
-(id)newInitialParagraph;
-(void)addLinesTo:(id)arg1 ;
@end

