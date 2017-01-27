/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBUIQuietModePlayability.h>

@class NSString;

@interface SBUIBannerItem : NSObject <SBUIQuietModePlayability>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)title;
-(/*^block*/id)action;
-(unsigned long long)priority;
-(id)message;
-(id)sound;
-(BOOL)shouldPlayLightsAndSirens;
-(id)subActions;
-(BOOL)overridesQuietMode;
-(BOOL)overridesPocketMode;
-(BOOL)isSticky;
-(BOOL)canShowInAssistant;
-(BOOL)canShowWhileLocked;
-(id)pullDownNotification;
-(BOOL)shouldShowModalSubActions;
-(id)subActionLabels;
-(BOOL)hasSubActions;
-(id)defaultActionWithContext:(id)arg1 ;
-(id)lockScreenActionContextWithContext:(id)arg1 ;
-(id)actionWithIdentifier:(id)arg1 ;
-(id)sortDate;
-(BOOL)inertWhenLocked;
-(BOOL)isCritical;
@end

