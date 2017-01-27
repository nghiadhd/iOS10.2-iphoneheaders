/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRVehicleDiscovery <NSObject>
@optional
-(void)vehicleDiscoverer:(id)arg1 didDiscoverVehicle:(id)arg2;
-(void)vehicleDiscoverer:(id)arg1 didUpdateVehicle:(id)arg2;
-(void)vehicleDiscoverer:(id)arg1 didRemoveVehicle:(id)arg2;

@required
-(id)viewControllerPresentingPairingForVehicleDiscoverer:(id)arg1;

@end

