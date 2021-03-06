/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CNFRegFirstRunController.h>

@class PSSpecifier;

@interface CNFRegDisabledController : CNFRegFirstRunController {

	PSSpecifier* _spinner;
	PSSpecifier* _turnOnButton;

}
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)bundle;
-(id)specifierList;
-(id)getAccountNameForSpecifier:(id)arg1 ;
-(void)_setupAccountHandlersForDisabledOperation;
-(id)_rightButtonItem;
-(void)_activateSpinner;
-(void)_deactivateSpinner;
-(void)turnOnTapped:(id)arg1 ;
@end

