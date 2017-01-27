/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSSetupController.h>

@interface DevicePINSetupController : PSSetupController {

	BOOL _success;
	BOOL _allowOptionsButton;

}

@property (assign,nonatomic) BOOL allowOptionsButton;              //@synthesize allowOptionsButton=_allowOptionsButton - In the implementation block
-(id)init;
-(CGSize)preferredContentSize;
-(BOOL)usePopupStyle;
-(BOOL)popupStyleIsModal;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)setAllowOptionsButton:(BOOL)arg1 ;
-(BOOL)allowOptionsButton;
-(BOOL)success;
-(BOOL)canBeShownFromSuspendedState;
@end

