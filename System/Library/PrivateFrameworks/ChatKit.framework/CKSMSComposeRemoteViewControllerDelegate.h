/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKSMSComposeRemoteViewControllerDelegate <NSObject>
@required
-(void)viewServiceDidTerminateWithError:(id)arg1;
-(void)smsComposeControllerDataInserted;
-(void)smsComposeControllerAppeared;
-(void)smsComposeControllerShouldSendMessageWithText:(id)arg1 toRecipients:(id)arg2 completion:(/*^block*/id)arg3;
-(void)smsComposeControllerSendStartedWithText:(id)arg1;
-(void)smsComposeControllerCancelled;

@end

