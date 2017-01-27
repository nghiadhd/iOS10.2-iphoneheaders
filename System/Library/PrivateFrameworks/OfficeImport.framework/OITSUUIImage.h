/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OITSUImage.h>

@class UIImage, OITSUUIImageAutoreleasePoolGuard;

@interface OITSUUIImage : OITSUImage {

	UIImage* mUIImage;
	OITSUUIImageAutoreleasePoolGuard* mGuard;

}
+(id)imageNamed:(id)arg1 ;
+(void)i_performBlockWithUIImageLock:(/*^block*/id)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)scale;
-(CGImageRef)CGImage;
-(long long)imageOrientation;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)UIImage;
-(CGImageRef)CGImageForSize:(CGSize)arg1 ;
-(id)initWithUIImage:(id)arg1 ;
-(id)p_initWithUIImage:(id)arg1 needsGuard:(BOOL)arg2 ;
@end

