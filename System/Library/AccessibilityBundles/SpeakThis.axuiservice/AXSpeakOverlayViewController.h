/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/SpeakThis.axuiservice/SpeakThis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpeakThis/SpeakThis-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpeakThis/AXUINubbitDelegate.h>
#import <SpeakThis/AXSpeakOverlayControlBarDelegate.h>

@protocol AXSpeakOverlayViewControllerDelegate;
@class _UIBackdropView, AXDispatchTimer, UIColor, NSArray, AXSpeakOverlayControlBar, QSSelectionHighlightView, NSString;

@interface AXSpeakOverlayViewController : UIViewController <AXUINubbitDelegate, AXSpeakOverlayControlBarDelegate> {

	BOOL _inTabMode;
	_UIBackdropView* _containingView;
	AXDispatchTimer* _collapseTimer;
	BOOL _nubbitMovedOutsideOfTabMode;
	UIColor* _highlightColor;
	UIColor* _underlineColor;
	id<AXSpeakOverlayViewControllerDelegate> _delegate;
	NSArray* _highlightSelectionRects;
	AXSpeakOverlayControlBar* _bar;
	QSSelectionHighlightView* _highlightView;
	QSSelectionHighlightView* _sentenceHighlightView;
	NSString* _currentAppBundleIdentifier;
	CGPoint _nubbitMoveStartPosition;
	CGPoint _gestureMoveStartPosition;

}

@property (nonatomic,retain) AXSpeakOverlayControlBar * bar;                                        //@synthesize bar=_bar - In the implementation block
@property (nonatomic,retain) QSSelectionHighlightView * highlightView;                              //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,retain) QSSelectionHighlightView * sentenceHighlightView;                      //@synthesize sentenceHighlightView=_sentenceHighlightView - In the implementation block
@property (assign,nonatomic) CGPoint nubbitMoveStartPosition;                                       //@synthesize nubbitMoveStartPosition=_nubbitMoveStartPosition - In the implementation block
@property (assign,nonatomic) CGPoint gestureMoveStartPosition;                                      //@synthesize gestureMoveStartPosition=_gestureMoveStartPosition - In the implementation block
@property (nonatomic,retain) NSString * currentAppBundleIdentifier;                                 //@synthesize currentAppBundleIdentifier=_currentAppBundleIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<AXSpeakOverlayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * highlightSelectionRects;                                     //@synthesize highlightSelectionRects=_highlightSelectionRects - In the implementation block
@property (nonatomic,retain) NSArray * sentenceHighlightSelectionRects; 
@property (nonatomic,retain) UIColor * highlightColor;                                              //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,retain) UIColor * underlineColor;                                              //@synthesize underlineColor=_underlineColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(NSArray *)sentenceHighlightSelectionRects;
-(void)setNubbitMoveStartPosition:(CGPoint)arg1 ;
-(CGPoint)nubbitMoveStartPosition;
-(void)setGestureMoveStartPosition:(CGPoint)arg1 ;
-(CGPoint)gestureMoveStartPosition;
-(void)_unregisterNubbit;
-(void)_enqueueCollapseTimer;
-(id)sentenceHighlightColorForColor:(id)arg1 ;
-(void)moveBackInBounds;
-(void)tabModeButtonPressed;
-(void)rewindButtonPressed;
-(void)slowDownButtonPressed;
-(void)_updateForTabMode;
-(void)fastForwardButtonPressed;
-(void)speedUpButtonPressed;
-(void)setCurrentAppBundleIdentifier:(NSString *)arg1 ;
-(void)_saveNubbitPosition;
-(NSString *)currentAppBundleIdentifier;
-(void)temporarilyHideUI;
-(void)controlBarDragged:(CGPoint)arg1 ;
-(void)showErrorMessage:(id)arg1 ;
-(void)stopButtonPressed;
-(void)hideWithCompletion:(/*^block*/id)arg1 ;
-(void)showUIForApplication:(id)arg1 ;
-(void)_registerNubbit;
-(void)didStop;
-(void)didPause;
-(void)didResume;
-(void)headerTapped;
-(void)setSentenceHighlightSelectionRects:(NSArray *)arg1 ;
-(CGPoint)_denormalizedNubbitPositionForViewSize:(CGSize)arg1 ;
-(void)panToPosition:(CGPoint)arg1 ;
-(void)setDelegate:(id<AXSpeakOverlayViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<AXSpeakOverlayViewControllerDelegate>)delegate;
-(id)title;
-(void)loadView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIColor *)highlightColor;
-(void)setHighlightView:(QSSelectionHighlightView *)arg1 ;
-(QSSelectionHighlightView *)highlightView;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(BOOL)isSpeaking;
-(NSArray *)highlightSelectionRects;
-(void)setHighlightSelectionRects:(NSArray *)arg1 ;
-(void)finishLoading;
-(void)playButtonPressed;
-(void)pauseButtonPressed;
-(void)nubbitDidUpdatePosition:(id)arg1 ;
-(AXSpeakOverlayControlBar *)bar;
-(void)setBar:(AXSpeakOverlayControlBar *)arg1 ;
-(QSSelectionHighlightView *)sentenceHighlightView;
-(void)setSentenceHighlightView:(QSSelectionHighlightView *)arg1 ;
-(UIColor *)underlineColor;
-(void)setUnderlineColor:(UIColor *)arg1 ;
@end

