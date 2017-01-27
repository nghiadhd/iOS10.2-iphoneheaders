/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCEFormulaOwning.h>

@class TSTTableInfo, TSCECalculationEngine, TSCECellCoordinateVector, NSString;

@interface TSTConditionalStyleFormulaOwner : NSObject <TSCEFormulaOwning> {

	TSTTableInfo* mTableInfo;
	TSCECalculationEngine* mCalculationEngine;
	CFUUIDRef mOwnerID;
	TSCECellCoordinateVector* mCellsToInvalidate;
	TSCECellCoordinateVector* mCellsToRewrite;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)releaseForCalculationEngine:(id)arg1 ;
-(void)retainForCalculationEngine:(id)arg1 ;
-(void)beginRewriteForCalculationEngine:(id)arg1 spec:(id)arg2 ;
-(void)rewriteForCalculationEngine:(id)arg1 formulaID:(SCD_Struct_TS362)arg2 rewriteSpec:(id)arg3 ;
-(SCD_Struct_TS398)recalculateForCalculationEngine:(id)arg1 formulaID:(SCD_Struct_TS362)arg2 isInCycle:(BOOL)arg3 hasCalculatedPrecedents:(BOOL)arg4 ;
-(void)writeResultsForCalculationEngine:(id)arg1 ;
-(void)invalidateForCalculationEngine:(id)arg1 ;
-(int)registerWithCalculationEngine:(id)arg1 ;
-(id)initWithTableInfo:(id)arg1 ;
-(id)initWithTableInfo:(id)arg1 ownerID:(CFUUIDRef)arg2 ;
-(void)removeFormulasInRange:(TSUCellRect)arg1 ;
-(void)replaceFormulaForConditionalStyle:(id)arg1 atCellID:(TSUCellCoord)arg2 ;
-(void)setTableInfo:(id)arg1 ;
-(id)tableInfo;
-(void)removeFormulaAtCellID:(TSUCellCoord)arg1 ;
-(void)addFormulaForConditionalStyle:(id)arg1 atCellID:(TSUCellCoord)arg2 ;
-(BOOL)checkConditionForCellID:(TSUCellCoord)arg1 withConditionalStyle:(id)arg2 withIndex:(unsigned long long*)arg3 ;
-(void)changedConditionForCellID:(TSUCellCoord)arg1 ;
-(void)dealloc;
-(void)setOwnerID:(CFUUIDRef)arg1 ;
-(CFUUIDRef)ownerID;
@end

