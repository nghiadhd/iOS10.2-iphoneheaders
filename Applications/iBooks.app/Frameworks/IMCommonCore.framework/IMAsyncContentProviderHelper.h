/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:59:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject;

@interface IMAsyncContentProviderHelper : NSObject {

	NSObject*<OS_dispatch_queue> _sync;
	NSObject*<OS_dispatch_group> _group;
	BOOL _ready;

}
-(id)initWithContentReady:(BOOL)arg1 ;
-(void)addCallback:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)signalContentReady;
@end

