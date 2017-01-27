/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HDFitnessFriendsMessageHandler : NSObject {

	Class _protobufClass;
	SEL _handleReceiveMessageAction;
	SEL _handleErrorSendingMessageAction;

}

@property (assign,nonatomic) Class protobufClass;                              //@synthesize protobufClass=_protobufClass - In the implementation block
@property (assign,nonatomic) SEL handleReceiveMessageAction;                   //@synthesize handleReceiveMessageAction=_handleReceiveMessageAction - In the implementation block
@property (assign,nonatomic) SEL handleErrorSendingMessageAction;              //@synthesize handleErrorSendingMessageAction=_handleErrorSendingMessageAction - In the implementation block
-(Class)protobufClass;
-(void)setProtobufClass:(Class)arg1 ;
-(SEL)handleReceiveMessageAction;
-(void)setHandleReceiveMessageAction:(SEL)arg1 ;
-(SEL)handleErrorSendingMessageAction;
-(void)setHandleErrorSendingMessageAction:(SEL)arg1 ;
@end

