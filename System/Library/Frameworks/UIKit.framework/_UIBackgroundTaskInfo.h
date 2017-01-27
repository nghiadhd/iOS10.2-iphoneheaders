/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BKSProcessAssertion;

@interface _UIBackgroundTaskInfo : NSObject {

	unsigned long long _taskId;
	/*^block*/id _expireHandler;
	BKSProcessAssertion* _processAssertion;
	int _count;

}
+(id)backgroundTaskAssertionQueue;
-(void)dealloc;
-(void)invalidate;
-(id)initWithProcessAssertion:(id)arg1 expirationHandler:(/*^block*/id)arg2 ;
-(void)fireExpirationHandler;
@end

