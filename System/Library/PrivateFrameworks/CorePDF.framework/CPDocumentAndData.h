/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@interface CPDocumentAndData : NSObject {

	CGPDFDocumentRef _document;
	CFDataRef _sourceData;

}

@property (retain) CGPDFDocumentRef document;              //@synthesize document=_document - In the implementation block
@property (retain) CFDataRef sourceData;                   //@synthesize sourceData=_sourceData - In the implementation block
-(void)dealloc;
-(CGPDFDocumentRef)document;
-(void)setDocument:(CGPDFDocumentRef)arg1 ;
-(void)setSourceData:(CFDataRef)arg1 ;
-(CFDataRef)sourceData;
@end

