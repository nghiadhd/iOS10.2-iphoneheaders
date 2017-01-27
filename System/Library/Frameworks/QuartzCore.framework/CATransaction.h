/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CATransaction : NSObject
+(void)hk_performWithoutAnimations:(/*^block*/id)arg1 ;
+(BOOL)lowLatency;
+(id)_implicitAnimationForLayer:(id)arg1 keyPath:(id)arg2 ;
+(void)pushAnimator:(/*^block*/id)arg1 ;
+(void)popAnimator;
+(void)setCommitHandler:(/*^block*/id)arg1 ;
+(void)setPresentationHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
+(BOOL)animatesFromModelValues;
+(void)setAnimatesFromModelValues:(BOOL)arg1 ;
+(BOOL)disableRunLoopObserverCommits;
+(void)setDisableRunLoopObserverCommits:(BOOL)arg1 ;
+(unsigned)generateSeed;
+(void)assertInactive;
+(double)inputTime;
+(id)valueForKey:(id)arg1 ;
+(void)setValue:(id)arg1 forKey:(id)arg2 ;
+(/*^block*/id)completionBlock;
+(void)setCompletionBlock:(/*^block*/id)arg1 ;
+(void)flush;
+(void)synchronize;
+(void)setAnimationDuration:(double)arg1 ;
+(void)setLowLatency:(BOOL)arg1 ;
+(unsigned)currentState;
+(void)setInputTime:(double)arg1 ;
+(void)addCommitHandler:(/*^block*/id)arg1 forPhase:(int)arg2 ;
+(BOOL)disableActions;
+(void)setDisableActions:(BOOL)arg1 ;
+(void)lock;
+(void)unlock;
+(void)commit;
+(void)begin;
+(double)animationDuration;
+(void)activate;
+(void)setAnimationTimingFunction:(id)arg1 ;
+(id)animationTimingFunction;
+(/*^block*/id)animator;
+(void)activateBackground:(BOOL)arg1 ;
+(double)commitTime;
+(void)setCommitTime:(double)arg1 ;
@end

