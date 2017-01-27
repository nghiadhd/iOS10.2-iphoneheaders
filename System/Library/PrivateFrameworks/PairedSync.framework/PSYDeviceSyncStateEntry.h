/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PairedSync/PairedSync-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface PSYDeviceSyncStateEntry : NSObject <NSSecureCoding> {

	unsigned _syncSwitchIndex;
	NSUUID* _pairingID;
	unsigned long long _initialSyncState;

}

@property (nonatomic,retain) NSUUID * pairingID;                               //@synthesize pairingID=_pairingID - In the implementation block
@property (assign,nonatomic) unsigned long long initialSyncState;              //@synthesize initialSyncState=_initialSyncState - In the implementation block
@property (assign,nonatomic) unsigned syncSwitchIndex;                         //@synthesize syncSwitchIndex=_syncSwitchIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasCompletedInitialSync; 
@property (nonatomic,readonly) BOOL hasCompletedSync; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasCompletedInitialSync;
-(BOOL)hasCompletedSync;
-(id)initWithPairingID:(id)arg1 syncState:(unsigned long long)arg2 ;
-(unsigned long long)initialSyncState;
-(void)setInitialSyncState:(unsigned long long)arg1 ;
-(unsigned)syncSwitchIndex;
-(void)setSyncSwitchIndex:(unsigned)arg1 ;
-(void)setPairingID:(NSUUID *)arg1 ;
-(NSUUID *)pairingID;
@end

