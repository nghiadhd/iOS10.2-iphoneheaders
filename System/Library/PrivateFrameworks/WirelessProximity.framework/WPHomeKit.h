/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessProximity/WirelessProximity-Structs.h>
#import <WirelessProximity/WPClient.h>

@protocol WPHomeKitDelegate;
@interface WPHomeKit : WPClient {

	id<WPHomeKitDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WPHomeKitDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<WPHomeKitDelegate>)arg1 ;
-(id<WPHomeKitDelegate>)delegate;
-(void)invalidate;
-(void)stateDidChange:(long long)arg1 ;
-(id)clientAsString;
-(SCD_Struct_WP0)dutyCycleToScanningRates:(long long)arg1 ;
-(void)checkAllowDuplicate;
-(void)deviceDiscovered:(id)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)stopScanning;
-(void)startScanningWithData:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
@end

