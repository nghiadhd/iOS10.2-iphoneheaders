/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/SpeakTypingServices.framework/SpeakTypingServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXUIClientDelegate.h>

@class AXUIClient, NSString;

@interface SpeakTypingServices : NSObject <AXUIClientDelegate> {

	AXUIClient* _speakTypingClient;

}

@property (nonatomic,retain) AXUIClient * speakTypingClient;              //@synthesize speakTypingClient=_speakTypingClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)setLetterFeedbackEnabled:(BOOL)arg1 ;
-(void)setPhoneticFeedbackEnabled:(BOOL)arg1 ;
-(void)setWordFeedbackEnabled:(BOOL)arg1 ;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
-(BOOL)notifySpeakServicesToStopSpeaking;
-(BOOL)notifySpeakServicesForSpeakAutoCorrections:(id)arg1 forCurrentInputMode:(id)arg2 ;
-(BOOL)notifySpeakServicesToFeedbackQuickTypePrediction:(id)arg1 forCurrentInputMode:(id)arg2 ;
-(id)_clientIdentifier;
-(void)initializeServerConnection;
-(AXUIClient *)speakTypingClient;
-(void)setSpeakTypingClient:(AXUIClient *)arg1 ;
-(void)clearLastSpokenString;
-(id)lastSpokenString;
-(BOOL)notifySpeakServicesToFeedbackCharacter:(id)arg1 forCurrentInputMode:(id)arg2 ;
-(BOOL)notifySpeakServicesToFeedbackWord:(id)arg1 forCurrentInputMode:(id)arg2 ;
@end

