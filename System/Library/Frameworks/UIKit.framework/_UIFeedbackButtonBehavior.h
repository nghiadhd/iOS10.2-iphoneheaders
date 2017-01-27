/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIFeedbackGenerator.h>
#import <UIKit/UIFeedbackGeneratorUserInteractionDriven.h>

@class _UIFeedbackButtonBehaviorConfiguration;

@interface _UIFeedbackButtonBehavior : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>

@property (getter=_buttonConfiguration,nonatomic,readonly) _UIFeedbackButtonBehaviorConfiguration * buttonConfiguration; 
+(Class)_configurationClass;
+(id)buttonBehaviorWithStyle:(long long)arg1 coordinateSpace:(id)arg2 ;
-(void)userInteractionEnded;
-(void)userInteractionStarted;
-(void)userInteractionCancelled;
-(id)_stats_key;
-(id)_buttonConfiguration;
@end

