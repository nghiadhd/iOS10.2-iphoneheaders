/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol HMDUserManagementOperationDelegate, OS_dispatch_queue;
@class NSMutableArray, HMDUserManagementOperationManager, NSUUID, HMDUser, HMDAccessory, NSDate, NSObject, HMFTimer, HMDAccessoryInvitation, NSDictionary, NSArray, NSString;

@interface HMDUserManagementOperation : NSObject <HMFTimerDelegate, NSSecureCoding> {

	NSMutableArray* _dependencies;
	BOOL _executing;
	BOOL _backingOff;
	BOOL _lastOperationFailed;
	unsigned long long _state;
	HMDUserManagementOperationManager* _operationManager;
	id<HMDUserManagementOperationDelegate> _delegate;
	NSUUID* _identifier;
	unsigned long long _operationType;
	HMDUser* _user;
	HMDAccessory* _accessory;
	NSDate* _expirationDate;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMFTimer* _expirationTimer;
	double _backoffInterval;
	HMFTimer* _backoffTimer;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                        //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                      //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (assign,getter=isExecuting,nonatomic) BOOL executing;                                 //@synthesize executing=_executing - In the implementation block
@property (nonatomic,readonly) HMFTimer * expirationTimer;                                      //@synthesize expirationTimer=_expirationTimer - In the implementation block
@property (nonatomic,retain) HMDUserManagementOperationManager * operationManager;              //@synthesize operationManager=_operationManager - In the implementation block
@property (nonatomic,readonly) double backoffInterval;                                          //@synthesize backoffInterval=_backoffInterval - In the implementation block
@property (nonatomic,retain) HMFTimer * backoffTimer;                                           //@synthesize backoffTimer=_backoffTimer - In the implementation block
@property (assign,getter=isBackingOff,nonatomic) BOOL backingOff;                               //@synthesize backingOff=_backingOff - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) HMDAccessory * accessory;                                          //@synthesize accessory=_accessory - In the implementation block
@property (assign,nonatomic) BOOL lastOperationFailed;                                          //@synthesize lastOperationFailed=_lastOperationFailed - In the implementation block
@property (nonatomic,readonly) HMDAccessoryInvitation * accessoryInvitation; 
@property (nonatomic,readonly) NSDictionary * accessoryInvitationInformation; 
@property (__weak) id<HMDUserManagementOperationDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long operationType;                                //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,readonly) HMDUser * user;                                                  //@synthesize user=_user - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (getter=isReady,nonatomic,readonly) BOOL ready; 
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate;                                         //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * dependencies; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)addUserManagementOperationForUser:(id)arg1 accessory:(id)arg2 ;
+(id)removeUserManagementOperationForUser:(id)arg1 accessory:(id)arg2 ;
-(id)init;
-(void)cancel;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<HMDUserManagementOperationDelegate>)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(id<HMDUserManagementOperationDelegate>)delegate;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSUUID *)identifier;
-(BOOL)isValid;
-(BOOL)isCancelled;
-(id)shortDescription;
-(NSDate *)expirationDate;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)addDependency:(id)arg1 ;
-(NSArray *)dependencies;
-(BOOL)isExpired;
-(HMDAccessory *)accessory;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)timerDidFire:(id)arg1 ;
-(HMDUser *)user;
-(BOOL)mergeWithOperation:(id)arg1 ;
-(NSDictionary *)accessoryInvitationInformation;
-(HMDAccessoryInvitation *)accessoryInvitation;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setAccessory:(HMDAccessory *)arg1 ;
-(void)executeWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)operationType;
-(HMFTimer *)expirationTimer;
-(void)setOperationManager:(HMDUserManagementOperationManager *)arg1 ;
-(id)initWithOperationType:(unsigned long long)arg1 user:(id)arg2 accessory:(id)arg3 expiration:(id)arg4 ;
-(void)_setupExpirationTimer;
-(BOOL)_isFinished;
-(BOOL)isBackingOff;
-(HMDUserManagementOperationManager *)operationManager;
-(double)backoffInterval;
-(double)nextBackoffInterval;
-(void)setBackingOff:(BOOL)arg1 ;
-(void)setBackoffTimer:(HMFTimer *)arg1 ;
-(void)setLastOperationFailed:(BOOL)arg1 ;
-(void)_startBackoffTimer;
-(void)_addPairingToAccessory:(id)arg1 identifier:(id)arg2 publicKey:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_removePairingFromAccessory:(id)arg1 identifier:(id)arg2 publicKey:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)lastOperationFailed;
-(long long)_accessoryInvitationState;
-(HMFTimer *)backoffTimer;
-(void)_endBackoffTimer;
-(void)setExecuting:(BOOL)arg1 ;
-(BOOL)isReady;
@end

