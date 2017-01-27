/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFMessageTransport.h>
#import <libobjc.A.dylib/HMDRemoteDeviceMonitorDelegate.h>
#import <libobjc.A.dylib/HMDSecureSessionDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageTransportDelegate.h>

@protocol OS_dispatch_queue;
@class NSArray, HMDRemoteIdentityRegistry, HMDAccountRegistry, HMDRemoteDeviceMonitor, NSObject, NSMapTable, HMDRemoteMessageNotifications, NSMutableDictionary, NSString;

@interface HMDSecureRemoteMessageTransport : HMFMessageTransport <HMDRemoteDeviceMonitorDelegate, HMDSecureSessionDelegate, HMFLogging, HMFMessageTransportDelegate> {

	NSArray* _transports;
	HMDRemoteIdentityRegistry* _identityRegistry;
	HMDAccountRegistry* _accountRegistry;
	HMDRemoteDeviceMonitor* _deviceMonitor;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSMapTable* _activeClientSecureSessions;
	NSMapTable* _activeServerSecureSessions;
	HMDRemoteMessageNotifications* _sessionNotifications;
	NSMutableDictionary* _currentHomeConfigurations;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                        //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                      //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) NSMapTable * activeClientSecureSessions;                         //@synthesize activeClientSecureSessions=_activeClientSecureSessions - In the implementation block
@property (nonatomic,readonly) NSMapTable * activeServerSecureSessions;                         //@synthesize activeServerSecureSessions=_activeServerSecureSessions - In the implementation block
@property (nonatomic,retain) HMDRemoteMessageNotifications * sessionNotifications;              //@synthesize sessionNotifications=_sessionNotifications - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * currentHomeConfigurations;                   //@synthesize currentHomeConfigurations=_currentHomeConfigurations - In the implementation block
@property (nonatomic,copy,readonly) NSArray * transports;                                       //@synthesize transports=_transports - In the implementation block
@property (nonatomic,readonly) HMDRemoteIdentityRegistry * identityRegistry;                    //@synthesize identityRegistry=_identityRegistry - In the implementation block
@property (nonatomic,readonly) HMDAccountRegistry * accountRegistry;                            //@synthesize accountRegistry=_accountRegistry - In the implementation block
@property (nonatomic,readonly) HMDRemoteDeviceMonitor * deviceMonitor;                          //@synthesize deviceMonitor=_deviceMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortDescription;
+(id)logCategory;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)reset;
-(void)start;
-(id)shortDescription;
-(HMDRemoteIdentityRegistry *)identityRegistry;
-(id)initWithTransports:(id)arg1 identityRegistry:(id)arg2 accountRegistry:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(HMDAccountRegistry *)accountRegistry;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)electDeviceForUser:(id)arg1 destination:(id)arg2 deviceCapabilities:(id)arg3 responseTimeout:(double)arg4 responseQueue:(id)arg5 responseHandler:(/*^block*/id)arg6 ;
-(void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)secureSession:(id)arg1 receivedRequestToSendMessage:(id)arg2 ;
-(HMDRemoteDeviceMonitor *)deviceMonitor;
-(void)openSecureSessionToDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)transports;
-(void)pingDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateHome:(id)arg1 configurationVersion:(long long)arg2 ;
-(void)removeHome:(id)arg1 ;
-(id)prepareAnswerForRequestedCapabilities:(id)arg1 ;
-(NSMapTable *)activeServerSecureSessions;
-(NSMapTable *)activeClientSecureSessions;
-(void)_handleNotificationResponseForMessage:(id)arg1 responsePayload:(id)arg2 responseError:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(id)_preferredTransportForMessage:(id)arg1 ;
-(void)_electDeviceForAccountDestination:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_sendSecureMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handlePingMessage:(id)arg1 ;
-(void)_handleSecureClientMessage:(id)arg1 fromDevice:(id)arg2 transport:(id)arg3 ;
-(void)_handleSecureServerMessage:(id)arg1 fromDevice:(id)arg2 transport:(id)arg3 ;
-(void)_handleElectDeviceForIDSSession:(id)arg1 ;
-(void)_handleNotificationMessage:(id)arg1 ;
-(NSMutableDictionary *)currentHomeConfigurations;
-(void)_handleElectDeviceForUserResponse:(id)arg1 error:(id)arg2 responseQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_pingDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_sendPingToDevice:(id)arg1 timeout:(double)arg2 restriction:(unsigned long long)arg3 responseHandler:(/*^block*/id)arg4 ;
-(HMDRemoteMessageNotifications *)sessionNotifications;
-(void)_openSecureSessionToDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_reallyOpenSecureSessionToDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_haveAllCapabilities:(id)arg1 ;
-(void)_updateDeviceInformationFromMessage:(id)arg1 ;
-(BOOL)_handleReceivedMessage:(id)arg1 transport:(id)arg2 ;
-(void)setSessionNotifications:(HMDRemoteMessageNotifications *)arg1 ;
-(void)setCurrentHomeConfigurations:(NSMutableDictionary *)arg1 ;
@end

