/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HFTimerTriggerBuilder;


@protocol HFTimerTriggerExecutionTime_Private <HFTimerTriggerExecutionTime>
@property (assign,nonatomic,__weak) HFTimerTriggerBuilder * timerTriggerBuilder; 
@required
-(id)naturalLanguageNameOfType:(unsigned long long)arg1;
-(void)setTimerTriggerBuilder:(id)arg1;
-(id)commitCreateTimerTriggerBuilder;
-(id)commitUpdateExecutionTime;
-(HFTimerTriggerBuilder *)timerTriggerBuilder;
-(id)performValidation;

@end
