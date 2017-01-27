/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CBPeripheralManagerDelegate.h>

@class CBPeripheralManager, NSString;

@interface AMSBTLEAdvertisementManager : NSObject <CBPeripheralManagerDelegate> {

	CBPeripheralManager* peripheralManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)peripheralManagerDidUpdateState:(id)arg1 ;
-(void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2 ;
-(void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2 ;
-(BOOL)isAdvertising;
-(BOOL)isLECapableHardware;
-(void)advertiseMIDIService;
-(void)stopAdvertisingMIDIService;
@end
