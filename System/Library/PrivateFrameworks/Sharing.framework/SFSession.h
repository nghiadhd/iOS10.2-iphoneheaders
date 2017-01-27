/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SFXPCInterface.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSUUID, SFDevice, NSString;

@interface SFSession : NSObject <NSSecureCoding, SFXPCInterface> {

	BOOL _activated;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSMutableDictionary* _requestQueue;
	NSXPCConnection* _xpcCnx;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _errorHandler;
	/*^block*/id _eventMessageHandler;
	NSUUID* _identifier;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	SFDevice* _peerDevice;
	/*^block*/id _requestMessageHandler;
	NSString* _serviceIdentifier;
	/*^block*/id _responseMessageInternalHandler;
	NSUUID* _serviceUUID;

}

@property (nonatomic,copy) NSUUID * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) id responseMessageInternalHandler;                         //@synthesize responseMessageInternalHandler=_responseMessageInternalHandler - In the implementation block
@property (nonatomic,copy) NSUUID * serviceUUID;                                      //@synthesize serviceUUID=_serviceUUID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id eventMessageHandler;                                    //@synthesize eventMessageHandler=_eventMessageHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,retain) SFDevice * peerDevice;                                   //@synthesize peerDevice=_peerDevice - In the implementation block
@property (nonatomic,copy) id requestMessageHandler;                                  //@synthesize requestMessageHandler=_requestMessageHandler - In the implementation block
@property (nonatomic,copy) NSString * serviceIdentifier;                              //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(NSUUID *)identifier;
-(void)sendResponse:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)_invalidate;
-(id)interruptionHandler;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)errorHandler;
-(void)setErrorHandler:(id)arg1 ;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(void)setServiceUUID:(NSUUID *)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_interrupted;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(void)_invalidated;
-(void)_ensureXPCStarted;
-(void)sessionError:(id)arg1 ;
-(void)sessionReceivedEvent:(id)arg1 ;
-(void)sessionReceivedRequest:(id)arg1 ;
-(void)sessionReceivedResponse:(id)arg1 ;
-(void)setEventMessageHandler:(id)arg1 ;
-(id)eventMessageHandler;
-(id)requestMessageHandler;
-(void)setRequestMessageHandler:(id)arg1 ;
-(id)responseMessageInternalHandler;
-(void)setResponseMessageInternalHandler:(id)arg1 ;
-(NSUUID *)serviceUUID;
-(void)sendRequest:(id)arg1 ;
-(NSString *)serviceIdentifier;
-(SFDevice *)peerDevice;
@end

