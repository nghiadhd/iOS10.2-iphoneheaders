/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActionSheetDelegate.h>

@class NSString, NSArray, UIResponder, RCActionSheetAlertController, UIViewController;

@interface RCActionSheetController : NSObject <UIActionSheetDelegate> {

	BOOL _showing;
	NSString* _alertTitle;
	NSString* _alertMessage;
	NSString* _cancelButtonTitle;
	NSArray* _actionButtonTitles;
	BOOL _dismissWhenDismissIsEnabled;
	UIResponder* _originalFirstResponder;
	RCActionSheetAlertController* _alertController;
	UIViewController* _modalItemPresentationViewController;
	BOOL _autoDismissDisabled;
	BOOL _enabled;
	UIViewController* _accessoryViewController;
	/*^block*/id _actionHandlerBlock;

}

@property (nonatomic,readonly) UIViewController * accessoryViewController;              //@synthesize accessoryViewController=_accessoryViewController - In the implementation block
@property (nonatomic,copy,readonly) id actionHandlerBlock;                              //@synthesize actionHandlerBlock=_actionHandlerBlock - In the implementation block
@property (assign,nonatomic) BOOL autoDismissDisabled;                                  //@synthesize autoDismissDisabled=_autoDismissDisabled - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                              //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)enabled;
-(void)cancel;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(UIViewController *)accessoryViewController;
-(id)initWithTitle:(id)arg1 cancelTitle:(id)arg2 actionTitles:(id)arg3 accessoryViewController:(id)arg4 ;
-(void)setAutoDismissDisabled:(BOOL)arg1 ;
-(void)showInViewController:(id)arg1 actionHandlerBlock:(/*^block*/id)arg2 ;
-(void)dismissWithActionIndex:(long long)arg1 invokeActionHandler:(BOOL)arg2 ;
-(void)_willDismiss;
-(void)_invokeActionHandlerWithActionIndex:(long long)arg1 ;
-(void)showInView:(id)arg1 actionHandlerBlock:(/*^block*/id)arg2 ;
-(void)dismissWithActionIndex:(long long)arg1 ;
-(BOOL)autoDismissDisabled;
-(id)actionHandlerBlock;
@end

