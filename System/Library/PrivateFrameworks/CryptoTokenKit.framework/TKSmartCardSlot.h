/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, TKSmartCardATR, NSString, TKSmartCardSlotProxy;

@interface TKSmartCardSlot : NSObject {

	NSXPCConnection* _connection;
	long long _powerState;
	long long _shareState;
	BOOL _securePINVerificationSupported;
	BOOL _securePINChangeSupported;
	long long _state;
	TKSmartCardATR* _ATR;
	NSString* _name;
	long long _maxInputLength;
	long long _maxOutputLength;
	TKSmartCardSlotProxy* _proxy;
	long long _previousState;

}

@property (assign) long long state;                                       //@synthesize state=_state - In the implementation block
@property (retain) TKSmartCardATR * ATR;                                  //@synthesize ATR=_ATR - In the implementation block
@property (nonatomic,readonly) TKSmartCardSlotProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queue; 
@property (assign) long long previousState;                               //@synthesize previousState=_previousState - In the implementation block
@property (assign) long long shareState;                                  //@synthesize shareState=_shareState - In the implementation block
@property (assign) long long powerState;                                  //@synthesize powerState=_powerState - In the implementation block
@property (assign) BOOL securePINVerificationSupported;                   //@synthesize securePINVerificationSupported=_securePINVerificationSupported - In the implementation block
@property (assign) BOOL securePINChangeSupported;                         //@synthesize securePINChangeSupported=_securePINChangeSupported - In the implementation block
@property (nonatomic,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long maxInputLength;                  //@synthesize maxInputLength=_maxInputLength - In the implementation block
@property (nonatomic,readonly) long long maxOutputLength;                 //@synthesize maxOutputLength=_maxOutputLength - In the implementation block
-(void)dealloc;
-(id)description;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSString *)name;
-(void)invalidate;
-(id)screen;
-(TKSmartCardSlotProxy *)proxy;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setPowerState:(long long)arg1 ;
-(long long)powerState;
-(long long)maxOutputLength;
-(void)connectToEndpoint:(id)arg1 synchronous:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(TKSmartCardATR *)ATR;
-(void)setATR:(TKSmartCardATR *)arg1 ;
-(long long)shareState;
-(void)setShareState:(long long)arg1 ;
-(void)getAttrib:(unsigned)arg1 reply:(/*^block*/id)arg2 ;
-(void)setAttrib:(unsigned)arg1 data:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)synchronous:(BOOL)arg1 remoteSlotWithErrorHandler:(/*^block*/id)arg2 ;
-(id)makeSmartCard;
-(id)initWithEndpoint:(id)arg1 error:(id*)arg2 ;
-(void)control:(id)arg1 data:(id)arg2 expectedLength:(unsigned)arg3 reply:(/*^block*/id)arg4 ;
-(id)userInteractionForConfirmation;
-(id)userInteractionForStringEntry;
-(long long)maxInputLength;
-(BOOL)securePINVerificationSupported;
-(void)setSecurePINVerificationSupported:(BOOL)arg1 ;
-(BOOL)securePINChangeSupported;
-(void)setSecurePINChangeSupported:(BOOL)arg1 ;
-(long long)previousState;
-(void)setPreviousState:(long long)arg1 ;
@end

