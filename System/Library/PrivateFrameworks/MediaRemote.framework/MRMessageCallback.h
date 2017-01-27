/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MRMessageCallback : NSObject {

	/*^block*/id _reply;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) id reply;                                        //@synthesize reply=_reply - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithReply:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)invoke:(id)arg1 ;
-(id)reply;
@end

