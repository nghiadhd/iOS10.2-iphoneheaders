/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface CBPeer : NSObject <NSCopying> {

	BOOL _isLinkEncrypted;
	NSUUID* _identifier;
	unsigned long long _mtuLength;
	long long _pairingState;
	long long _hostState;
	long long _role;

}

@property (assign,nonatomic) unsigned long long mtuLength;              //@synthesize mtuLength=_mtuLength - In the implementation block
@property (assign,nonatomic) long long pairingState;                    //@synthesize pairingState=_pairingState - In the implementation block
@property (assign,nonatomic) long long hostState;                       //@synthesize hostState=_hostState - In the implementation block
@property (assign,nonatomic) BOOL isLinkEncrypted;                      //@synthesize isLinkEncrypted=_isLinkEncrypted - In the implementation block
@property (assign,nonatomic) long long role;                            //@synthesize role=_role - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                     //@synthesize identifier=_identifier - In the implementation block
-(id)initWithInfo:(id)arg1 ;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)handleMsg:(int)arg1 args:(id)arg2 ;
-(void)setHostState:(long long)arg1 ;
-(void)handleHostStateUpdated:(id)arg1 ;
-(void)setMtuLength:(unsigned long long)arg1 ;
-(void)setIsLinkEncrypted:(BOOL)arg1 ;
-(void)handleMTUChanged:(id)arg1 ;
-(void)handleLinkEncryptionChanged:(id)arg1 ;
-(long long)pairingState;
-(void)setPairingState:(long long)arg1 ;
-(long long)hostState;
-(BOOL)isLinkEncrypted;
-(unsigned long long)mtuLength;
-(void)setRole:(long long)arg1 ;
-(long long)role;
@end

