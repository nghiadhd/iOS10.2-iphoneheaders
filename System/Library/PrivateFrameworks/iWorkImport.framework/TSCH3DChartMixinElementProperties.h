/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartElementProperties.h>

@class TSCH3DChartElementProperties;

@interface TSCH3DChartMixinElementProperties : TSCH3DChartElementProperties {

	TSCH3DChartElementProperties* mOriginal;

}
+(id)propertiesWithProperties:(id)arg1 ;
-(float)elementTransformDepthFromPropertyAccessor:(const ChartScenePropertyAccessor*)arg1 ;
-(id)chartTransform;
-(BOOL)applyElementTransform:(ObjectTransforms*)arg1 series:(id)arg2 index:(const tvec2<int>*)arg3 propertyAccessor:(const ChartScenePropertyAccessor*)arg4 ;
-(GeometryResource)geometryForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
-(GeometryResource)boundsGeometryForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
-(id)normalsForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
-(id)texcoordsForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
-(id)getPropertiesOfType:(Class)arg1 ;
-(id)renderingLightingModelForSeries:(id)arg1 ;
-(void)applyChartElementsTransform:(ObjectTransforms*)arg1 ;
-(id)elementsTransform;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)labels;
-(id)initWithProperties:(id)arg1 ;
@end

