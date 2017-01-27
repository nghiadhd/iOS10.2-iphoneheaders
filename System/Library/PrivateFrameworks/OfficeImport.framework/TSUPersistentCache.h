/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSURL;

@interface TSUPersistentCache : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSURL* _directoryURL;

}

@property (nonatomic,readonly) NSURL * directoryURL;              //@synthesize directoryURL=_directoryURL - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(BOOL)createDirectoryAtURL:(id)arg1 ;
-(id)fileURLWithName:(id)arg1 ;
-(void)performAccessWithKey:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)performAccessWithKey:(id)arg1 barrier:(BOOL)arg2 async:(BOOL)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)dataForKey:(id)arg1 ;
-(void)dataForKey:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setData:(id)arg1 forKey:(id)arg2 ;
-(void)removeDataForKey:(id)arg1 ;
-(void)removeAllDataAndWaitUntilDone:(BOOL)arg1 ;
-(NSURL *)directoryURL;
@end

