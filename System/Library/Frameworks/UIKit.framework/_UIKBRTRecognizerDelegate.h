/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIKBRTRecognizerDelegate <NSObject>
@required
-(void)recognizer:(id)arg1 beginTouchDownForTouchWithId:(id)arg2 atPoint:(CGPoint)arg3 forBeginState:(unsigned long long)arg4 whenStateReady:(/*^block*/id)arg5;
-(void)recognizer:(id)arg1 restartTouchDownForTouchWithId:(id)arg2 startingAt:(double)arg3 atPoint:(CGPoint)arg4 currentPoint:(CGPoint)arg5 whenStateReady:(/*^block*/id)arg6;
-(void)recognizer:(id)arg1 shouldContinueTrackingTouchWithId:(id)arg2 startingAt:(double)arg3 atPoint:(CGPoint)arg4 currentPoint:(CGPoint)arg5 forContinueState:(unsigned long long)arg6 whenStateReady:(/*^block*/id)arg7;
-(void)recognizer:(id)arg1 willIgnoreTouchWithId:(id)arg2 startingAt:(double)arg3 atPoint:(CGPoint)arg4 currentPoint:(CGPoint)arg5 whenReady:(/*^block*/id)arg6;
-(void)recognizer:(id)arg1 continueTrackingIgnoredTouchWithId:(id)arg2 currentPoint:(CGPoint)arg3 whenReady:(/*^block*/id)arg4;
-(void)recognizer:(id)arg1 releaseTouchToLayoutWithId:(id)arg2 startPoint:(CGPoint)arg3 endPoint:(CGPoint)arg4 whenReady:(/*^block*/id)arg5;
-(void)recognizer:(id)arg1 cancelTouchOnLayoutWithId:(id)arg2 startPoint:(CGPoint)arg3 endPoint:(CGPoint)arg4 whenReady:(/*^block*/id)arg5;

@end

