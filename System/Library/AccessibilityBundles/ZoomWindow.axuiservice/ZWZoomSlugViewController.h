/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ZoomWindow/ZoomWindow-Structs.h>
#import <ZoomWindow/ZWZoomViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <ZoomWindow/ZWLensAutopannerDataSource.h>

@protocol ZWZoomSlugViewControllerDelegate;
@class ZWSlugCollapsingRingView, NSLayoutConstraint, ZWSlugCirclePivotingView, ZWSlugTriangleView, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, AXAssertion, AXDispatchTimer, NSString;

@interface ZWZoomSlugViewController : ZWZoomViewController <UIGestureRecognizerDelegate, ZWLensAutopannerDataSource> {

	CGPoint _firstTouchLocation;
	CGPoint _lastPanLocation;
	double _lastUnhiddenTime;
	BOOL _userIsInteractingWithSlug;
	BOOL _shouldHideWhileOrbing;
	BOOL _inUserRepositioningMode;
	BOOL _inPanZoomingMode;
	id<ZWZoomSlugViewControllerDelegate> _delegate;
	ZWSlugCollapsingRingView* _slugRingView;
	NSLayoutConstraint* _collapsingRingWidthConstraint;
	NSLayoutConstraint* _collapsingRingHeightConstraint;
	ZWSlugCirclePivotingView* _circlePivotingView;
	NSLayoutConstraint* _circlePivotWidthConstraint;
	NSLayoutConstraint* _circlePivotHeightConstraint;
	NSLayoutConstraint* _circlePivotOffsetXConstraint;
	NSLayoutConstraint* _circlePivotOffsetYConstraint;
	ZWSlugTriangleView* _leftTriangleView;
	NSLayoutConstraint* _leftTriangleRadiusDistanceConstraint;
	ZWSlugTriangleView* _rightTriangleView;
	NSLayoutConstraint* _rightTriangleRadiusDistanceConstraint;
	ZWSlugTriangleView* _topTriangleView;
	NSLayoutConstraint* _topTriangleRadiusDistanceConstraint;
	ZWSlugTriangleView* _bottomTriangleView;
	NSLayoutConstraint* _bottomTriangleRadiusDistanceConstraint;
	UILongPressGestureRecognizer* _longPressGesture;
	UIPanGestureRecognizer* _panGesture;
	UITapGestureRecognizer* _singleTapGesture;
	UITapGestureRecognizer* _doubleTapGesture;
	AXAssertion* _disableDashBoardGesturesForPanAssertion;
	AXAssertion* _disableDashBoardGesturesForLongPressAssertion;
	double _currentOffsetAngle;
	double _idleSlugOpacity;
	AXDispatchTimer* _dimTimer;
	CGPoint _deltaFromInitialTouch;
	CGPoint _deltaFramLastPanEvent;

}

