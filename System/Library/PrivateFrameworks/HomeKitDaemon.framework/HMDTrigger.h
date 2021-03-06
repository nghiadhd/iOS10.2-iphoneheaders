/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMDBulletinIdentifiers.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFDumpState.h>

@protocol OS_dispatch_queue;
@class NSString, NSUUID, HMDHome, HMDUser, HMDDevice, NSMutableArray, NSObject, HMFMessageDispatcher, NSDate, NSDictionary;

@interface HMDTrigger : NSObject <HMDBulletinIdentifiers, HMFMessageReceiver, NSSecureCoding, HMFDumpState> {

	BOOL _active;
	BOOL _activeOnLocalDevice;
	NSString* _name;
	NSUUID* _uuid;
	HMDHome* _home;
	HMDUser* _owner;
	HMDDevice* _owningDevice;
	NSMutableArray* _currentActionSets;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;
	NSDate* _mostRecentFireDate;

}

@property (nonatomic,readonly) NSDictionary * actionContext; 
@property (nonatomic,readonly) NSDictionary * bulletinContext; 
@property (nonatomic,copy,readonly) NSString * contextID; 
@property (nonatomic,copy,readonly) NSUUID * contextSPIUniqueIdentifier; 
@property (nonatomic,retain) NSMutableArray * currentActionSets;                                 //@synthesize currentActionSets=_currentActionSets - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                             //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                               //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (assign,nonatomic) BOOL active;                                                        //@synthesize active=_active - In the implementation block
@property (assign,getter=isActiveOnLocalDevice,nonatomic) BOOL activeOnLocalDevice;              //@synthesize activeOnLocalDevice=_activeOnLocalDevice - In the implementation block
@property (nonatomic,copy) NSDate * mostRecentFireDate;                                          //@synthesize mostRecentFireDate=_mostRecentFireDate - In the implementation block
@property (nonatomic,retain) HMDUser * owner;                                                    //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) HMDDevice * owningDevice;                                           //@synthesize owningDevice=_owningDevice - In the implementation block
@property (nonatomic,retain) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                      //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                              //@synthesize home=_home - In the implementation block
@property (getter=isOwnedByThisDevice,nonatomic,readonly) BOOL ownedByThisDevice; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)invalidate;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(HMDUser *)owner;
-(void)setOwner:(HMDUser *)arg1 ;
-(NSString *)contextID;
-(id)initWithName:(id)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSDictionary *)bulletinContext;
-(HMFMessageDispatcher *)msgDispatcher;
-(BOOL)isActiveOnLocalDevice;
-(HMDDevice *)owningDevice;
-(id)actionSets;
-(NSDate *)mostRecentFireDate;
-(id)dumpState;
-(void)activate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMDHome *)home;
-(void)checkForNoActions;
-(void)setMostRecentFireDate:(NSDate *)arg1 ;
-(void)sendTriggerFiredNotification:(id)arg1 ;
-(void)setHome:(HMDHome *)arg1 ;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_registerForMessages;
-(NSMutableArray *)currentActionSets;
-(void)setActiveOnLocalDevice:(BOOL)arg1 ;
-(id)actionSetWithUUID:(id)arg1 ;
-(id)_updateActionSet:(id)arg1 add:(BOOL)arg2 ;
-(void)_executeActionSetsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)triggerFired;
-(void)_directlyExecuteActionSetsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleRenameRequest:(id)arg1 ;
-(void)_handleUpdateActionSetRequest:(id)arg1 ;
-(void)_handleActivateTriggerRequest:(id)arg1 ;
-(BOOL)shouldEncodeLastFireDate:(id)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)removeActionSet:(id)arg1 ;
-(void)removeAccessory:(id)arg1 ;
-(void)fixupForReplacementAccessory:(id)arg1 ;
-(void)reEvaluate;
-(void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 ;
-(BOOL)isOwnedByThisDevice;
-(void)activateOnLocalDevice;
-(void)refreshActivate;
-(void)userDidConfirmExecute:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setOwningDevice:(HMDDevice *)arg1 ;
-(void)setCurrentActionSets:(NSMutableArray *)arg1 ;
-(NSUUID *)contextSPIUniqueIdentifier;
-(NSDictionary *)actionContext;
-(unsigned long long)triggerType;
@end

