/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSWebServerConnectionDelegate <NSObject>
@optional
-(void)webServerConnection:(id)arg1 didReceiveError:(id)arg2;
-(void)webServerConnection:(id)arg1 didReceiveRequest:(id)arg2;
-(void)webServerConnection:(id)arg1 didSendResponse:(id)arg2 toRequest:(id)arg3;
-(void)webServerConnection:(id)arg1 failedToSendResponse:(id)arg2 toRequest:(id)arg3;

@end

