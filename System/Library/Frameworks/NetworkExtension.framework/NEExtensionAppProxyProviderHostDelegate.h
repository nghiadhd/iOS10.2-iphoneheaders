/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NEExtensionAppProxyProviderHostDelegate <NEExtensionTunnelProviderHostDelegate>
@required
-(void)extension:(id)arg1 didRequestMatchAppPID:(long long)arg2 uuid:(id)arg3 withAppRule:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)extension:(id)arg1 didRequestFlowDivertControlSocketWithCompletionHandler:(/*^block*/id)arg2;

@end

