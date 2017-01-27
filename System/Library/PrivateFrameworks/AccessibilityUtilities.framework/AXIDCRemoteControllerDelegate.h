/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXIDCRemoteControllerDelegate <NSObject>
@property (assign,nonatomic) id<AXIDCManagerSecurityDelegate> securityDelegate; 
@required
-(void)controller:(id)arg1 didReceiveData:(id)arg2;
-(void)controller:(id)arg1 didFinishSendingData:(id)arg2;
-(void)controllerDidFinishConnecting:(id)arg1;
-(void)controller:(id)arg1 didCloseConnectionWithError:(id)arg2;
-(id<AXIDCManagerSecurityDelegate>)securityDelegate;
-(void)setSecurityDelegate:(id)arg1;

@end

