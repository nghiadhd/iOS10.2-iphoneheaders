/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@interface CPFontKerning : NSObject <CPDisposable> {

	CFDataRef kernTable;
	const char* dataPtr;
	unsigned offset;
	unsigned kernTableLength;
	CFDictionaryRef kernDictionary;
	BOOL override;
	BOOL valid;

}
-(void)dealloc;
-(unsigned char)readByte;
-(unsigned)readUnsignedLong;
-(id)initWithKernData:(CFDataRef)arg1 ;
-(unsigned short)readUnsignedShort;
-(void)doKerningPair;
-(void)doSubtableFormat0;
-(void)doSubtableFormat1;
-(void)doSubtableFormat2;
-(void)doSubtableFormat3;
-(void)doOTSubtable;
-(void)doTTSubtable;
-(void)doTable;
-(id)initWithCGFont:(CGFontRef)arg1 ;
-(short)readShort;
-(CFDictionaryRef)createKernTable;
-(void)dispose;
-(void)finalize;
@end

