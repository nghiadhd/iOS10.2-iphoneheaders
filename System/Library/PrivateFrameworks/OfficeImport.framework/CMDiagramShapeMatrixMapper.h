/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDiagramShapeMapper.h>

@interface CMDiagramShapeMatrixMapper : CMDiagramShapeMapper {

	unsigned long long mColumnCount;
	unsigned long long mRowCount;
	float mRectWidth;
	float mRectHeight;
	BOOL mHasArrows;
	BOOL mIsSnake;
	BOOL mIsHorizontal;
	BOOL mIsLinear;

}
-(unsigned long long)columnCount;
-(id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5 ;
-(CGRect)circumscribedBounds;
-(void)mapChildrenAt:(id)arg1 withState:(id)arg2 ;
-(CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setColumnsAndRowsCount;
-(CGSize)gapSize;
-(double)gapRatio;
@end

