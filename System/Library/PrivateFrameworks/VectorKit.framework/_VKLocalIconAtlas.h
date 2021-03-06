/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKIconAtlas.h>

@class VKResourceManager;

@interface _VKLocalIconAtlas : VKIconAtlas {

	VKResourceManager* _resourceManager;

}
-(void)dealloc;
-(CGImageRef)_createImageForName:(id)arg1 contentScale:(double)arg2 size:(long long)arg3 ;
-(id)initWithResourceManager:(id)arg1 ;
-(id)artworkForStyleAttributeKey:(unsigned)arg1 value:(unsigned)arg2 style:(VKIconStyleInfo*)arg3 contentScale:(double)arg4 size:(long long)arg5 ;
-(id)artworkForStyleAttributeKey:(unsigned)arg1 longValue:(unsigned long long)arg2 style:(VKIconStyleInfo*)arg3 contentScale:(double)arg4 size:(long long)arg5 ;
@end

