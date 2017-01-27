/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartType.h>

@interface TSCHChartTypeStackedBar3D : TSCH3DChartType
-(id)defaultSeriesType:(unsigned long long)arg1 ;
-(id)userInterfaceName;
-(id)imageWithPreset:(id)arg1 target:(int)arg2 imageSize:(CGSize)arg3 imageScale:(double)arg4 swatchFrame:(CGRect)arg5 documentRoot:(id)arg6 shouldCache:(BOOL*)arg7 ;
-(BOOL)supportsBevels;
-(id)titlePositionerWithInfo:(id)arg1 scene:(id)arg2 ;
-(double)valueAxisTitleRotation;
-(double)categoryAxisTitleRotation;
-(TSCH3DChartRotationLimit)rotation3DLimit;
-(id)init;
@end

