/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, SSKeyValueStore;

@interface KeyValueStore : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSKeyValueStore* _keyValueStore;

}
+(void)observeXPCServer:(id)arg1 ;
+(id)defaultKeyValueStore;
+(void)getValuesWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)removeAllValuesWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)removeValuesWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)setValuesWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 withReplyBlock:(/*^block*/id)arg3 ;
-(void)_getValuesWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)_removeAllValuesWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)_removeValuesWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)_setValuesWithMessage:(id)arg1 connection:(id)arg2 ;
-(id)valueForDomain:(id)arg1 key:(id)arg2 ;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3 ;
-(id)init;
-(void)dealloc;
@end

