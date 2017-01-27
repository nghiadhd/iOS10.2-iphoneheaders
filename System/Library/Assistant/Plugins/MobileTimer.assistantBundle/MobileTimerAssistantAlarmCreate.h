/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/Plugins/MobileTimer.assistantBundle/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAlarmCreate.h>
#import <Accessibility/AFServiceCommand.h>

@class NSString;

@interface MobileTimerAssistantAlarmCreate : SAAlarmCreate <AFServiceCommand>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)validateCommandArguments;
-(void)_mainQueue_performWithCompletion:(/*^block*/id)arg1 ;
-(id)createAlarm;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end

