/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AssistantCallbackUIDelegateResult
@optional
-(void)callbackAskUserForUncertifiedResult:(int)arg1;
-(void)callbackAskUserForSetupCodeResult:(int)arg1 password:(id)arg2;

@required
-(void)callbackAskUserForPasswordResult:(int)arg1 password:(id)arg2 remember:(int)arg3;
-(void)callbackAskUserToChooseFromStringListResult:(int)arg1 selectedString:(id)arg2;
-(void)callbackAskUserAQuestionResult:(int)arg1 result:(int)arg2;

@end

