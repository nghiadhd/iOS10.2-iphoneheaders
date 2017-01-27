/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSData;

@interface CSIBitmapWrapper : NSObject {

	CGContextRef _bitmapContext;
	NSData* _pixelData;
	unsigned _pixelFormat;
	unsigned _width;
	unsigned _height;
	unsigned long long _rowbytes;
	BOOL _allowsMultiPassEncoding;
	BOOL _allowsOptimalPacking;
	BOOL _flipped;
	CGImageRef _sourceImage;
	long long _texturePixelFormat;
	unsigned _imageAlpha;
	double _compressionQuality;
	long long _compressionType;
	unsigned long long _colorSpaceID;
	long long _textureInterpretation;
	int _exifOrientation;

}

@property (assign,nonatomic) unsigned pixelFormat;                         //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (assign) BOOL allowsMultiPassEncoding;                           //@synthesize allowsMultiPassEncoding=_allowsMultiPassEncoding - In the implementation block
@property (assign) BOOL allowsOptimalPacking;                              //@synthesize allowsOptimalPacking=_allowsOptimalPacking - In the implementation block
@property (assign,nonatomic) BOOL flipped;                                 //@synthesize flipped=_flipped - In the implementation block
@property (assign,nonatomic) double compressionQuality;                    //@synthesize compressionQuality=_compressionQuality - In the implementation block
@property (assign) long long compressionType;                              //@synthesize compressionType=_compressionType - In the implementation block
@property (assign,nonatomic) unsigned long long colorSpaceID;              //@synthesize colorSpaceID=_colorSpaceID - In the implementation block
@property (assign,nonatomic) long long textureInterpretation;              //@synthesize textureInterpretation=_textureInterpretation - In the implementation block
@property (assign,nonatomic) int exifOrientation;                          //@synthesize exifOrientation=_exifOrientation - In the implementation block
-(void)setCompressionType:(long long)arg1 ;
-(long long)compressionType;
-(double)compressionQuality;
-(void)setCompressionQuality:(double)arg1 ;
-(long long)textureInterpretation;
-(id)compressedData:(BOOL)arg1 usedEncoding:(int*)arg2 andRowChunkSize:(unsigned*)arg3 ;
-(BOOL)allowsMultiPassEncoding;
-(unsigned)sourceAlphaInfo;
-(unsigned long long)rowbytes;
-(unsigned long long)colorSpaceID;
-(void)setColorSpaceID:(unsigned long long)arg1 ;
-(void)setAllowsMultiPassEncoding:(BOOL)arg1 ;
-(BOOL)allowsOptimalPacking;
-(void)setAllowsOptimalPacking:(BOOL)arg1 ;
-(void)setTextureInterpretation:(long long)arg1 ;
-(BOOL)flipped;
-(id)initWithPixelWidth:(unsigned)arg1 pixelHeight:(unsigned)arg2 ;
-(id)initWithCGImage:(CGImageRef)arg1 width:(unsigned)arg2 height:(unsigned)arg3 texturePixelFormat:(long long)arg4 ;
-(void)setSourceAlphaInfo:(unsigned)arg1 ;
-(void)setFlipped:(BOOL)arg1 ;
-(void)dealloc;
-(int)exifOrientation;
-(unsigned)width;
-(unsigned)height;
-(CGContextRef)bitmapContext;
-(void)setExifOrientation:(int)arg1 ;
-(unsigned)pixelFormat;
-(void)setPixelFormat:(unsigned)arg1 ;
-(id)pixelData;
-(void)setPixelData:(id)arg1 ;
@end