@property (nonatomic,retain) ZWSlugCollapsingRingView * slugRingView;                                    //@synthesize slugRingView=_slugRingView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * collapsingRingWidthConstraint;                         //@synthesize collapsingRingWidthConstraint=_collapsingRingWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * collapsingRingHeightConstraint;                        //@synthesize collapsingRingHeightConstraint=_collapsingRingHeightConstraint - In the implementation block
@property (nonatomic,retain) ZWSlugCirclePivotingView * circlePivotingView;                              //@synthesize circlePivotingView=_circlePivotingView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * circlePivotWidthConstraint;                            //@synthesize circlePivotWidthConstraint=_circlePivotWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * circlePivotHeightConstraint;                           //@synthesize circlePivotHeightConstraint=_circlePivotHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * circlePivotOffsetXConstraint;                          //@synthesize circlePivotOffsetXConstraint=_circlePivotOffsetXConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * circlePivotOffsetYConstraint;                          //@synthesize circlePivotOffsetYConstraint=_circlePivotOffsetYConstraint - In the implementation block
@property (nonatomic,retain) ZWSlugTriangleView * leftTriangleView;                                      //@synthesize leftTriangleView=_leftTriangleView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leftTriangleRadiusDistanceConstraint;                  //@synthesize leftTriangleRadiusDistanceConstraint=_leftTriangleRadiusDistanceConstraint - In the implementation block
@property (nonatomic,retain) ZWSlugTriangleView * rightTriangleView;                                     //@synthesize rightTriangleView=_rightTriangleView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * rightTriangleRadiusDistanceConstraint;                 //@synthesize rightTriangleRadiusDistanceConstraint=_rightTriangleRadiusDistanceConstraint - In the implementation block
@property (nonatomic,retain) ZWSlugTriangleView * topTriangleView;                                       //@synthesize topTriangleView=_topTriangleView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topTriangleRadiusDistanceConstraint;                   //@synthesize topTriangleRadiusDistanceConstraint=_topTriangleRadiusDistanceConstraint - In the implementation block
@property (nonatomic,retain) ZWSlugTriangleView * bottomTriangleView;                                    //@synthesize bottomTriangleView=_bottomTriangleView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomTriangleRadiusDistanceConstraint;                //@synthesize bottomTriangleRadiusDistanceConstraint=_bottomTriangleRadiusDistanceConstraint - In the implementation block
@property (assign,nonatomic) BOOL userIsInteractingWithSlug;                                             //@synthesize userIsInteractingWithSlug=_userIsInteractingWithSlug - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGesture;                            //@synthesize longPressGesture=_longPressGesture - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGesture;                                        //@synthesize panGesture=_panGesture - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * singleTapGesture;                                  //@synthesize singleTapGesture=_singleTapGesture - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * doubleTapGesture;                                  //@synthesize doubleTapGesture=_doubleTapGesture - In the implementation block
@property (assign,getter=isInUserRepositioningMode,nonatomic) BOOL inUserRepositioningMode;              //@synthesize inUserRepositioningMode=_inUserRepositioningMode - In the implementation block
@property (assign,getter=isInPanZoomingMode,nonatomic) BOOL inPanZoomingMode;                            //@synthesize inPanZoomingMode=_inPanZoomingMode - In the implementation block
@property (nonatomic,retain) AXAssertion * disableDashBoardGesturesForPanAssertion;                      //@synthesize disableDashBoardGesturesForPanAssertion=_disableDashBoardGesturesForPanAssertion - In the implementation block
@property (nonatomic,retain) AXAssertion * disableDashBoardGesturesForLongPressAssertion;                //@synthesize disableDashBoardGesturesForLongPressAssertion=_disableDashBoardGesturesForLongPressAssertion - In the implementation block
@property (assign,nonatomic) double currentOffsetAngle;                                                  //@synthesize currentOffsetAngle=_currentOffsetAngle - In the implementation block
@property (assign,nonatomic) CGPoint deltaFromInitialTouch;                                              //@synthesize deltaFromInitialTouch=_deltaFromInitialTouch - In the implementation block
@property (assign,nonatomic) CGPoint deltaFramLastPanEvent;                                              //@synthesize deltaFramLastPanEvent=_deltaFramLastPanEvent - In the implementation block
@property (assign,nonatomic) double idleSlugOpacity;                                                     //@synthesize idleSlugOpacity=_idleSlugOpacity - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * dimTimer;                                                 //@synthesize dimTimer=_dimTimer - In the implementation block
@property (assign,nonatomic,__weak) id<ZWZoomSlugViewControllerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldHideWhileOrbing;                                                 //@synthesize shouldHideWhileOrbing=_shouldHideWhileOrbing - In the implementation block
@property (nonatomic,readonly) CGRect slugRingViewBoundsInScreenCoordinates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLeftTriangleView:(ZWSlugTriangleView *)arg1 ;
-(double)currentOffsetAngle;
-(BOOL)shouldHideWhileOrbing;
-(AXAssertion *)disableDashBoardGesturesForLongPressAssertion;
-(AXAssertion *)disableDashBoardGesturesForPanAssertion;
-(CGPoint)deltaFromInitialTouch;
-(void)setInUserRepositioningMode:(BOOL)arg1 ;
-(void)setTopTriangleView:(ZWSlugTriangleView *)arg1 ;
-(void)setCurrentOffsetAngle:(double)arg1 ;
-(CGPoint)deltaFramLastPanEvent;
-(BOOL)isInUserRepositioningMode;
-(void)setCirclePivotWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_enableTapGestures;
-(void)_updateSlugAppearanceForMode:(unsigned long long)arg1 ;
-(NSLayoutConstraint *)collapsingRingWidthConstraint;
-(NSLayoutConstraint *)circlePivotOffsetYConstraint;
-(NSLayoutConstraint *)circlePivotHeightConstraint;
-(void)_updateSlugDimStatus:(BOOL)arg1 Animated:(BOOL)arg2 ;
-(void)setBottomTriangleView:(ZWSlugTriangleView *)arg1 ;
-(ZWSlugTriangleView *)leftTriangleView;
-(NSLayoutConstraint *)circlePivotOffsetXConstraint;
-(BOOL)isInPanZoomingMode;
-(void)setUserIsInteractingWithSlug:(BOOL)arg1 ;
-(void)setInPanZoomingMode:(BOOL)arg1 ;
-(void)_disableTapGestures;
-(void)setDeltaFramLastPanEvent:(CGPoint)arg1 ;
-(void)_didFinishInteractingWithSlug;
-(ZWSlugTriangleView *)rightTriangleView;
-(void)_didBeginInteractingWithSlug;
-(ZWSlugTriangleView *)bottomTriangleView;
-(BOOL)_panGestureIsRecognizing;
-(NSLayoutConstraint *)circlePivotWidthConstraint;
-(void)setCirclePivotHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(ZWSlugCirclePivotingView *)circlePivotingView;
-(void)_disableAllGestures;
-(void)_enableAllGestures;
-(void)setRightTriangleView:(ZWSlugTriangleView *)arg1 ;
-(NSLayoutConstraint *)collapsingRingHeightConstraint;
-(void)setDeltaFromInitialTouch:(CGPoint)arg1 ;
-(BOOL)userIsInteractingWithSlug;
-(void)setSlugRingView:(ZWSlugCollapsingRingView *)arg1 ;
-(void)userInteractionHasBecomeIdle;
-(void)setIdleSlugOpacity:(double)arg1 ;
-(ZWSlugTriangleView *)topTriangleView;
-(CGPoint)offsetForAutopanner:(id)arg1 ;
-(double)idleSlugOpacity;
-(void)setShouldHideWhileOrbing:(BOOL)arg1 ;
-(void)setCirclePivotingView:(ZWSlugCirclePivotingView *)arg1 ;
-(void)setDimTimer:(AXDispatchTimer *)arg1 ;
-(AXDispatchTimer *)dimTimer;
-(void)_dimAfterDelay;
-(ZWSlugCollapsingRingView *)slugRingView;
-(BOOL)offsetValuesAreNormalizedForAutopanner:(id)arg1 ;
-(void)updateIdleSlugOpacityAndPreviewImmediately:(double)arg1 ;
-(CGRect)slugRingViewBoundsInScreenCoordinates;
-(void)userInteractionHasBecomeActiveWithFirstTouchAtLocation:(CGPoint)arg1 ;
-(void)setCollapsingRingWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCollapsingRingHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCirclePivotOffsetXConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCirclePivotOffsetYConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTopTriangleRadiusDistanceConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)topTriangleRadiusDistanceConstraint;
-(void)setBottomTriangleRadiusDistanceConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)bottomTriangleRadiusDistanceConstraint;
-(void)setLeftTriangleRadiusDistanceConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)leftTriangleRadiusDistanceConstraint;
-(void)setRightTriangleRadiusDistanceConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)rightTriangleRadiusDistanceConstraint;
-(void)setDisableDashBoardGesturesForLongPressAssertion:(AXAssertion *)arg1 ;
-(void)setDisableDashBoardGesturesForPanAssertion:(AXAssertion *)arg1 ;
-(void)setDelegate:(id<ZWZoomSlugViewControllerDelegate>)arg1 ;
-(id<ZWZoomSlugViewControllerDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_handlePan:(id)arg1 ;
-(void)setPanGesture:(UIPanGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)panGesture;
-(UITapGestureRecognizer *)singleTapGesture;
-(void)setSingleTapGesture:(UITapGestureRecognizer *)arg1 ;
-(void)setDoubleTapGesture:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)doubleTapGesture;
-(void)_handleLongPress:(id)arg1 ;
-(void)setLongPressGesture:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)longPressGesture;
-(void)_handleDoubleTap:(id)arg1 ;
-(void)_handleSingleTap:(id)arg1 ;
@end

