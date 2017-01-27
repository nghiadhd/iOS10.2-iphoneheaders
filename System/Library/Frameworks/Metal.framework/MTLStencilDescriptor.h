/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLStencilDescriptor : NSObject <NSCopying>

@property (readonly) const MTLStencilDescriptorPrivate* stencilPrivate; 
@property (assign,nonatomic) unsigned long long stencilCompareFunction; 
@property (assign,nonatomic) unsigned long long stencilFailureOperation; 
@property (assign,nonatomic) unsigned long long depthFailureOperation; 
@property (assign,nonatomic) unsigned long long depthStencilPassOperation; 
@property (assign,nonatomic) unsigned readMask; 
@property (assign,nonatomic) unsigned writeMask; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

