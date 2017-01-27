/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <UIKit/UITextFieldDelegate.h>

@class VoiceOverBluetoothDevice, NSString;

@interface VoiceOverBluetoothPairController : PSListController <UITextFieldDelegate> {

	VoiceOverBluetoothDevice* _device;
	NSString* _promptFormat;
	BOOL _dismissed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)cancelButtonClicked:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)deviceUpdated:(id)arg1 ;
-(void)doneButtonClicked:(id)arg1 ;
-(void)updatePrompt:(id)arg1 ;
-(void)emptySetter:(id)arg1 specifier:(id)arg2 ;
-(id)specifiers;
@end
