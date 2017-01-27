/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NPSDomainAccessor;

@interface VoiceOverController : PSListController {

	NPSDomainAccessor* _domainAccessor;
	NPSDomainAccessor* _globalDomainAccessor;

}

@property (nonatomic,retain) NPSDomainAccessor * domainAccessor;                    //@synthesize domainAccessor=_domainAccessor - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * globalDomainAccessor;              //@synthesize globalDomainAccessor=_globalDomainAccessor - In the implementation block
-(BOOL)_gizmoHasTapticTime;
-(id)voiceOverTapticTimeSummary:(id)arg1 ;
-(void)setScreenCurtain:(id)arg1 specifier:(id)arg2 ;
-(void)setGlobalDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(void)setSpeakTimeOnWake:(id)arg1 specifier:(id)arg2 ;
-(id)speakTimeOnWake:(id)arg1 ;
-(BOOL)_gizmoLocaleIsRTL;
-(NPSDomainAccessor *)globalDomainAccessor;
-(void)setSpeakingRate:(id)arg1 specifier:(id)arg2 ;
-(void)setHintsEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setVoiceOverTouchEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)voiceOverGestureDirectionSummary:(id)arg1 ;
-(id)speakingRate:(id)arg1 ;
-(id)screenCurtain:(id)arg1 ;
-(id)hintsEnabled:(id)arg1 ;
-(id)voiceOverTouchEnabled:(id)arg1 ;
-(void)setGizmoPref:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)reload;
-(void)viewDidLoad;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)volume;
-(void)setVolume:(id)arg1 specifier:(id)arg2 ;
-(NPSDomainAccessor *)domainAccessor;
-(void)setDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(id)specifiers;
@end

