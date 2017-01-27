/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSLock;

@interface MiroPosterEffectPool : NSObject {

	NSMutableDictionary* _pool;
	NSLock* _poolLock;

}
-(id)init;
-(void)clear;
-(void)preloadAndPoolEffectIfNeeded:(id)arg1 ;
-(id)pooledEffectForID:(id)arg1 ;
-(void)returnEffectToPool:(id)arg1 ;
@end

