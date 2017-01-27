/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSNetServiceDelegate.h>
#import <libobjc.A.dylib/RMSPairingServerDelegate.h>
#import <libobjc.A.dylib/RMSPairingSession.h>
@class NSString;


@protocol RMSPairingSession <NSObject>
@property (assign,nonatomic,__weak) id<RMSPairingSessionDelegate> delegate; 
@property (nonatomic,retain) NSString * passcode; 
@property (nonatomic,retain) NSString * advertisedAppName; 
@property (nonatomic,retain) NSString * advertisedDeviceName; 
@property (nonatomic,retain) NSString * advertisedDeviceModel; 
@required
-(void)setDelegate:(id)arg1;
-(id<RMSPairingSessionDelegate>)delegate;
-(NSString *)passcode;
-(void)setPasscode:(id)arg1;
-(void)endPairing;
-(void)beginPairing;
-(NSString *)advertisedAppName;
-(void)setAdvertisedAppName:(id)arg1;
-(NSString *)advertisedDeviceName;
-(void)setAdvertisedDeviceName:(id)arg1;
-(NSString *)advertisedDeviceModel;
-(void)setAdvertisedDeviceModel:(id)arg1;

@end


@protocol RMSPairingSessionDelegate;
@class NSString, RMSPairingServer;

@interface RMSPairingSession : NSObject <NSNetServiceDelegate, RMSPairingServerDelegate, RMSPairingSession> {

	RMSPairingServer* _pairingServer;
	id<RMSPairingSessionDelegate> _delegate;
	NSString* _passcode;
	NSString* _advertisedAppName;
	NSString* _advertisedDeviceName;
	NSString* _advertisedDeviceModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<RMSPairingSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * passcode;                                        //@synthesize passcode=_passcode - In the implementation block
@property (nonatomic,retain) NSString * advertisedAppName;                               //@synthesize advertisedAppName=_advertisedAppName - In the implementation block
@property (nonatomic,retain) NSString * advertisedDeviceName;                            //@synthesize advertisedDeviceName=_advertisedDeviceName - In the implementation block
@property (nonatomic,retain) NSString * advertisedDeviceModel;                           //@synthesize advertisedDeviceModel=_advertisedDeviceModel - In the implementation block
+(id)localPairingSession;
+(id)proxyPairingSession;
-(id)init;
-(void)setDelegate:(id<RMSPairingSessionDelegate>)arg1 ;
-(void)dealloc;
-(id<RMSPairingSessionDelegate>)delegate;
-(NSString *)passcode;
-(void)setPasscode:(NSString *)arg1 ;
-(void)netServiceDidPublish:(id)arg1 ;
-(void)netService:(id)arg1 didNotPublish:(id)arg2 ;
-(void)netServiceDidStop:(id)arg1 ;
-(id)_generatePublicKey;
-(id)_expectedPasscodeHashForPasscode:(id)arg1 publicKey:(id)arg2 ;
-(void)_startBonjourAdvertisingWithPublicKey:(id)arg1 httpServerPort:(unsigned short)arg2 ;
-(void)endPairing;
-(id)_pairingNetServiceName;
-(void)pairingServer:(id)arg1 didPairWithService:(id)arg2 pairingGUID:(id)arg3 ;
-(void)pairingServerDidFail:(id)arg1 ;
-(void)beginPairing;
-(NSString *)advertisedAppName;
-(void)setAdvertisedAppName:(NSString *)arg1 ;
-(NSString *)advertisedDeviceName;
-(void)setAdvertisedDeviceName:(NSString *)arg1 ;
-(NSString *)advertisedDeviceModel;
-(void)setAdvertisedDeviceModel:(NSString *)arg1 ;
@end

