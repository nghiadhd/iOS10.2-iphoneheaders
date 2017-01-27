/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class MRContext, EAGLContext, NSMutableDictionary, NSMutableSet;

@interface MRImageManager : NSObject {

	MRContext* mBaseContext;
	EAGLContext* mImageGLContext;
	NSMutableDictionary* mTextures;
	NSMutableSet* mAvailableTextures;
	NSMutableSet* mRecyclableTextures;
	NSMutableDictionary* _assetMasters;

}

@property (readonly) MRContext * baseContext; 
@property (readonly) EAGLContext * imageGLContext; 
+(void)cleanupPictureCache;
+(void)initialize;
-(id)textureWithSize:(SCD_Struct_MR7)arg1 options:(const SCD_Struct_MR8*)arg2 ;
-(id)fboTextureWithSize:(SCD_Struct_MR7)arg1 ;
-(id)_textureWithSize:(SCD_Struct_MR7)arg1 isFBO:(BOOL)arg2 options:(const SCD_Struct_MR8*)arg3 ;
-(EAGLContext *)imageGLContext;
-(id)optimizedPath:(id)arg1 forSize:(CGSize)arg2 ;
-(MRContext *)baseContext;
-(id)retainedByUserThumbnailForAssetAtPath:(id)arg1 ;
-(id)_lockedMasterForAssetAtPath:(id)arg1 withOptions:(id)arg2 ;
-(id)retainedByUserImageWithSize:(CGSize)arg1 andColor:(const float*)arg2 ;
-(id)retainedByUserImageWithCGContext:(CGContextRef)arg1 ;
-(void)purgeResources:(BOOL)arg1 ;
-(id)retainedByUserPlayerForAssetAtPath:(id)arg1 size:(CGSize)arg2 andOptions:(id)arg3 ;
-(CGImageRef)CGImageWithPath:(id)arg1 withOriginalSize:(CGSize)arg2 forSize:(CGSize)arg3 orientation:(char*)arg4 ;
-(CGImageRef)CGImageWithMoviePath:(id)arg1 withOriginalSize:(CGSize)arg2 forSize:(CGSize)arg3 atTime:(double)arg4 orientation:(char*)arg5 ;
-(CGImageRef)CGImageWithData:(id)arg1 withOriginalSize:(CGSize)arg2 forSize:(CGSize)arg3 orientation:(char*)arg4 ;
-(id)initWithBaseContext:(id)arg1 ;
-(void)recycleTexture:(id)arg1 ;
-(void)dealloc;
@end

