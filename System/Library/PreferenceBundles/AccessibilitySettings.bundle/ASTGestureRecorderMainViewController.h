/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <Preferences/PSViewController.h>
#import <AccessibilitySettings/ASTGestureRecorderViewControllerDelegate.h>
#import <AccessibilitySettings/ASTGestureRecorderControlsViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol ASTGestureRecorderMainViewControllerDelegate;
@class ASTGestureRecorderStyleProvider, ASTGestureRecorderViewController, ASTGestureRecorderControlsView, UILabel, UIBarButtonItem, AXAssertion, NSString;

@interface ASTGestureRecorderMainViewController : PSViewController <ASTGestureRecorderViewControllerDelegate, ASTGestureRecorderControlsViewDelegate, UITextFieldDelegate> {

	BOOL _inReplayMode;
	BOOL _isDisplayLinkInEffect;
	ASTGestureRecorderStyleProvider* _styleProvider;
	ASTGestureRecorderViewController* _gestureRecorderViewController;
	ASTGestureRecorderControlsView* _controlsView;
	UILabel* _instructionsLabel;
	UIBarButtonItem* _saveButton;
	unsigned long long _leftButtonIdentifier;
	unsigned long long _rightButtonIdentifier;
	double _gestureRecordingDidStartTimeInterval;
	id<ASTGestureRecorderMainViewControllerDelegate> _delegate;
	AXAssertion* _disableSystemGesturesAssertion;
	id _appDidResignActiveNotificationHandlerToken;
	long long _recorderType;

}

@property (nonatomic,retain) ASTGestureRecorderStyleProvider * styleProvider;                               //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) ASTGestureRecorderViewController * gestureRecorderViewController;              //@synthesize gestureRecorderViewController=_gestureRecorderViewController - In the implementation block
@property (nonatomic,retain) ASTGestureRecorderControlsView * controlsView;                                 //@synthesize controlsView=_controlsView - In the implementation block
@property (nonatomic,retain) UILabel * instructionsLabel;                                                   //@synthesize instructionsLabel=_instructionsLabel - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * saveButton;                                                  //@synthesize saveButton=_saveButton - In the implementation block
@property (assign,nonatomic) unsigned long long leftButtonIdentifier;                                       //@synthesize leftButtonIdentifier=_leftButtonIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long rightButtonIdentifier;                                      //@synthesize rightButtonIdentifier=_rightButtonIdentifier - In the implementation block
@property (assign,nonatomic) double gestureRecordingDidStartTimeInterval;                                   //@synthesize gestureRecordingDidStartTimeInterval=_gestureRecordingDidStartTimeInterval - In the implementation block
@property (assign,getter=isInReplayMode,nonatomic) BOOL inReplayMode;                                       //@synthesize inReplayMode=_inReplayMode - In the implementation block
@property (nonatomic,retain) AXAssertion * disableSystemGesturesAssertion;                                  //@synthesize disableSystemGesturesAssertion=_disableSystemGesturesAssertion - In the implementation block
@property (nonatomic,retain) id appDidResignActiveNotificationHandlerToken;                                 //@synthesize appDidResignActiveNotificationHandlerToken=_appDidResignActiveNotificationHandlerToken - In the implementation block
@property (assign,nonatomic) long long recorderType;                                                        //@synthesize recorderType=_recorderType - In the implementation block
@property (assign,nonatomic) BOOL isDisplayLinkInEffect;                                                    //@synthesize isDisplayLinkInEffect=_isDisplayLinkInEffect - In the implementation block
@property (assign,nonatomic) id<ASTGestureRecorderMainViewControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(unsigned long long)rightButtonIdentifier;
-(void)_updateProgressView:(id)arg1 ;
-(void)_saveReplayableGesture;
-(void)_saveWithMessage:(id)arg1 ;
-(void)setRecorderType:(long long)arg1 ;
-(void)setControlsView:(ASTGestureRecorderControlsView *)arg1 ;
-(void)_manageDisplayLinkManager:(BOOL)arg1 ;
-(void)_clearProgressView;
-(void)setLeftButtonIdentifier:(unsigned long long)arg1 ;
-(ASTGestureRecorderViewController *)gestureRecorderViewController;
-(void)_hideChromeButtonTapped:(id)arg1 ;
-(void)_enterWaitingMode;
-(void)_didSaveGestureWithName:(id)arg1 ;
-(void)setInReplayMode:(BOOL)arg1 ;
-(id)_defaultInstructionalText;
-(void)_enterReplayMode;
-(void)setIsDisplayLinkInEffect:(BOOL)arg1 ;
-(void)setRightButtonIdentifier:(unsigned long long)arg1 ;
-(BOOL)isDisplayLinkInEffect;
-(BOOL)_canSaveGestureWithName:(id)arg1 ;
-(unsigned long long)leftButtonIdentifier;
-(void)gestureRecorderViewController:(id)arg1 didStartRecordingAtomicFingerPathAtPoint:(CGPoint)arg2 ;
-(double)maximumDurationOfRecordedGestureForGestureRecorderViewController:(id)arg1 ;
-(void)_getButtonPropertiesForIdentifier:(unsigned long long)arg1 enabled:(BOOL)arg2 color:(int*)arg3 title:(id*)arg4 ;
-(double)gestureRecordingDidStartTimeInterval;
-(BOOL)isChromeVisibleForGestureRecorderViewController:(id)arg1 ;
-(void)gestureRecorderViewController:(id)arg1 setChromeVisible:(BOOL)arg2 ;
-(void)gestureRecorderViewControllerDidStopRecordingAtomicFingerPath:(id)arg1 ;
-(id)appDidResignActiveNotificationHandlerToken;
-(BOOL)isInReplayMode;
-(void)gestureRecorderViewControllerDidFinishReplayingRecordedGesture:(id)arg1 ;
-(void)setGestureRecordingDidStartTimeInterval:(double)arg1 ;
-(void)_hide;
-(void)_hideChrome;
-(void)setGestureRecorderViewController:(ASTGestureRecorderViewController *)arg1 ;
-(void)_releaseOutlets;
-(void)_savePoint:(CGPoint)arg1 ;
-(void)setAppDidResignActiveNotificationHandlerToken:(id)arg1 ;
-(void)gestureRecorderControlsView:(id)arg1 buttonTappedAtIndex:(unsigned long long)arg2 ;
-(long long)recorderType;
-(void)_unhideChrome;
-(void)_setLeftButtonIdentifier:(unsigned long long)arg1 enabled:(BOOL)arg2 rightButtonIdentifier:(unsigned long long)arg3 enabled:(BOOL)arg4 animate:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(ASTGestureRecorderControlsView *)controlsView;
-(id)init;
-(void)setDelegate:(id<ASTGestureRecorderMainViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<ASTGestureRecorderMainViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)_reset;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)_commonInit;
-(id)initWithType:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(ASTGestureRecorderStyleProvider *)styleProvider;
-(void)setStyleProvider:(ASTGestureRecorderStyleProvider *)arg1 ;
-(void)_cancelButtonTapped:(id)arg1 ;
-(UIBarButtonItem *)saveButton;
-(void)setSaveButton:(UIBarButtonItem *)arg1 ;
-(AXAssertion *)disableSystemGesturesAssertion;
-(void)setDisableSystemGesturesAssertion:(AXAssertion *)arg1 ;
-(void)_saveButtonTapped:(id)arg1 ;
-(void)setInstructionsLabel:(UILabel *)arg1 ;
-(UILabel *)instructionsLabel;
@end

