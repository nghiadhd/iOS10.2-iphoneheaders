/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPRegion.h>
#import <libobjc.A.dylib/CPGraphicUser.h>

@class NSMutableArray, CPZoneProfile, NSArray, CPCharSequence;

@interface CPZone : CPRegion <CPGraphicUser> {

	NSMutableArray* zoneBorders;
	CGPoint* outerVertices;
	CGPoint* swollenOuterVertices;
	double area;
	BOOL isStraddleZone;
	CPZoneProfile* zoneProfile;
	NSArray* leftGuides;
	NSArray* rightGuides;
	NSArray* gutters;
	NSArray* spacers;
	CPCharSequence* charactersInZone;
	NSMutableArray* textLinesInZone;
	NSArray* graphicsInZone;
	NSMutableArray* backgroundGraphics;
	unsigned usedGraphicCount;

}
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)area;
-(unsigned)vertexCount;
-(BOOL)contains:(id)arg1 ;
-(id)textLinesInZone;
-(void)accept:(id)arg1 ;
-(CGPoint*)outerVertices;
-(void)incrementUsedGraphicCount;
-(BOOL)isZone;
-(unsigned)usedGraphicCount;
-(CGRect)zoneBounds;
-(CGColorRef)newBackgroundColor;
-(unsigned)wordCount;
-(id)backgroundGraphics;
-(BOOL)mapToWordsWithIndex:(/*function pointer*/void*)arg1 passing:(void*)arg2 ;
-(BOOL)mapToWords:(/*function pointer*/void*)arg1 passing:(void*)arg2 ;
-(BOOL)mapToWordPairs:(/*function pointer*/void*)arg1 passing:(void*)arg2 ;
-(BOOL)mapToWordPairsWithIndex:(/*function pointer*/void*)arg1 passing:(void*)arg2 ;
-(BOOL)bordersWindClockwise;
-(BOOL)hasNeighborShape:(id)arg1 ;
-(long long)borderZOrder;
-(long long)neighborZOrder;
-(CGRect)zoneBoundsFromVertices:(CGPoint*)arg1 ofCount:(unsigned)arg2 ;
-(CGPoint*)swollenOuterVertices;
-(BOOL)hasBorders;
-(id)zoneBorders;
-(id)graphicsInZone;
-(void)setZoneBorders:(id)arg1 ;
-(void)removeUnfilledNeighborShapes;
-(CGRect)swollenZoneBounds;
-(BOOL)rectangleBordersAtLeft:(id*)arg1 top:(id*)arg2 right:(id*)arg3 bottom:(id*)arg4 ;
-(BOOL)canContain:(CGRect)arg1 ;
-(void)addPDFChar:(void*)arg1 ;
-(void)setCharactersInZone:(id)arg1 ;
-(id)charactersInZone;
-(void)addContentFrom:(id)arg1 ;
-(long long)compareArea:(id)arg1 ;
-(BOOL)isStraddleZone;
-(void)setIsStraddleZone:(BOOL)arg1 ;
-(id)zoneProfile;
-(void)setZoneProfile:(id)arg1 ;
-(void)setLeftGuides:(id)arg1 ;
-(id)leftGuides;
-(void)setRightGuides:(id)arg1 ;
-(id)rightGuides;
-(void)setGutters:(id)arg1 ;
-(id)gutters;
-(void)setSpacers:(id)arg1 ;
-(id)spacers;
-(BOOL)isRectangular;
@end

