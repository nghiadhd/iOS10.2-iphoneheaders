/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFMessage.h>

@class NSUUID, HMDHomeKitVersion;

@interface HMDRemoteMessage : HMFMessage {

	BOOL _secure;
	long long _type;
	NSUUID* _transactionIdentifier;
	double _timeout;
	unsigned long long _restriction;
	HMDHomeKitVersion* _sourceVersion;

}

@property (nonatomic,retain) HMDHomeKitVersion * sourceVersion;              //@synthesize sourceVersion=_sourceVersion - In the implementation block
@property (assign,nonatomic) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSUUID * transactionIdentifier;                   //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (assign,getter=isSecure,nonatomic) BOOL secure;                    //@synthesize secure=_secure - In the implementation block
@property (nonatomic,readonly) double timeout;                               //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) unsigned long long restriction;               //@synthesize restriction=_restriction - In the implementation block
+(id)secureMessageWithName:(id)arg1 destination:(id)arg2 messagePayload:(id)arg3 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setSecure:(BOOL)arg1 ;
-(BOOL)isSecure;
-(HMDHomeKitVersion *)sourceVersion;
-(void)setSourceVersion:(HMDHomeKitVersion *)arg1 ;
-(void)setTransactionIdentifier:(NSUUID *)arg1 ;
-(double)timeout;
-(void)setResponseHandler:(/*^block*/id)arg1 ;
-(NSUUID *)transactionIdentifier;
-(BOOL)isRemoteSource;
-(id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 type:(long long)arg4 timeout:(double)arg5 secure:(BOOL)arg6 ;
-(unsigned long long)restriction;
-(id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 type:(long long)arg4 timeout:(double)arg5 secure:(BOOL)arg6 restriction:(unsigned long long)arg7 ;
-(id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 ;
@end

