/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSDGLShadow : NSObject
+(id)sharedContext;
-(void)setupGLTextureParameters;
-(CGImageRef)newCGImageFromGLBuffer:(char**)arg1 ;
-(void)createOffscreenRenderBuffer:(CGSize)arg1 framebuffer:(id)arg2 requiresDepth:(BOOL)arg3 colorRenderBuffer:(unsigned*)arg4 depthRenderBuffer:(unsigned*)arg5 ;
@end
