/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPGraphicObject.h>

@interface CPImage : CPGraphicObject {

	CPPDFImage* imageData;
	BOOL renderedBoundsComputed;

}
-(CGRect)bounds;
-(BOOL)isVisible;
-(id)initWithBounds:(CGRect)arg1 ;
-(id)initWithPDFImage:(CPPDFImage*)arg1 ;
-(CGRect)renderedBounds;
-(void)accept:(id)arg1 ;
-(void)recomputeRenderedBounds;
-(CPPDFImage*)imageData;
-(long long)zOrder;
@end

