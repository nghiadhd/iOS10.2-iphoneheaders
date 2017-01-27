/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKBackgroundImageFaceView.h>
#import <libobjc.A.dylib/NPTOImageViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NPTOImageView, UILongPressGestureRecognizer, UIView, NSTimer, NTKTaskScheduler, NTKAlbumEmptyView, UIColor, NTKUtilityComplicationFactory, NSString;

@interface NTKBasePhotoFaceView : NTKBackgroundImageFaceView <NPTOImageViewDelegate, UIGestureRecognizerDelegate> {

	NPTOImageView* _posterImageView;
	UILongPressGestureRecognizer* _longPressGesture;
	BOOL _lastLongPressGestureWasCancelled;
	BOOL _paused;
	/*^block*/id _unpauseFromSwitcherBlock;
	UIView* _blackView;
	BOOL _shouldPlayIntro;
	BOOL _shouldPlayOnWake;
	NSTimer* _playOnWakeTimeout;
	NTKTaskScheduler* _taskScheduler;
	BOOL _preLoadingPhotoOnSleep;
	BOOL _preloadedPhotoOnSleep;
	long long _previousDataMode;
	unsigned long long _dateAlignment;
	NTKAlbumEmptyView* _noPhotosView;
	UIView* _cornerView;
	UIColor* _foregroundColor;
	UIColor* _shadowColor;
	UIView* _currentGradientView;
	unsigned _isContentLoaded : 1;
	unsigned _isInteractive : 1;
	unsigned _isUsingLegibility : 1;
	NTKUtilityComplicationFactory* _complicationFactory;
	BOOL _noPhotosViewVisible;

}

@property (nonatomic,readonly) unsigned long long dateAlignment; 
@property (nonatomic,readonly) BOOL isInteractive;                                               //@synthesize isInteractive=_isInteractive - In the implementation block
@property (nonatomic,readonly) NPTOImageView * posterImageView;                                  //@synthesize posterImageView=_posterImageView - In the implementation block
@property (assign,getter=isNoPhotosViewVisible,nonatomic) BOOL noPhotosViewVisible;              //@synthesize noPhotosViewVisible=_noPhotosViewVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_analyzeSidecarPhoto:(id)arg1 dateAlignment:(unsigned long long)arg2 ;
+(id)_temporaryDirectory;
+(id)_analysisForPhoto:(id)arg1 dateAlignment:(unsigned long long)arg2 ;
+(id)_saveSidecarPhotoAnalysis:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(BOOL)isInteractive;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_handleLongPress:(id)arg1 ;
-(void)_animateIn;
-(NPTOImageView *)posterImageView;
-(void)_prepareForEditing;
-(void)_cleanupAfterEditing;
-(void)_setDateAttributes:(id)arg1 animated:(BOOL)arg2 ;
-(void)setNoPhotosViewVisible:(BOOL)arg1 ;
-(void)_invalidatePreloadedPhoto;
-(BOOL)_preloadNextPhoto;
-(void)_applyFrozen;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(void)_applyDataMode;
-(void)_handleWristRaiseScreenWake;
-(void)_handleOrdinaryScreenWake;
-(unsigned long long)dateAlignment;
-(void)_configureComplicationFactory;
-(void)_unpauseFromSwitcher;
-(double)_timeTravelYAdjustment;
-(id)_digitalTimeLabelStyle;
-(void)_layoutForegroundContainerView;
-(void)_applyAlignment;
-(void)_setComplicationsHidden:(BOOL)arg1 ;
-(void)_loadLayoutRules;
-(long long)_utilitySlotForSlot:(id)arg1 ;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(double)_backgroundImageAlphaForEditMode:(long long)arg1 ;
-(unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(double)_editSpeedForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(void)_updatePaused;
-(void)_applySlow;
-(void)_prepareForOrb;
-(void)_cleanupAfterOrb:(BOOL)arg1 ;
-(BOOL)_screenOn;
-(void)_playPhoto;
-(void)_playVideoForScreenWake:(id)arg1 ;
-(void)_playVideo;
-(void)_playStill;
-(void)_hideCurtainView;
-(void)_scheduleSleepPreloadTask;
-(void)_handleScreenWake;
-(void)_showCurtainView;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_applyForegroundAlphaForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_configureForEditMode:(long long)arg1 ;
-(BOOL)_usesCustomZoom;
-(void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3 ;
-(void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2 ;
-(void)_cleanupAfterZoom;
-(BOOL)_timeLabelUsesLegibility;
-(id)_newGradientViewWithColor:(id)arg1 ;
-(void)_applyComplicationContentSpecificAttributesAnimated:(BOOL)arg1 ;
-(BOOL)_curtainViewVisible;
-(void)_applyScrubbingForegroundColor:(id)arg1 shadowColor:(id)arg2 ;
-(void)imageViewDidBeginPlaying:(id)arg1 ;
-(void)imageViewDidEndPlaying:(id)arg1 ;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 ;
-(double)_timeLabelAlphaForEditMode:(long long)arg1 ;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(double)_keylineCornerRadiusForComplicationSlot:(id)arg1 ;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(id)_selectedContentView;
-(void)_fadeToCurtainViewWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fadeFromCurtainViewWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startScrubbingAnimationFromUIViewAnimateWithDuration;
-(void)_endScrubbingAnimationFromUIViewAnimateWithDuration;
-(BOOL)isNoPhotosViewVisible;
@end

