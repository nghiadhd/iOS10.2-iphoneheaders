/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHRenderer.h>

@interface TSCHChartAbstractLineElementsRenderer : TSCHRenderer
-(void)p_renderIntoContext:(CGContextRef)arg1 visible:(CGRect)arg2 ;
-(int)chunkPlane;
-(id)p_findChartRootLayoutItem:(id)arg1 ;
-(BOOL)useBlendModeCopyForTransparencyLayer;
-(void)p_setupContextForRendering:(CGContextRef)arg1 layerRect:(CGRect)arg2 modelCache:(id)arg3 shadow:(id)arg4 outDidEnableTransparencyLayer:(BOOL*)arg5 ;
-(CGAffineTransform)p_adjustTransformForAADefeatInContext:(CGContextRef)arg1 inTransform:(CGAffineTransform)arg2 forSeriesShape:(CGPathRef)arg3 inBodyBounds:(CGRect)arg4 ;
-(void)p_clipOutSymbolsInContext:(CGContextRef)arg1 withTransformArray:(CGAffineTransform*)arg2 withCount:(unsigned long long)arg3 forSeries:(id)arg4 ;
-(void)p_renderLabelsIntoContext:(CGContextRef)arg1 seriesIndex:(unsigned long long)arg2 model:(id)arg3 modelCache:(id)arg4 bodyLayoutItem:(id)arg5 valueSet:(id)arg6 ;
-(void)p_finishContextAfterRendering:(CGContextRef)arg1 modelCache:(id)arg2 didEnableTransparencyLayer:(BOOL)arg3 ;
-(id)symbolTransformsForRenderingElements;
@end

