/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotifier.h>

@class RTKeepAliveTransaction;

@interface RTStarkManager : RTNotifier {

	BOOL _trustedConnectionEstablished;
	long long _connectionState;
	RTKeepAliveTransaction* _dirty;

}

@property (assign,nonatomic) long long connectionState;                      //@synthesize connectionState=_connectionState - In the implementation block
@property (assign,nonatomic) BOOL trustedConnectionEstablished;              //@synthesize trustedConnectionEstablished=_trustedConnectionEstablished - In the implementation block
@property (nonatomic,retain) RTKeepAliveTransaction * dirty;                 //@synthesize dirty=_dirty - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setDirty:(RTKeepAliveTransaction *)arg1 ;
-(RTKeepAliveTransaction *)dirty;
-(void)setConnectionState:(long long)arg1 ;
-(long long)connectionState;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(BOOL)trustedConnectionEstablished;
-(void)setTrustedConnectionEstablished:(BOOL)arg1 ;
-(void)onPairedVehiclesDidChange:(id)arg1 ;
-(void)updateTrustedConnectionEstablished;
-(BOOL)updateConnectionState;
-(void)postConnectionStateNotification;
-(void)fetchConnectionStateWithHandler:(/*^block*/id)arg1 ;
@end
