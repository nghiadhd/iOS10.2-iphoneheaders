/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData;

@interface MFBitmap : NSObject {

	int m_width;
	int m_height;
	unsigned m_bitsPerPixel;
	int m_compression;
	BOOL m_isOS2;
	unsigned m_infoHeaderSize;
	unsigned m_paletteSize;
	NSMutableData* m_bmpData;

}
-(id)init;
-(void)dealloc;
-(BOOL)isEmpty;
-(unsigned)coloursUsed:(const char*)arg1 :(unsigned)arg2 :(int)arg3 ;
-(void)writePaletteEntry:(id)arg1 :(int)arg2 ;
-(void)setNull;
-(BOOL)parseHeader:(const char*)arg1 :(unsigned)arg2 ;
-(void)appendDIBPalette:(id)arg1 :(const char*)arg2 :(unsigned)arg3 :(int)arg4 ;
-(BOOL)processDIBHeader:(id)arg1 :(const char*)arg2 :(unsigned)arg3 :(int)arg4 ;
-(unsigned)pixelDataOffset:(const char*)arg1 :(unsigned)arg2 :(int)arg3 ;
-(void)writeFileHeader;
-(void)writeInfoHeader;
-(id)initWithDIBitmap:(id)arg1 :(const char*)arg2 :(unsigned)arg3 :(int)arg4 ;
-(id)initWithDIBitmap:(id)arg1 :(const char*)arg2 :(unsigned)arg3 :(const char*)arg4 :(unsigned)arg5 :(int)arg6 ;
-(id)initWithBitmap:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(const char*)arg6 :(unsigned)arg7 ;
-(void)setMonoPalette:(id)arg1 ;
@end

