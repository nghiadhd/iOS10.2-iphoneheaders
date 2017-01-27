/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class CCUIButtonModule;

@interface CCUIButtonModuleUnavailableAlertItem : SBAlertItem {

	CCUIButtonModule* _module;

}

@property (nonatomic,retain) CCUIButtonModule * module;              //@synthesize module=_module - In the implementation block
+(BOOL)presentAlertItemForButtonModule:(id)arg1 ;
-(BOOL)dismissOnLock;
-(BOOL)allowMenuButtonDismissal;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)shouldShowInLockScreen;
-(CCUIButtonModule *)module;
-(void)setModule:(CCUIButtonModule *)arg1 ;
-(BOOL)supportsAlertController;
@end

