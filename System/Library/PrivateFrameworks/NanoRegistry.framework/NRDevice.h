/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSPointerArray, NSMutableArray, NSObject;

@interface NRDevice : NSObject <NSSecureCoding> {

	NSMutableDictionary* _properties;
	NSMutableDictionary* _observers;
	NSPointerArray* _promiscuousObservers;
	NSMutableDictionary* _changeBlocks;
	NSMutableArray* _promiscuousChangeBlocks;
	NSObject*<OS_dispatch_queue> _nrQueue;

}

@property (nonatomic,retain) NSMutableDictionary * properties;                      //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * observers;                       //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSPointerArray * promiscuousObservers;                 //@synthesize promiscuousObservers=_promiscuousObservers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * changeBlocks;                    //@synthesize changeBlocks=_changeBlocks - In the implementation block
@property (nonatomic,retain) NSMutableArray * promiscuousChangeBlocks;              //@synthesize promiscuousChangeBlocks=_promiscuousChangeBlocks - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> nrQueue;                  //@synthesize nrQueue=_nrQueue - In the implementation block
+(BOOL)activePairedDeviceSupportsFileBulletinAdd;
+(BOOL)_activePairedDeviceSupportIsGreaterEqualVersion:(unsigned long long)arg1 ;
+(BOOL)activePairedDeviceSupportsFileSettingSync;
+(BOOL)activePairedDeviceSupportsAttachmentFiles;
+(BOOL)supportsSecureCoding;
-(unsigned long long)bltVersion;
-(id)hd_shortDescription;
-(id)hd_pairingID;
-(id)hd_name;
-(BOOL)hd_isPaired;
-(BOOL)hd_isActive;
-(id)hd_productType;
-(id)hd_systemBuildVersion;
-(id)hd_lastActiveDate;
-(id)hd_lastInactiveDate;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithQueue:(id)arg1 ;
-(BOOL)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(void)setProperties:(NSMutableDictionary *)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(NSMutableDictionary *)properties;
-(void)setObservers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)observers;
-(BOOL)_queueSetValue:(id)arg1 forProperty:(id)arg2 ;
-(id)queueValueForProperty:(id)arg1 ;
-(id)propertyNames;
-(id)queueDescription;
-(void)queueAddPropertyObserver:(id)arg1 forPropertyChanges:(id)arg2 ;
-(void)queueRemovePropertyObserver:(id)arg1 forPropertyChanges:(id)arg2 ;
-(void)_queueFirePropertyObserversForProperty:(id)arg1 fromValue:(id)arg2 ;
-(NSMutableDictionary *)changeBlocks;
-(void)queueMergeWithDevice:(id)arg1 ;
-(void)queueRegisterForPropertyChanges:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)queueUnregisterForPropertyChanges:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_firePropertyObserversForProperty:(id)arg1 fromValue:(id)arg2 ;
-(id)initWithDevice:(id)arg1 queue:(id)arg2 withSecureProperties:(BOOL)arg3 ;
-(void)mergeWithDevice:(id)arg1 ;
-(void)registerForPropertyChanges:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)unregisterForPropertyChanges:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(NSPointerArray *)promiscuousObservers;
-(void)setPromiscuousObservers:(NSPointerArray *)arg1 ;
-(void)setChangeBlocks:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)promiscuousChangeBlocks;
-(void)setPromiscuousChangeBlocks:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)nrQueue;
-(void)setNrQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(BOOL)supportsCapability:(id)arg1 ;
-(void)addPropertyObserver:(id)arg1 forPropertyChanges:(id)arg2 ;
-(void)removePropertyObserver:(id)arg1 forPropertyChanges:(id)arg2 ;
@end

