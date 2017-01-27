/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSDShapeStylePropertyChangeSet.h>

@class TSWPSpecColumns, TSWPSpecPadding, TSSSpecBool, TSSSpecInteger, TSWPSpecParagraphStyle;

@interface TSWPShapeStylePropertyChangeSet : TSDShapeStylePropertyChangeSet {

	TSWPSpecColumns* _columns;
	TSWPSpecPadding* _padding;
	TSSSpecBool* _shrinkTextToFit;
	TSSSpecInteger* _verticalAlignment;
	TSSSpecBool* _verticalText;
	TSWPSpecParagraphStyle* _defaultParagraphStyle;
	BOOL _definedColumns;
	BOOL _definedPadding;
	BOOL _definedShrinkTextToFit;
	BOOL _definedVerticalAlignment;
	BOOL _definedVerticalText;
	BOOL _definedDefaultParagraphStyle;

}
-(void)setBoxedValue:(id)arg1 forProperty:(int)arg2 ;
-(void)setSpec:(id)arg1 forProperty:(int)arg2 ;
-(void)setUnsetSpecForProperty:(int)arg1 ;
-(void)enumerateDefinedPropertiesWithBlock:(/*^block*/id)arg1 ;
@end

