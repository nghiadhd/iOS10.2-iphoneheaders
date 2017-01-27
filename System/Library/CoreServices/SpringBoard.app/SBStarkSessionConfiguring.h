/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AVExternalDevice, FBSDisplay, UIScreen, UITraitCollection, NSString;


@protocol SBStarkSessionConfiguring <NSObject>
@property (nonatomic,readonly) AVExternalDevice * device; 
@property (nonatomic,readonly) unsigned long long interactionAffordances; 
@property (nonatomic,readonly) long long layoutJustification; 
@property (nonatomic,readonly) BOOL screenSupportsFocus; 
@property (nonatomic,readonly) FBSDisplay * display; 
@property (nonatomic,readonly) UIScreen * screen; 
@property (nonatomic,readonly) CGRect screenBounds; 
@property (nonatomic,readonly) double screenScale; 
@property (nonatomic,copy,readonly) UITraitCollection * traitCollection; 
@property (getter=isACBackSupported,nonatomic,readonly) BOOL acBackSupported; 
@property (getter=isAmbientBrightnessNighttime,nonatomic,readonly) BOOL ambientBrightnessNighttime; 
@property (getter=isConnectedWirelessly,nonatomic,readonly) BOOL connectedWirelessly; 
@property (getter=isGeoSupported,nonatomic,readonly) BOOL geoSupported; 
@property (getter=isKnownVehicle,nonatomic,readonly) BOOL knownVehicle; 
@property (getter=isOEMIconVisible,nonatomic,readonly) BOOL OEMIconVisible; 
@property (getter=isPairedVehicle,nonatomic,readonly) BOOL pairedVehicle; 
@property (nonatomic,readonly) NSString * layoutId; 
@required
-(BOOL)isPairedVehicle;
-(id)policyForApp:(id)arg1;
-(unsigned long long)interactionAffordances;
-(long long)layoutJustification;
-(BOOL)screenSupportsFocus;
-(BOOL)isACBackSupported;
-(BOOL)isAmbientBrightnessNighttime;
-(BOOL)isConnectedWirelessly;
-(BOOL)isKnownVehicle;
-(BOOL)isOEMIconVisible;
-(NSString *)layoutId;
-(UITraitCollection *)traitCollection;
-(UIScreen *)screen;
-(FBSDisplay *)display;
-(CGRect)screenBounds;
-(double)screenScale;
-(BOOL)isGeoSupported;
-(AVExternalDevice *)device;

@end

