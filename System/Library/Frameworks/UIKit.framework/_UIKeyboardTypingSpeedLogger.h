/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _UIKeyboardTypingSpeedLogger : NSObject {

	long long _typingDelaySamples[7];
	long long _typingDelaySampleCount;

}
-(id)init;
-(void)logToAggregate;
-(void)recordTypingDelay:(double)arg1 ;
@end

