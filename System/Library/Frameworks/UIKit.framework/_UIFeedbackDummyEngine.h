/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIFeedbackEngine.h>
#import <UIKit/_UIFeedbackPlayer.h>

@interface _UIFeedbackDummyEngine : _UIFeedbackEngine <_UIFeedbackPlayer> {

	/*^block*/id _invalidationBlock;

}

@property (nonatomic,copy) id invalidationBlock;              //@synthesize invalidationBlock=_invalidationBlock - In the implementation block
+(id)sharedEngine;
+(BOOL)_supportsPlayingFeedback:(id)arg1 ;
-(id)_stats_key;
-(id)invalidationBlock;
-(void)setInvalidationBlock:(id)arg1 ;
-(void)_activateUnderlyingPlayerWithCompletion:(/*^block*/id)arg1 ;
-(void)_dequeueReusableFeedbackPlayerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_updateValueForParameters:(id)arg1 withKey:(id)arg2 ;
-(void)_playFeedback:(id)arg1 atTime:(double)arg2 ;
-(void)_stopFeedback:(id)arg1 ;
@end

