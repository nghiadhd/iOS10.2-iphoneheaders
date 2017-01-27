/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@class IDSDaemonRequestTimer, NSString;

@interface IDSAppleCareDaemonResponseListener : NSObject <IDSDaemonListenerProtocol> {

	IDSDaemonRequestTimer* _requestTimer;
	/*^block*/id _disconnectedBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)daemonDisconnected;
-(void)applecareResponseForRequestID:(id)arg1 withError:(id)arg2 ;
-(id)initWithRequestTimer:(id)arg1 ;
-(id)initWithDisconnectedBlockAndNoTimeout:(/*^block*/id)arg1 ;
@end

