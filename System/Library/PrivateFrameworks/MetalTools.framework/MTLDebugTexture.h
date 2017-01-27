/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsTexture.h>

@class MTLDebugResourceAccessTracker, MTLDebugDevice, MTLDebugResource, MTLTextureDescriptor;

@interface MTLDebugTexture : MTLToolsTexture {

	MTLDebugResourceAccessTracker* _resourceAccessTracker;
	MTLDebugDevice* _debugDevice;
	BOOL _purgeableStateHasBeenSet;
	unsigned _textureUsage;
	MTLDebugResource* _common;
	MTLTextureDescriptor* _descriptor;
	unsigned long long _offset;
	unsigned long long _bytesPerRow;
	unsigned long long _plane;
	unsigned long long _purgeableState;

}

@property (nonatomic,readonly) MTLDebugResource * common;                           //@synthesize common=_common - In the implementation block
@property (nonatomic,copy,readonly) MTLTextureDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;                           //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesPerRow;                      //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
@property (nonatomic,readonly) unsigned long long plane;                            //@synthesize plane=_plane - In the implementation block
@property (nonatomic,readonly) unsigned long long purgeableState;                   //@synthesize purgeableState=_purgeableState - In the implementation block
@property (nonatomic,readonly) BOOL purgeableStateHasBeenSet;                       //@synthesize purgeableStateHasBeenSet=_purgeableStateHasBeenSet - In the implementation block
@property (nonatomic,readonly) BOOL resourceTrackingEnabled; 
@property (nonatomic,readonly) unsigned resourceUsage; 
@property (assign,nonatomic) unsigned textureUsage;                                 //@synthesize textureUsage=_textureUsage - In the implementation block
-(unsigned)textureUsage;
-(void)setTextureUsage:(unsigned)arg1 ;
-(BOOL)doesAliasResource:(id)arg1 ;
-(BOOL)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(SCD_Struct_MT19)arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6 options:(unsigned long long)arg7 ;
-(void)replaceRegion:(SCD_Struct_MT19)arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void*)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6 options:(unsigned long long)arg7 ;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(NSRange)arg3 slices:(NSRange)arg4 swizzle:(unsigned long long)arg5 ;
-(id)newCompressedTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 level:(unsigned long long)arg3 slice:(unsigned long long)arg4 ;
-(void)dealloc;
-(id)description;
-(unsigned long long)offset;
-(MTLTextureDescriptor *)descriptor;
-(void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 fromRegion:(SCD_Struct_MT19)arg3 mipmapLevel:(unsigned long long)arg4 ;
-(void)replaceRegion:(SCD_Struct_MT19)arg1 mipmapLevel:(unsigned long long)arg2 withBytes:(const void*)arg3 bytesPerRow:(unsigned long long)arg4 ;
-(unsigned long long)bytesPerRow;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(NSRange)arg3 slices:(NSRange)arg4 ;
-(void)replaceRegion:(SCD_Struct_MT19)arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void*)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6 ;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 ;
-(void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(SCD_Struct_MT19)arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6 ;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(void)makeAliasable;
-(id)heap;
-(void)accessedByGPU;
-(id)initWithBaseTexture:(id)arg1 device:(id)arg2 descriptor:(id)arg3 ;
-(id)initWithBaseTexture:(id)arg1 device:(id)arg2 descriptor:(id)arg3 plane:(unsigned long long)arg4 ;
-(id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 descriptor:(id)arg4 ;
-(id)initWithBaseTexture:(id)arg1 device:(id)arg2 buffer:(id)arg3 descriptor:(id)arg4 offset:(unsigned long long)arg5 bytesPerRow:(unsigned long long)arg6 ;
-(id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 pixelFormat:(unsigned long long)arg4 ;
-(BOOL)resourceTrackingEnabled;
-(void)_initResourceTrackingWithDevice:(id)arg1 ;
-(void)accessedByCPU;
-(unsigned)resourceUsage;
-(void)blitManagedToPrivate;
-(void)blitManagedToShared;
-(MTLDebugResource *)common;
-(unsigned long long)purgeableState;
-(BOOL)purgeableStateHasBeenSet;
-(id)initWithBaseTexture:(id)arg1 heap:(id)arg2 device:(id)arg3 descriptor:(id)arg4 ;
-(id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 pixelFormat:(unsigned long long)arg4 textureType:(unsigned long long)arg5 levels:(NSRange)arg6 slices:(NSRange)arg7 ;
-(BOOL)_resourceHasMemory;
-(unsigned long long)plane;
@end

