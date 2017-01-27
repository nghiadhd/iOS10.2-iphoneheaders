/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray;

@interface RMTable : NSObject <NSFastEnumeration> {

	NSMutableArray* _matrix;
	unsigned long long _elementCount;
	NSMutableArray* _rowFirstElements;
	NSMutableArray* _columnFirstElements;
	CGPDFLayoutRef _layout;
	CGPDFNodeRef _tableRoot;
	BOOL _rowOrder;

}

@property (readonly) CGPDFPageRef page; 
@property (assign) BOOL rowOrder;                    //@synthesize rowOrder=_rowOrder - In the implementation block
-(CGRect)bounds;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_RM41*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(CGPDFLayoutRef)layout;
-(unsigned long long)rows;
-(CGPDFPageRef)page;
-(id)initWithRoot:(CGPDFNodeRef)arg1 layout:(CGPDFLayoutRef)arg2 ;
-(void)setRowOrder:(BOOL)arg1 ;
-(BOOL)rowOrder;
-(void)matrixDealloc;
-(unsigned long long)columns;
-(void)dump;
-(id)columnAtIndex:(unsigned long long)arg1 ;
-(id)rowAtIndex:(unsigned long long)arg1 ;
@end

