/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _UIAsyncInvocation : NSObject {

	Av* _observer;
	/*^block*/id _invocationBlock;
	AB _invocationBlockHasBeenCalled;
	Aq _invokeCallCount;

}
+(id)invocationWithBlock:(/*^block*/id)arg1 ;
+(id)emptyInvocation;
-(void)dealloc;
-(id)invoke;
@end

