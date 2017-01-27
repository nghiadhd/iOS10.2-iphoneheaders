/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RawCamera/RawCamera-Structs.h>
@interface DemosaicTileProvider : NSObject {

	CRawImage* image;
	BOOL _retainedImage;
	reconstructionDataV4_s dataV4;
	unsigned long long left;
	unsigned long long top;
	unsigned long long width;
	unsigned long long height;
	BOOL _print;
	BOOL _outputHALF;
	unsigned short _alphaOne;
	SCD_Struct_De15* noiseEnvironment;
	SCD_Struct_De18* rawEnvironment;
	noiseTables* NT;

}
-(void)provideImageData:(void*)arg1 bytesPerRow:(unsigned long long)arg2 origin:(unsigned long long)arg3 :(unsigned long long)arg4 size:(unsigned long long)arg5 :(unsigned long long)arg6 userInfo:(id)arg7 ;
-(id)init;
-(void)dealloc;
-(id)initWithRawImage:(CRawImage*)arg1 reconstructionData:(reconstructionDataV4_s)arg2 left:(unsigned long long)arg3 top:(unsigned long long)arg4 width:(unsigned long long)arg5 height:(unsigned long long)arg6 andPrintWhenCalled:(BOOL)arg7 shouldRetainRawImage:(BOOL)arg8 ;
-(void)enableHALF:(BOOL)arg1 ;
@end

