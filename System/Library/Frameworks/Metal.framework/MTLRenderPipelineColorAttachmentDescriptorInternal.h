/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPipelineColorAttachmentDescriptor.h>

@interface MTLRenderPipelineColorAttachmentDescriptorInternal : MTLRenderPipelineColorAttachmentDescriptor {

	MTLRenderPipelineAttachmentDescriptorPrivate _private;

}
-(const MTLRenderPipelineAttachmentDescriptorPrivate*)_descriptorPrivate;
-(BOOL)isBlendingEnabled;
-(unsigned long long)sourceRGBBlendFactor;
-(unsigned long long)destinationRGBBlendFactor;
-(unsigned long long)rgbBlendOperation;
-(unsigned long long)sourceAlphaBlendFactor;
-(unsigned long long)destinationAlphaBlendFactor;
-(unsigned long long)alphaBlendOperation;
-(unsigned long long)writeMask;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)pixelFormat;
-(void)setDestinationRGBBlendFactor:(unsigned long long)arg1 ;
-(void)setSourceAlphaBlendFactor:(unsigned long long)arg1 ;
-(void)setSourceRGBBlendFactor:(unsigned long long)arg1 ;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(void)setWriteMask:(unsigned long long)arg1 ;
-(void)setAlphaBlendOperation:(unsigned long long)arg1 ;
-(void)setRgbBlendOperation:(unsigned long long)arg1 ;
-(void)setDestinationAlphaBlendFactor:(unsigned long long)arg1 ;
-(void)setBlendingEnabled:(BOOL)arg1 ;
@end

