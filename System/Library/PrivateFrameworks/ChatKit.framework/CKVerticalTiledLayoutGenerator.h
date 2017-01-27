/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTiledLayoutGenerator.h>

@interface CKVerticalTiledLayoutGenerator : CKTiledLayoutGenerator {

	CGPoint _origin;
	SCD_Struct_CK9 _enqueuedCaptionTileInfo;
	BOOL _shouldDisplayCaptionsBelowBatches;
	double _referenceWidth;

}

@property (assign,nonatomic) double referenceWidth;                               //@synthesize referenceWidth=_referenceWidth - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayCaptionsBelowBatches;              //@synthesize shouldDisplayCaptionsBelowBatches=_shouldDisplayCaptionsBelowBatches - In the implementation block
-(void)setShouldDisplayCaptionsBelowBatches:(BOOL)arg1 ;
-(BOOL)shouldDisplayCaptionsBelowBatches;
-(void)setReferenceWidth:(double)arg1 ;
-(void)willParseTiles;
-(BOOL)_parseTileRequiringFullWidth;
-(BOOL)_parseSpecialSequence;
-(BOOL)_parseSpecialTileTriplet;
-(BOOL)_parseTileTriplet;
-(BOOL)_parseTilePair;
-(BOOL)_parseSingleTile;
-(void)didParseTiles;
-(BOOL)_dequeueCaption;
-(double)referenceWidth;
-(BOOL)_addRowWithContiguousTiles:(SCD_Struct_CK10*)arg1 count:(long long)arg2 ;
-(BOOL)_scanTilePair:(SCD_Struct_CK10*)arg1 ;
-(BOOL)_scanTileTriplet:(SCD_Struct_CK10*)arg1 ;
-(BOOL)_scanTileRequiringFullWidth:(SCD_Struct_CK10*)arg1 ;
-(BOOL)_scanTileRequiringNewRow:(SCD_Struct_CK10*)arg1 ;
-(BOOL)_hasLeftSuboptimalRow;
-(BOOL)_addRowWithTiles:(SCD_Struct_CK10*)arg1 imageFrames:(CGRect*)arg2 count:(long long)arg3 ;
-(BOOL)_scanTripletWithLargeLead:(SCD_Struct_CK10*)arg1 ;
-(BOOL)_scanTripletWithRearrangment:(SCD_Struct_CK10*)arg1 ;
-(BOOL)_parseSpecialSubsequenceWithRowRequired:(BOOL)arg1 rowParsed:(BOOL*)arg2 ;
-(BOOL)_scanSpecialSequenceBlock:(SCD_Struct_CK10*)arg1 ;
-(BOOL)_scanSpecialSequenceRow:(SCD_Struct_CK10*)arg1 count:(long long*)arg2 ;
-(BOOL)_addSpecialSequenceBlock:(SCD_Struct_CK10*)arg1 ;
-(BOOL)_scanNonPanoramaSequence:(SCD_Struct_CK10*)arg1 count:(long long)arg2 ;
-(BOOL)_isAtEndOfRow;
-(BOOL)_hasEnqueuedCaption;
-(void)_enumerateRowFramesWithContiguousTiles:(SCD_Struct_CK10*)arg1 count:(long long)arg2 useMagneticGuidelines:(BOOL)arg3 block:(/*^block*/id)arg4 ;
-(void)_willAddRowWithFirstTileInfo:(SCD_Struct_CK10)arg1 ;
-(void)_enqueueCaptionWithTileInfo:(SCD_Struct_CK10)arg1 ;
-(BOOL)parseNextTiles;
-(double)referenceDistanceForMagneticGuidelines;
@end

