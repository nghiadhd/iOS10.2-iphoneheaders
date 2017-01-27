/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/Support/carkitd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/CRCarKitMonitoringServerService.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSString;

@interface CRCarKitMonitoringServiceAgent : NSObject <NSXPCListenerDelegate, CRCarKitMonitoringServerService> {

	NSMutableSet* _connections;
	NSObject*<OS_dispatch_queue> _connectionsQueue;

}

@property (nonatomic,retain) NSMutableSet * connections;                                 //@synthesize connections=_connections - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionsQueue;              //@synthesize connectionsQueue=_connectionsQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleUpdatedVehicle:(id)arg1 enabled:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setConnectionsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)connectionsQueue;
-(id)userInfoDictionaryForConnection:(id)arg1 ;
-(BOOL)decrementTransactionCountForUserInfo:(id)arg1 ;
-(void)incrementTransactionCountForUserInfo:(id)arg1 ;
-(BOOL)connection:(id)arg1 isMonitoringSerial:(id)arg2 ;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSMutableSet *)connections;
-(void)startMonitoringCertificateSerial:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)stopMonitoringCertificateSerial:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setConnections:(NSMutableSet *)arg1 ;
@end

