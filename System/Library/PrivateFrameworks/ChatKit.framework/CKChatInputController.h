/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/CKMessageEntryViewInputDelegate.h>
#import <libobjc.A.dylib/CKBrowserViewControllerSendDelegate.h>
#import <libobjc.A.dylib/CKPhotoBrowserViewControllerSendDelegate.h>
#import <libobjc.A.dylib/CKHandwritingViewControllerSendDelegate.h>
#import <libobjc.A.dylib/CKBrowserViewControllerStoreSendDelegate.h>
#import <libobjc.A.dylib/CKPluginEntryViewControllerDelegate.h>
#import <libobjc.A.dylib/CKFullScreenAppViewControllerDelegate.h>
#import <libobjc.A.dylib/CKDeviceOrientationManagerDelegate.h>
#import <libobjc.A.dylib/CKBrowserSwitcherViewControllerDelegate.h>
#import <libobjc.A.dylib/CKBrowserTransitionCoordinatorDelegate.h>
#import <libobjc.A.dylib/CKHandwritingPresentationControllerDelegate.h>

@protocol CKChatInputControllerDelegate, CKBrowserViewControllerProtocol;
@class IMBalloonPlugin, IMBalloonPluginDataSource, UIViewController, CKMessageEntryView, CKKeyboardContentViewController, CKBrowserTransitionCoordinator, CKBrowserSwitcherViewController, CKDeviceOrientationManager, UINavigationController, IMScheduledUpdater, CKScheduledUpdater, CKHandwritingPresentationController, UIWindow, NSString;

@interface CKChatInputController : NSObject <CKMessageEntryViewInputDelegate, CKBrowserViewControllerSendDelegate, CKPhotoBrowserViewControllerSendDelegate, CKHandwritingViewControllerSendDelegate, CKBrowserViewControllerStoreSendDelegate, CKPluginEntryViewControllerDelegate, CKFullScreenAppViewControllerDelegate, CKDeviceOrientationManagerDelegate, CKBrowserSwitcherViewControllerDelegate, CKBrowserTransitionCoordinatorDelegate, CKHandwritingPresentationControllerDelegate> {

	BOOL _shouldSuppressStatusBarForHandwriting;
	BOOL _inputViewVisible;
	BOOL _invalidateDigitalTouchTransitionCoordinatorOnDTDismissal;
	BOOL _keyboardIsHiding;
	BOOL _inCollapseOrExpandAnimation;
	BOOL _shouldRestoreAppSwitcher;
	id<CKChatInputControllerDelegate> _delegate;
	IMBalloonPlugin* _browserPlugin;
	IMBalloonPluginDataSource* _browserPluginDataSource;
	UIViewController* _statusBarStyleViewController;
	CKMessageEntryView* _entryView;
	CKKeyboardContentViewController* _currentInputViewController;
	CKBrowserTransitionCoordinator* _digitalTouchTransitionCoordinator;
	CKKeyboardContentViewController* _switcherInputViewController;
	CKBrowserSwitcherViewController* _browserSwitcher;
	CKDeviceOrientationManager* _orientationManager;
	long long _lastSeenOrientation;
	UINavigationController* _presentedBrowserNavigationController;
	UIViewController*<CKBrowserViewControllerProtocol> _modalBrowserViewController;
	IMScheduledUpdater* _dismissEntryViewShelfUpdater;
	CKScheduledUpdater* _orientationUpdater;
	CKHandwritingPresentationController* _handwritingPresentationController;
	UIWindow* _dimmingWindow;

}

