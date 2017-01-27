/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PairedSync/PairedSync-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSUUID, NSArray;

@interface PSYSyncSession : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _activityMap;
	NSUUID* _pairingIdentifier;
	long long _switchIndex;
	NSUUID* _sessionIdentifier;
	unsigned long long _syncSessionType;
	NSArray* _activities;
	unsigned long long _syncSessionState;

}

@property (nonatomic,retain) NSUUID * pairingIdentifier;                       //@synthesize pairingIdentifier=_pairingIdentifier - In the implementation block
@property (assign,nonatomic) long long switchIndex;                            //@synthesize switchIndex=_switchIndex - In the implementation block
@property (nonatomic,retain) NSUUID * sessionIdentifier;                       //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long syncSessionType;               //@synthesize syncSessionType=_syncSessionType - In the implementation block
@property (nonatomic,retain) NSArray * activities;                             //@synthesize activities=_activities - In the implementation block
@property (assign,nonatomic) unsigned long long syncSessionState;              //@synthesize syncSessionState=_syncSessionState - In the implementation block
@property (nonatomic,readonly) double sessionProgress; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSUUID *)sessionIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setActivities:(NSArray *)arg1 ;
-(NSArray *)activities;
-(void)setSwitchIndex:(long long)arg1 ;
-(double)sessionProgress;
-(NSUUID *)pairingIdentifier;
-(id)_deepCopy;
-(void)setSyncSessionType:(unsigned long long)arg1 ;
-(unsigned long long)syncSessionState;
-(void)setSyncSessionState:(unsigned long long)arg1 ;
-(id)syncSessionByReplacingActivity:(id)arg1 ;
-(id)initWithPairingIdentifier:(id)arg1 switchIndex:(long long)arg2 sessionIdentifier:(id)arg3 syncSessionType:(unsigned long long)arg4 activities:(id)arg5 state:(unsigned long long)arg6 ;
-(id)firstIncompleteActivity;
-(id)incompleteActivities;
-(id)completedActivities;
-(id)activityForLabel:(id)arg1 ;
-(id)activityForService:(id)arg1 ;
-(id)syncSessionByUpdatingActivities:(id)arg1 ;
-(id)syncSessionByUpdatingSyncSessionState:(unsigned long long)arg1 ;
-(long long)switchIndex;
-(unsigned long long)syncSessionType;
-(void)setSessionIdentifier:(NSUUID *)arg1 ;
-(void)setPairingIdentifier:(NSUUID *)arg1 ;
@end

