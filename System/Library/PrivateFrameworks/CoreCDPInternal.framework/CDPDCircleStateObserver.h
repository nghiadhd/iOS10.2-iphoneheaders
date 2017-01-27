/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CDPDCircleProxy;
@class NSObject;

@interface CDPDCircleStateObserver : NSObject {

	int _circleChangeToken;
	BOOL _isObserving;
	NSObject*<OS_dispatch_queue> _eventQueue;
	id<CDPDCircleProxy> _circleProxy;

}
-(void)dealloc;
-(id)initWithProxy:(id)arg1 ;
-(const char*)_notificationName;
-(void)observeCircleStateWithChangeHandler:(/*^block*/id)arg1 ;
-(void)observeChangeToState:(int)arg1 handler:(/*^block*/id)arg2 ;
-(void)stopObservingCircleStatusChange;
@end
