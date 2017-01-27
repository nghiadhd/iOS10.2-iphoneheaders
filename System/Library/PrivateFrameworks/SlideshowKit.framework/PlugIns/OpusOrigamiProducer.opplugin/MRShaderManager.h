/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSLock;

@interface MRShaderManager : NSObject {

	NSMutableDictionary* mGLShadersPerContext;
	NSMutableDictionary* mShadersPerContext;
	NSMutableDictionary* mShaderDescriptions;
	NSLock* mGLShadersPerContextLock;
	NSLock* mShadersPerContextLock;

}
+(id)shaderKeyForShaderID:(id)arg1 andArguments:(id)arg2 ;
+(void)initialize;
+(id)sharedManager;
-(void)forgetContext:(id)arg1 ;
-(void)registerVertexShaderWithVertexShaderSource:(id)arg1 forShaderID:(id)arg2 ;
-(void)registerShaderWithFragmentShaderSource:(id)arg1 andVertexShaderName:(id)arg2 forShaderID:(id)arg3 ;
-(unsigned)_glShaderForID:(id)arg1 inBaseContext:(id)arg2 isFragmentShader:(BOOL)arg3 withArguments:(id)arg4 ;
-(id)shaderForShaderID:(id)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)cleanup;
-(void)releaseResources;
@end

