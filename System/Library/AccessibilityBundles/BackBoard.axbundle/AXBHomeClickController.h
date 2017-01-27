/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/BackBoard.axbundle/BackBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BackBoard/BackBoard-Structs.h>
@class NSString, NSMutableArray, NSLock, AXDispatchTimer;

@interface AXBHomeClickController : NSObject {

	BOOL _isAlertVisible;
	NSString* _eventTapIdentifier;
	NSMutableArray* _menuButtonClientIds;
	NSLock* _menuButtonLock;
	AXDispatchTimer* _writeLoginNoteTimer;
	BOOL isHearingAidControlVisible;
	BOOL switchControlRendersDeviceUnusable;
	BOOL _didShowHoldDurationTripleClickHelp;

}

@property (assign,nonatomic) BOOL didShowHoldDurationTripleClickHelp;              //@synthesize didShowHoldDurationTripleClickHelp=_didShowHoldDurationTripleClickHelp - In the implementation block
@property (assign,nonatomic) BOOL isHearingAidControlVisible; 
@property (assign,nonatomic) BOOL switchControlRendersDeviceUnusable; 
+(void)initializeMonitor;
+(id)controller;
-(void)setIsHearingAidControlVisible:(BOOL)arg1 ;
-(void)_updateHomeClickSpeed;
-(id)_eventTapIdentifier;
-(void)_toggleDisplayAskSheet;
-(void)_writeNoteToNewUserSession;
-(void)_springBoardDied:(id)arg1 ;
-(void)_toggleVoiceOver;
-(void)_setHearingAidControlVisible:(BOOL)arg1 ;
-(BOOL)isHearingAidControlVisible;
-(void)_updateHomeClickEnabled;
-(BOOL)captureHomeClick:(id)arg1 ;
-(BOOL)_purpleBuddySetupComplete;
-(BOOL)_captureKeyboardCommands:(SCD_Struct_AX0*)arg1 ;
-(void)_updateTripleHomeSettings:(BOOL)arg1 ;
-(void)_toggleSwitchOverOffMainThread;
-(void)_toggleMagnifier;
-(void)_triggerAppTransition;
-(void)_fireHomeButtons:(BOOL)arg1 ;
-(void)clearNoteToUserSession;
-(void)_handleZoomInBuddyAlertResult:(long long)arg1 ;
-(void)_toggleLocalizationCaptionPanel;
-(void)_toggleTouchAccommodations;
-(void)_toggleAssistiveTouch;
-(void)_toggleSwitchOver;
-(void)_promptToDisableBrightnessFilters:(/*^block*/id)arg1 data:(id)arg2 ;
-(void)_toggleWhiteOnBlackOffMainThread;
-(void)_toggleAssistiveTouchOffMainThread;
-(BOOL)didShowHoldDurationTripleClickHelp;
-(void)setDidShowHoldDurationTripleClickHelp:(BOOL)arg1 ;
-(BOOL)_checkIfZoomWasActivated:(id)arg1 stealEvent:(BOOL*)arg2 ;
-(void)_handleZoomActivationDuringBuddy;
-(BOOL)switchControlRendersDeviceUnusable;
-(id)_writeLoginNoteTimer;
-(void)_toggleGrayscale;
-(void)_toggleZoomOffMainThread;
-(void)_toggleWhiteOnBlack;
-(void)_toggleGuidedAccess;
-(void)_appTransition;
-(void)_didHideAlert;
-(void)_toggleZoom;
-(void)_willShowAlert;
-(void)_updateEventTapSettings;
-(void)_startVoiceOverSequence;
-(void)_toggleColorFilter;
-(void)_toggleReduceWhitePoint;
-(void)initialize;
-(void)setSwitchControlRendersDeviceUnusable:(BOOL)arg1 ;
@end
