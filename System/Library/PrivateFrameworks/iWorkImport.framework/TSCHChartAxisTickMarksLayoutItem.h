/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartLayoutItem.h>

@interface TSCHChartAxisTickMarksLayoutItem : TSCHChartLayoutItem

@property (nonatomic,readonly) float majorTickmarkLength; 
@property (nonatomic,readonly) float minorTickmarkLength; 
-(CGSize)calcMinSize;
-(CGRect)calcDrawingRect;
-(CGAffineTransform)transformForRenderingOutElementSize:(CGSize*)arg1 outClipRect:(CGRect*)arg2 ;
-(float)majorTickmarkLength;
-(float)minorTickmarkLength;
-(CGRect)p_effectiveRootedLayoutRect;
-(int)location;
-(id)initWithParent:(id)arg1 ;
@end

