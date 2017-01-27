/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkServiceProxy/NPTunnelFlowHTTP.h>

@interface NPTunnelFlowTelemetry : NPTunnelFlowHTTP
-(BOOL)isBestEffort;
-(void)sendReportWithCurrentState:(id)arg1 connectionInfo:(id)arg2 ;
-(id)initWithTunnel:(id)arg1 service:(id)arg2 postURL:(id)arg3 delegate:(id)arg4 ;
-(void)reportTelemetry;
@end

