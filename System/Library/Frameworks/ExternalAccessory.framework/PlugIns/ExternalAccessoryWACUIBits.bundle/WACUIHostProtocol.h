/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/PlugIns/ExternalAccessoryWACUIBits.bundle/ExternalAccessoryWACUIBits
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WACUIHostProtocol <NSObject>
@required
-(void)backendDidStartSearchWithError:(id)arg1;
-(void)backendFoundNewWACDevices:(id)arg1 andRemovedWACDevices:(id)arg2;
-(void)wifiDidShutdown;
-(void)_signalPresentationComplete;
-(void)backendDidStopSearchWithError:(id)arg1;
-(void)dismissWithStatus:(int)arg1;
-(void)updateState:(long long)arg1;

@end

