/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <ManagedConfigurationUI/MCURLListenerListController.h>
#import <libobjc.A.dylib/MCQuestionsControllerDelegate.h>
#import <libobjc.A.dylib/MCInteractionDelegate.h>
#import <libobjc.A.dylib/MCUIInfoListDelegate.h>

@class NSString, MCDetailsHeaderCell, MCDetailsDescriptionTableCell, UITableViewCell, UIAlertView, MCQuestionsController, MCProfile, NSData, UITextField, NSArray;

@interface MCConfigurationDetailsController : MCURLListenerListController <MCQuestionsControllerDelegate, MCInteractionDelegate, MCUIInfoListDelegate> {

	NSString* _profileId;
	MCDetailsHeaderCell* _configHeader;
	MCDetailsDescriptionTableCell* _configMiddle;
	UITableViewCell* _configBottom;
	int _installMode;
	BOOL _processingPayload;
	BOOL _installHasFailed;
	BOOL _userCancelledInstall;
	BOOL _waitingForMoreInput;
	BOOL _isInteractionDelegate;
	BOOL _secondaryProfileReceived;
	BOOL _profileWantsToReEnroll;
	BOOL _actionButtonHidden;
	UIAlertView* _activeAlert;
	MCQuestionsController* _questionsController;
	/*^block*/id _didAppearBlock;
	BOOL _initialQuestionsHaveBeenAsked;
	NSString* _pin;
	struct {
		unsigned installedThisLaunch : 1;
		unsigned profileSuggestsReboot : 1;
	}  _configurationFlags;
	BOOL _delayUserInput;
	MCProfile* _cachedProfile;
	NSData* _cachedProfileData;
	UITextField* _passwordField;
	NSArray* _viewControllersAfterTransition;
	id _profileListChangedObserver;

}

@property (nonatomic,copy) NSString * profileId;                                    //@synthesize profileId=_profileId - In the implementation block
@property (assign,nonatomic) BOOL delayUserInput;                                   //@synthesize delayUserInput=_delayUserInput - In the implementation block
@property (nonatomic,retain) MCProfile * cachedProfile;                             //@synthesize cachedProfile=_cachedProfile - In the implementation block
@property (nonatomic,retain) NSData * cachedProfileData;                            //@synthesize cachedProfileData=_cachedProfileData - In the implementation block
@property (nonatomic,retain) UITextField * passwordField;                           //@synthesize passwordField=_passwordField - In the implementation block
@property (nonatomic,retain) NSArray * viewControllersAfterTransition;              //@synthesize viewControllersAfterTransition=_viewControllersAfterTransition - In the implementation block
@property (nonatomic,retain) id profileListChangedObserver;                         //@synthesize profileListChangedObserver=_profileListChangedObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
+(id)_dateFormatter;
+(void)_showRebootAlert;
+(void)updateUserInfo:(id)arg1 withProfile:(id)arg2 ;
+(id)displayNameForUserInfo:(id)arg1 ;
+(id)organizationForUserInfo:(id)arg1 ;
+(BOOL)isNearExpirationForUserInfo:(id)arg1 ;
-(void)profileConnection:(id)arg1 didFinishInstallationWithIdentifier:(id)arg2 error:(id)arg3 ;
-(void)profileConnection:(id)arg1 didUpdateStatus:(id)arg2 ;
-(void)profileConnectionDidRequestCurrentPasscode:(id)arg1 ;
-(void)profileConnection:(id)arg1 didBeginInstallingNextProfile:(id)arg2 ;
-(void)profileConnection:(id)arg1 didRequestUserInput:(id)arg2 ;
-(void)profileConnection:(id)arg1 didShowUserWarnings:(id)arg2 ;
-(void)profileConnection:(id)arg1 didFinishPreflightWithError:(id)arg2 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(UITextField *)passwordField;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)didCancelEnteringPIN;
-(void)setPasswordField:(UITextField *)arg1 ;
-(void)_setCachedProfile:(id)arg1 ;
-(void)_clearCachedTableCells;
-(void)_profileListChanged:(id)arg1 ;
-(BOOL)_displayedAsSheet;
-(void)_showNavButtonsForStatus:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_currentProfile;
-(void)setProfileId:(NSString *)arg1 ;
-(void)_setCachedProfileData:(id)arg1 ;
-(BOOL)profileIsExpiringSoon;
-(void)reEnroll:(id)arg1 ;
-(id)_titleForCurrentState;
-(void)_updateTitle:(id)arg1 ;
-(void)_performReEnroll;
-(void)_showReEnrollFailureAlert;
-(void)_showProgressIndicator;
-(id)_currentProfileData;
-(void)_hideActionButton;
-(void)_continueInstall;
-(void)_showPINSheet;
-(void)_performInstallAfterPINVerification;
-(void)_performReEnrollAfterPINVerification;
-(void)_finishWaitingForMoreUserInput;
-(void)_hideProgressIndicatorWithSuccess:(BOOL)arg1 showButtons:(BOOL)arg2 ;
-(void)_cancelActiveAlert:(BOOL)arg1 ;
-(BOOL)_installErrorIsUserCancelledError:(id)arg1 ;
-(id)_redirectURLFromInstallError:(id)arg1 ;
-(void)_showAlertForInstallError:(id)arg1 ;
-(void)_showActionButton;
-(id)_nextTitleAfterAction;
-(id)_infoListFromWarnings:(id)arg1 ;
-(void)_performInstall;
-(void)_cancelInstall;
-(void)_setDidAppearBlock:(/*^block*/id)arg1 ;
-(void)_slideRightToSelf;
-(void)_submitResponses:(id)arg1 ;
-(void)_waitForMoreUserInput;
-(void)_cancelUserInput;
-(void)setDelayUserInput:(BOOL)arg1 ;
-(void)_promptUserWithUserInput:(id)arg1 ;
-(void)_installFinishedWithError:(id)arg1 profileId:(id)arg2 ;
-(void)_showInstallationWarningAlert;
-(void)_showProfileWarningFromWarning:(id)arg1 ;
-(void)_pushInstallationWarningControllerWithInfo:(id)arg1 ;
-(void)_profileRemovalDidFinish;
-(void)_showRemovalWarningAlert;
-(void)performRemoveAfterPINVerification;
-(void)_takeMeBack;
-(void)verifyPINBeforeRemoval;
-(void)_showWrongRemovalPasswordAlert;
-(BOOL)installedThisLaunch;
-(NSArray *)viewControllersAfterTransition;
-(void)setViewControllersAfterTransition:(NSArray *)arg1 ;
-(void)questionsController:(id)arg1 didFinishWithResponses:(id)arg2 ;
-(BOOL)questionsControllerIsDisplayedInSheet:(id)arg1 ;
-(void)infoListController:(id)arg1 finishedWithUserResponse:(BOOL)arg2 ;
-(void)installPayload;
-(void)removePayload;
-(void)_changeActionButtonToRemove;
-(BOOL)_signatureForProfile:(id)arg1 matchesProfileB:(id)arg2 ;
-(NSString *)profileId;
-(BOOL)delayUserInput;
-(MCProfile *)cachedProfile;
-(void)setCachedProfile:(MCProfile *)arg1 ;
-(NSData *)cachedProfileData;
-(void)setCachedProfileData:(NSData *)arg1 ;
-(id)profileListChangedObserver;
-(void)setProfileListChangedObserver:(id)arg1 ;
-(id)specifiers;
@end

