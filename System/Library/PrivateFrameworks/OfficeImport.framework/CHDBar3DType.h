/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CHDBar2DType.h>

@interface CHDBar3DType : CHDBar2DType {

	int mGapDepth;
	int mShapeType;

}
+(BOOL)is3DType;
+(id)stringWithShapeType:(int)arg1 ;
-(void)setShapeType:(int)arg1 ;
-(id)initWithChart:(id)arg1 ;
-(void)setGapDepth:(int)arg1 ;
-(int)gapDepth;
-(int)shapeType;
@end

