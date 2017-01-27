/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartLabelsContainingSceneObject.h>

@protocol TSCH3DAxisLabelPositionerNSObject;
@interface TSCH3DChartAxisLabelsSceneObject : TSCH3DChartLabelsContainingSceneObject {

	id<TSCH3DAxisLabelPositioner><NSObject> mValueLabelPositioner;
	id<TSCH3DAxisLabelPositioner><NSObject> mCategoryLabelPositioner;

}

@property (retain) id<TSCH3DAxisLabelPositioner> valueLabelPositioner; 
@property (retain) id<TSCH3DAxisLabelPositioner> categoryLabelPositioner; 
+(unsigned)valueAxisLabelAlignmentForScene:(id)arg1 ;
+(TSCH3DScenePart)partWithEnumerator:(id)arg1 chartInfo:(id)arg2 styleIndex:(unsigned long long)arg3 ;
+(void)setSelectionPath:(id)arg1 selectionMode:(int)arg2 forScene:(id)arg3 ;
+(void)cacheValueAxisLabelAlignmentForScene:(id)arg1 ;
-(id<TSCH3DAxisLabelPositioner>)valueLabelPositioner;
-(unsigned)alignmentForPositioner:(id)arg1 scene:(id)arg2 enumerator:(id)arg3 returningDirection:(tvec3<float>*)arg4 ;
-(tvec3<float>)labelPositionDirectionForScene:(id)arg1 enumerator:(id)arg2 ;
-(tvec3<float>)p_valueLabelsOffsetFromAccessor:(const ChartScenePropertyAccessor*)arg1 ;
-(void)p_renderLabels:(id)arg1 labelType:(int)arg2 part:(TSCH3DScenePart)arg3 positioner:(id)arg4 offset:(const tvec3<float>*)arg5 offset2DBlock:(/*^block*/id)arg6 strideBlock:(/*^block*/id)arg7 skipFirst:(BOOL)arg8 showLast:(BOOL)arg9 ;
-(id<TSCH3DAxisLabelPositioner>)categoryLabelPositioner;
-(tvec3<float>)p_categoryLabelsOffsetFromAccessor:(const ChartScenePropertyAccessor*)arg1 ;
-(long long)p_categoryStride:(id)arg1 ;
-(void)p_setOffset:(const tvec3<float>*)arg1 forLabelType:(int)arg2 pipeline:(id)arg3 part:(TSCH3DScenePart)arg4 positioner:(id)arg5 ;
-(void)postRenderBounds:(id)arg1 ;
-(void)p_renderValueLabels:(id)arg1 ;
-(void)p_renderCategoryLabels:(id)arg1 ;
-(id)selectionPathForInfo:(id)arg1 axis:(id)arg2 selectionPathLabelIndex:(unsigned long long)arg3 ;
-(void)renderLabels:(id)arg1 ;
-(void)renderAnnotatedLabels:(id)arg1 ;
-(id)selectionPathForInfo:(id)arg1 scene:(id)arg2 pickedPoint:(id)arg3 ;
-(id)convertSelectionPathTo3D:(id)arg1 path:(id)arg2 ;
-(int)knobsModeForLabelType:(int)arg1 scene:(id)arg2 ;
-(BOOL)canRenderSelectionPath:(id)arg1 forInfo:(id)arg2 ;
-(BOOL)canEditTextForSelectionPath:(id)arg1 forInfo:(id)arg2 ;
-(id)renderInfoForSelectionPath:(id)arg1 info:(id)arg2 ;
-(void)setValueLabelPositioner:(id<TSCH3DAxisLabelPositioner>)arg1 ;
-(void)setCategoryLabelPositioner:(id<TSCH3DAxisLabelPositioner>)arg1 ;
-(void)dealloc;
-(id)effects;
@end

