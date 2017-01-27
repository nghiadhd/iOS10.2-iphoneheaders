/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CHDChartTypeWithGrouping.h>

@interface CHDBar2DType : CHDChartTypeWithGrouping {

	int mGapWidth;
	BOOL mColumn;
	int mOverlap;

}
-(BOOL)isHorizontal;
-(BOOL)isColumn;
-(id)initWithChart:(id)arg1 ;
-(void)setOverlap:(int)arg1 ;
-(void)setGapWidth:(int)arg1 ;
-(void)setColumn:(BOOL)arg1 ;
-(int)gapWidth;
-(int)overlap;
-(int)defaultLabelPosition;
@end

