/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DResource.h>
#import <iWorkImport/TSCHUnretainedParent.h>
#import <iWorkImport/TSCH3DOptimizedTextureResource.h>

@class TSCH3DTexture, NSNumber;

@interface TSCH3DTextureResource : TSCH3DResource <TSCHUnretainedParent, TSCH3DOptimizedTextureResource> {

	TSCH3DTexture* mParent;
	NSNumber* mCachedHash;

}
-(void)clearParent;
-(BOOL)canLoadCachedFullMipmapBufferForDataCache:(id)arg1 ;
-(id)optimizedMipmapBuffer;
-(id)databufferForDataCache:(id)arg1 ;
-(id)p_parent;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)get;
-(id)initWithParent:(id)arg1 ;
@end

