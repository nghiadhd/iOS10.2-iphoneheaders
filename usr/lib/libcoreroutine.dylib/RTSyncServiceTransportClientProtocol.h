/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTSyncServiceTransportClientProtocol <NSObject>
@required
-(void)transport:(id)arg1 linkStateDidChange:(long long)arg2;
-(void)transport:(id)arg1 deviceSetDidChange:(id)arg2;
-(void)transport:(id)arg1 didReceiveMessage:(id)arg2;
-(void)transport:(id)arg1 didSendMessageWithIdentifier:(id)arg2 error:(id)arg3;
-(void)transport:(id)arg1 didDeliverMessageWithIdentifier:(id)arg2;

@end