@property (nonatomic,retain) CKMessageEntryView * entryView;                                                             //@synthesize entryView=_entryView - In the implementation block
@property (nonatomic,retain) CKKeyboardContentViewController * currentInputViewController;                               //@synthesize currentInputViewController=_currentInputViewController - In the implementation block
@property (assign,getter=isInputViewVisible,nonatomic) BOOL inputViewVisible;                                            //@synthesize inputViewVisible=_inputViewVisible - In the implementation block
@property (nonatomic,retain) CKBrowserTransitionCoordinator * digitalTouchTransitionCoordinator;                         //@synthesize digitalTouchTransitionCoordinator=_digitalTouchTransitionCoordinator - In the implementation block
@property (assign,nonatomic) BOOL invalidateDigitalTouchTransitionCoordinatorOnDTDismissal;                              //@synthesize invalidateDigitalTouchTransitionCoordinatorOnDTDismissal=_invalidateDigitalTouchTransitionCoordinatorOnDTDismissal - In the implementation block
@property (nonatomic,retain) CKKeyboardContentViewController * switcherInputViewController;                              //@synthesize switcherInputViewController=_switcherInputViewController - In the implementation block
@property (nonatomic,retain) CKBrowserSwitcherViewController * browserSwitcher;                                          //@synthesize browserSwitcher=_browserSwitcher - In the implementation block
@property (nonatomic,retain) CKDeviceOrientationManager * orientationManager;                                            //@synthesize orientationManager=_orientationManager - In the implementation block
@property (assign,nonatomic) long long lastSeenOrientation;                                                              //@synthesize lastSeenOrientation=_lastSeenOrientation - In the implementation block
@property (nonatomic,retain) UINavigationController * presentedBrowserNavigationController;                              //@synthesize presentedBrowserNavigationController=_presentedBrowserNavigationController - In the implementation block
@property (nonatomic,retain) UIViewController*<CKBrowserViewControllerProtocol> modalBrowserViewController;              //@synthesize modalBrowserViewController=_modalBrowserViewController - In the implementation block
@property (assign,nonatomic) BOOL keyboardIsHiding;                                                                      //@synthesize keyboardIsHiding=_keyboardIsHiding - In the implementation block
@property (assign,nonatomic) BOOL inCollapseOrExpandAnimation;                                                           //@synthesize inCollapseOrExpandAnimation=_inCollapseOrExpandAnimation - In the implementation block
@property (nonatomic,retain) IMScheduledUpdater * dismissEntryViewShelfUpdater;                                          //@synthesize dismissEntryViewShelfUpdater=_dismissEntryViewShelfUpdater - In the implementation block
@property (nonatomic,retain) CKScheduledUpdater * orientationUpdater;                                                    //@synthesize orientationUpdater=_orientationUpdater - In the implementation block
@property (nonatomic,retain) CKHandwritingPresentationController * handwritingPresentationController;                    //@synthesize handwritingPresentationController=_handwritingPresentationController - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressStatusBarForHandwriting;                                                 //@synthesize shouldSuppressStatusBarForHandwriting=_shouldSuppressStatusBarForHandwriting - In the implementation block
@property (assign,nonatomic) BOOL shouldRestoreAppSwitcher;                                                              //@synthesize shouldRestoreAppSwitcher=_shouldRestoreAppSwitcher - In the implementation block
@property (nonatomic,retain) UIWindow * dimmingWindow;                                                                   //@synthesize dimmingWindow=_dimmingWindow - In the implementation block
@property (nonatomic,retain) UIViewController * statusBarStyleViewController;                                            //@synthesize statusBarStyleViewController=_statusBarStyleViewController - In the implementation block
@property (assign,nonatomic,__weak) id<CKChatInputControllerDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IMBalloonPlugin * browserPlugin;                                                            //@synthesize browserPlugin=_browserPlugin - In the implementation block
@property (nonatomic,retain) IMBalloonPluginDataSource * browserPluginDataSource;                                        //@synthesize browserPluginDataSource=_browserPluginDataSource - In the implementation block
@property (nonatomic,readonly) BOOL presentsHandwritingOnRotation; 
@property (nonatomic,readonly) BOOL browserShouldAutorotate; 
@property (nonatomic,readonly) BOOL appStoreIsDisplayed; 
@property (nonatomic,readonly) unsigned long long browserSupportedInterfaceOrientations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<CKChatInputControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<CKChatInputControllerDelegate>)delegate;
-(id)inputAccessoryView;
-(id)inputViewController;
-(void)keyboardDidHide:(id)arg1 ;
-(void)showKeyboard;
-(void)dismiss;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)composeRecipientViewDidBecomeFirstResponder:(id)arg1 ;
-(BOOL)messageEntryShouldHideCaret:(id)arg1 ;
-(long long)messageEntryViewHighLightInputButton:(id)arg1 ;
-(id)pluginBundleID;
-(void)messageEntryViewDidTakeFocus:(id)arg1 ;
-(void)messageEntryViewHandwritingButtonHit:(id)arg1 ;
-(void)messageEntryViewPhotoButtonHit:(id)arg1 ;
-(void)messageEntryViewDigitalTouchButtonHit:(id)arg1 ;
-(void)messageEntryViewBrowserButtonHit:(id)arg1 ;
-(CKMessageEntryView *)entryView;
-(void)setEntryView:(CKMessageEntryView *)arg1 ;
-(void)requestPhotoBrowserInitFromDraft:(id)arg1 ;
-(BOOL)appStoreIsDisplayed;
-(void)prepareForSuspend;
-(void)didTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2 ;
-(UIViewController *)statusBarStyleViewController;
-(BOOL)shouldSuppressStatusBarForHandwriting;
-(BOOL)presentsHandwritingOnRotation;
-(unsigned long long)browserSupportedInterfaceOrientations;
-(BOOL)browserShouldAutorotate;
-(void)requestPhotoBrowserToAppendFinalImagesToComposition;
-(void)presentAppStoreForURL:(id)arg1 ;
-(void)showPhotosBrowser;
-(void)showDTCompose;
-(void)showAppsBrowser;
-(void)presentViewControllerWithPluginChatItem:(id)arg1 expanded:(BOOL)arg2 ;
-(void)presentAppStoreToManagedTabForPlugin:(id)arg1 ;
-(void)showBrowserForPlugin:(id)arg1 dataSource:(id)arg2 expanded:(BOOL)arg3 ;
-(void)presentAppStoreForAdamID:(id)arg1 ;
-(void)clearBrowserViewControllerIfNecessary;
-(void)startEditingPayload:(id)arg1 ;
-(void)setLocalUserIsTyping:(BOOL)arg1 ;
-(void)requestPhotoBrowserToPrepareForDraft;
-(void)notifyBrowserViewControllerOfMatchingNewMessages:(id)arg1 ;
-(id)dragControllerTranscriptDelegate;
-(BOOL)_currentPluginIsDT;
-(void)fullscreenAppViewControllerWantsToCollapse:(id)arg1 ;
-(void)requestPresentationStyleExpanded:(BOOL)arg1 ;
-(BOOL)handwritingIsDisplayed;
-(void)commitSticker:(id)arg1 ;
-(void)dismissAndReloadInputViews:(BOOL)arg1 ;
-(void)commitSticker:(id)arg1 withDragTarget:(id)arg2 ;
-(void)applicationWillAddDeactivationReasonNotification:(id)arg1 ;
-(void)_handleOrientation;
-(void)_setupObserverForLaunchAppExtensionForDebugging;
-(BOOL)isInputViewVisible;
-(CKKeyboardContentViewController *)currentInputViewController;
-(BOOL)keyboardIsHiding;
-(BOOL)inCollapseOrExpandAnimation;
-(void)setInputViewVisible:(BOOL)arg1 ;
-(CKBrowserSwitcherViewController *)browserSwitcher;
-(void)setBrowserSwitcher:(CKBrowserSwitcherViewController *)arg1 ;
-(void)_loadPhotosBrowserCollapsingEntryField:(BOOL)arg1 ;
-(void)setSwitcherInputViewController:(CKKeyboardContentViewController *)arg1 ;
-(void)setCurrentInputViewController:(CKKeyboardContentViewController *)arg1 ;
-(void)setBrowserPlugin:(IMBalloonPlugin *)arg1 ;
-(void)setInputViewVisible:(BOOL)arg1 entryFieldCollapsed:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)showPhotosBrowserCollapsingEntryField:(BOOL)arg1 ;
-(void)setBrowserPluginDataSource:(IMBalloonPluginDataSource *)arg1 ;
-(void)dismissBrowserViewController;
-(CKBrowserTransitionCoordinator *)digitalTouchTransitionCoordinator;
-(void)setStatusBarStyleViewController:(UIViewController *)arg1 ;
-(UIWindow *)dimmingWindow;
-(void)setDimmingWindow:(UIWindow *)arg1 ;
-(void)setPresentedBrowserNavigationController:(UINavigationController *)arg1 ;
-(CKKeyboardContentViewController *)switcherInputViewController;
-(void)showHandwritingBrowserWithExistingPayload:(id)arg1 ;
-(id)_adamIDFromPluginPayloadData:(id)arg1 ;
-(void)_showFullScreenBrowser:(id)arg1 ;
-(IMScheduledUpdater *)dismissEntryViewShelfUpdater;
-(void)setInvalidateDigitalTouchTransitionCoordinatorOnDTDismissal:(BOOL)arg1 ;
-(void)setDigitalTouchTransitionCoordinator:(CKBrowserTransitionCoordinator *)arg1 ;
-(IMBalloonPlugin *)browserPlugin;
-(void)setShouldRestoreAppSwitcher:(BOOL)arg1 ;
-(void)setKeyboardIsHiding:(BOOL)arg1 ;
-(CKDeviceOrientationManager *)orientationManager;
-(void)setInCollapseOrExpandAnimation:(BOOL)arg1 ;
-(void)_reconfigurePluginDataSourceWithBalloonControllerIfNecessary;
-(IMBalloonPluginDataSource *)browserPluginDataSource;
-(BOOL)invalidateDigitalTouchTransitionCoordinatorOnDTDismissal;
-(id)_senderIdentifier;
-(id)_createDimmingWindow;
-(void)_addGesturesToDimmingWindow:(id)arg1 ;
-(void)_launchAppExtensionForDebugging;
-(void)_dismissBrowserViewControllerAndReloadInputViews:(BOOL)arg1 ;
-(void)_deferredDismissToKeyboardAndFocusEntryView:(id)arg1 ;
-(BOOL)_switcherPluginCanMessageAPI;
-(CKHandwritingPresentationController *)handwritingPresentationController;
-(void)setHandwritingPresentationController:(CKHandwritingPresentationController *)arg1 ;
-(id)_browserViewControllerForInterfaceOrientationMethods;
-(long long)lastSeenOrientation;
-(void)showHandwritingBrowser;
-(void)startEditingPayload:(id)arg1 dismiss:(BOOL)arg2 ;
-(void)setLastSeenOrientation:(long long)arg1 ;
-(BOOL)_switcherPluginCanMessageAPIOnBehalfOfPlugin:(id)arg1 ;
-(void)_openContainingBundleID:(id)arg1 applicationService:(id)arg2 withURL:(id)arg3 pluginID:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)_currentPluginIsPhotos;
-(void)_deferredCommitPayload:(id)arg1 ;
-(void)_deferredCommitSticker:(id)arg1 ;
-(void)commitSticker:(id)arg1 forPlugin:(id)arg2 ;
-(void)dismissAndReloadInputViews:(BOOL)arg1 forPlugin:(id)arg2 ;
-(BOOL)shouldRestoreAppSwitcher;
-(void)_restoreDimmingWindow;
-(UINavigationController *)presentedBrowserNavigationController;
-(void)_flashDimmingWindowWithFadeDuration:(double)arg1 initialAlpha:(double)arg2 ;
-(void)_dimmingWindowTapped:(id)arg1 ;
-(void)_dimmingWindowSwiped:(id)arg1 ;
-(void)requestPresentationStyleExpanded:(BOOL)arg1 forPlugin:(id)arg2 ;
-(void)_deferredRequestPresentationStyleExpanded:(id)arg1 ;
-(void)_startEditingPayload:(id)arg1 ;
-(void)startEditingPayload:(id)arg1 dismiss:(BOOL)arg2 forPlugin:(id)arg3 ;
-(BOOL)_shouldSendTypingIndicatorDataForPluginIdentifier:(id)arg1 ;
-(void)_loadPhotosBrowser;
-(void)setShouldSuppressStatusBarForHandwriting:(BOOL)arg1 ;
-(CKScheduledUpdater *)orientationUpdater;
-(void)commitPayload:(id)arg1 ;
-(void)openURL:(id)arg1 pluginID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)openURL:(id)arg1 applicationIdentifier:(id)arg2 pluginID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)dismissToKeyboard:(BOOL)arg1 ;
-(void)setEntryViewHidden:(BOOL)arg1 ;
-(void)commitSticker:(id)arg1 atScreenCoordinate:(CGPoint)arg2 scale:(double)arg3 rotation:(double)arg4 ;
-(void)showEntryViewShelf:(id)arg1 ;
-(void)dismissEntryViewShelf;
-(id)workingDirForDraft;
-(void)dismissPlugin;
-(void)didBeginInstallingAppWithBundleIdentifier:(id)arg1 ;
-(void)entryViewDidChangeSize;
-(void)deviceOrientationManager:(id)arg1 orientationDidChange:(long long)arg2 ;
-(void)switcherViewControllerDidFinishSwitching:(id)arg1 toViewController:(id)arg2 ;
-(void)switcherViewControllerDidCollapse:(id)arg1 ;
-(void)switcherViewControllerDidSelectAppStore:(id)arg1 shouldRestoreAppSwitcher:(BOOL)arg2 ;
-(void)switcherViewControllerDidStartSwitching:(id)arg1 ;
-(void)switcherViewController:(id)arg1 willShowSelectionViewWithAnimations:(/*^block*/id*)arg2 completion:(/*^block*/id*)arg3 ;
-(void)switcherViewController:(id)arg1 willHideSelectionViewWithAnimations:(/*^block*/id*)arg2 completion:(/*^block*/id*)arg3 ;
-(void)browserTransitionCoordinator:(id)arg1 expandedStateDidChange:(BOOL)arg2 withReason:(long long)arg3 ;
-(void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2 ;
-(void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2 ;
-(void)browserTransitionCoordinatorWillCollapseOrDismiss:(id)arg1 withReason:(long long)arg2 ;
-(void)browserTransitionCoordinatorDidCollapseOrDismiss:(id)arg1 withReason:(long long)arg2 ;
-(id)transcriptEntryViewForBrowserTransitionCoordinator:(id)arg1 ;
-(void)handwritingPresentationControllerDidShowHandwriting:(id)arg1 ;
-(void)handwritingPresentationControllerWillHideHandwriting:(id)arg1 ;
-(void)setOrientationManager:(CKDeviceOrientationManager *)arg1 ;
-(UIViewController*<CKBrowserViewControllerProtocol>)modalBrowserViewController;
-(void)setModalBrowserViewController:(UIViewController*<CKBrowserViewControllerProtocol>)arg1 ;
-(void)setDismissEntryViewShelfUpdater:(IMScheduledUpdater *)arg1 ;
-(void)setOrientationUpdater:(CKScheduledUpdater *)arg1 ;
@end

