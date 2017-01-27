/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBBaseSoftwareUpdateAlertItem.h>

@class SBSoftwareUpdateInstallOperationLifeCycleHandler, NSString;

@interface SBSoftwareUpdateInstallLaterAlertItem : SBBaseSoftwareUpdateAlertItem {

	SBSoftwareUpdateInstallOperationLifeCycleHandler* _tryTonightOperationLifeCycleHandler;
	NSString* _repopReason;
	BOOL _choseInstallTonight;
	BOOL _scheduleInstallAlertRepopOnDismiss;

}

@property (nonatomic,retain) SBSoftwareUpdateInstallOperationLifeCycleHandler * tryTonightOperationLifeCycleHandler;              //@synthesize tryTonightOperationLifeCycleHandler=_tryTonightOperationLifeCycleHandler - In the implementation block
-(id)initWithDescriptor:(id)arg1 softwareUpdateController:(id)arg2 tryTonightOperationLifeCycleHandler:(id)arg3 ;
-(void)_scheduleInstallAlertRepopOnDismissWithReason:(id)arg1 ;
-(SBSoftwareUpdateInstallOperationLifeCycleHandler *)tryTonightOperationLifeCycleHandler;
-(void)setTryTonightOperationLifeCycleHandler:(SBSoftwareUpdateInstallOperationLifeCycleHandler *)arg1 ;
-(BOOL)allowLockScreenDismissal;
-(BOOL)undimsScreen;
-(void)willDeactivateForReason:(int)arg1 ;
-(BOOL)dismissOnLock;
-(BOOL)allowMenuButtonDismissal;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)shouldShowInLockScreen;
@end

