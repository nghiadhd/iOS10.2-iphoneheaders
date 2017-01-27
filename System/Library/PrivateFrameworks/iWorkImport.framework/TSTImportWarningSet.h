/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSSPropertyCommandSerializing.h>

@class NSString;

@interface TSTImportWarningSet : NSObject <TSSPropertyCommandSerializing> {

	TSTImportWarningSetCellWarningFlags mCellWarning;
	NSString* mOriginalDataFormat;
	TSTImportFormulaWarning mFormulaWarning;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)p_warningSetForFormulaWarningType:(long long)arg1 originalFormula:(id)arg2 supplementaryText:(id)arg3 ;
+(id)warningSetForCondFormatAboveAvgEqualAvg;
+(id)warningSetForCondFormatAboveAvgStdDev;
+(id)warningSetForCondFormatComplexFormula;
+(id)warningSetForCondFormatContainsErrors;
+(id)warningSetForCondFormatExpr;
+(id)warningSetForCondFormatNotContainsErrors;
+(id)warningSetForCondFormatParamatersNotAllTheSame;
+(id)warningSetForCondFormatStopIfTrue;
+(id)warningSetForCondFormatUnsupportedOperator;
+(id)warningSetForCondFormatUnsupportedStyling;
+(id)warningSetForCondFormatUnsupportedTimePeriod;
+(id)warningSetForUnsupportedCondFormat;
+(id)warningSetForUnsupportedDataFormat:(id)arg1 ;
+(id)emptyWarningSet;
+(id)warningSetFor3DReferenceFormula:(id)arg1 ;
+(id)warningSetForArrayedFormula:(id)arg1 ;
+(id)warningSetForDifferentBehaviorForFunctionFormula:(id)arg1 originalFormula:(id)arg2 ;
+(id)warningSetForErrorTokenFormula:(id)arg1 ;
+(id)warningSetForExternalReferenceFormula:(id)arg1 ;
+(id)warningSetForNaturalLanguageFormula:(id)arg1 ;
+(id)warningSetForReferenceOutOfBoundsFormula:(id)arg1 ;
+(id)warningSetForSharedFormulaBaseNotFoundFormula:(id)arg1 ;
+(id)warningSetForUnknownName:(id)arg1 originalFormula:(id)arg2 ;
+(id)warningSetForUnsupportedFormula:(id)arg1 ;
+(id)warningSetForUnsupportedFunction:(id)arg1 originalFormula:(id)arg2 ;
+(id)warningSetForUnsupportedNameFormula:(id)arg1 originalFormula:(id)arg2 ;
+(id)warningSetForTransposedWithoutIssues:(id)arg1 ;
+(id)warningSetForTransposedWithIssues:(id)arg1 ;
+(id)warningSetForTransposeUnmodifiedWithIssues;
+(id)cellDiffClearingAllWarningsWithContext:(id)arg1 ;
-(id)initFromArchive:(const ImportWarningSetArchive*)arg1 ;
-(id)initFromPropertyCommandMessage:(const Message*)arg1 unarchiver:(id)arg2 ;
-(void)saveToPropertyCommandMessage:(Message*)arg1 archiver:(id)arg2 ;
-(id)localizedWarningStrings;
-(BOOL)areAnySet;
-(id)individualWarnings;
-(id)warningSetByAddingWarningsFromSet:(id)arg1 ;
-(id)cellDiffClearingWarningsWithContext:(id)arg1 ;
-(id)warningSetByRemovingWarningsFromSet:(id)arg1 ;
-(BOOL)isTransposeWarning;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)saveToArchive:(ImportWarningSetArchive*)arg1 ;
@end

