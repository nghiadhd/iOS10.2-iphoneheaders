/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MZMediaManagement, MRFeatureDelegate, MRRenderingDelegate, MREditingDelegate;
#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class MCMontage, MRLayerParallelizer, MRRendererInternal, NSDictionary, CADisplayLink, MRCameraCaptureSession, NSString, MRContext;

@interface MRRenderer : NSObject {

	MCMontage* mMontage;
	MRLayerParallelizer* mTopMRLayer;
	CGSize mSize;
	MRRendererInternal* mInternal;
	NSDictionary* mDescriptionsForRandomTransitionPresetIDs;
	BOOL _interactivityIsEnabled;
	BOOL _slideshowIsPaused;
	CADisplayLink* mDisplayLink;
	double mDisplayLinkTimestamp;
	double _slideFocusModeBackgroundColor[4];
	double _lastRenderedTime;
	BOOL _needsToUpdateGeometry;
	BOOL _isFrozen;
	int _currentOSThermalPressureLevel;
	int _thermalNotificationToken;
	BOOL mIsEditing;
	BOOL mPushRendering;
	BOOL mRequestRenderingOnChanges;
	BOOL mDisplaysFPS;
	BOOL mDisplaysPlayingIDs;
	BOOL mDisplaysIsPreloadingImages;
	BOOL mDisplaysTouchVisualFeedback;
	BOOL mDisplaysHitZonesVisualFeedback;
	BOOL _ignoresBackgroundAudio;
	BOOL mIsCleanedUp;
	BOOL _asynchronousOperationsAreSuspended;
	BOOL _allowsThumbnails;
	BOOL _logRenderingTimes;
	int mMode;
	int mOrientation;
	float mVolume;
	id<MZMediaManagement> _assetManagementDelegate;
	id<MRFeatureDelegate> _featureDelegate;
	id<MRRenderingDelegate> _renderingDelegate;
	id<MREditingDelegate> _editingDelegate;
	double mTimeQuantum;
	NSDictionary* mParameters;
	MRCameraCaptureSession* _cameraCaptureSession;
	double _fadeInStartTime;
	double _fadeInDuration;
	double _fadeOutStartTime;
	double _fadeOutDuration;
	NSString* _renderingLogFilePath;
	double _timestampOfLastRenderPass;
	double _interactiveTransitionTrackingBoxRadius;
	double _interactiveTransitionProgressThreshold;
	double _interactiveTransitionVelocityThreshold;

}

@property (readonly) BOOL slideshowIsPlaying; 
@property (readonly) double currentSlideshowTime; 
@property (nonatomic,copy) NSString * transitionLayerPlugObjectID; 
@property (readonly) MRContext * context; 
@property (assign,nonatomic) CGPoint contextOffset; 
@property (assign) double masterClock; 
@property (readonly) BOOL isFlipped; 
@property (retain) id<MRLiveSlideshowDelegate> liveSlideshowDelegate; 
@property (retain) id<MRAsynchronousOperationsDelegate> asynchronousOperationsDelegate; 
@property (assign) BOOL screenBurnTest; 
@property (assign) BOOL hideTextWhileEditing; 
@property (readonly) BOOL isCleanedUp; 
@property (readonly) NSObject*<OS_dispatch_queue> renderDispatchQueue; 
@property (setter=suspendAsynchronousOperations:) BOOL asynchronousOperationsAreSuspended;              //@synthesize asynchronousOperationsAreSuspended=_asynchronousOperationsAreSuspended - In the implementation block
@property (assign) BOOL slaveFrameMode; 
@property (assign,nonatomic) double timestampOfLastRenderPass;                                          //@synthesize timestampOfLastRenderPass=_timestampOfLastRenderPass - In the implementation block
@property (assign,nonatomic) BOOL logRenderingTimes;                                                    //@synthesize logRenderingTimes=_logRenderingTimes - In the implementation block
@property (readonly) NSString * renderingLogFilePath;                                                   //@synthesize renderingLogFilePath=_renderingLogFilePath - In the implementation block
@property (nonatomic,retain) MCMontage * montage; 
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) double time; 
@property (assign,nonatomic) double timeQuantum; 
@property (assign,nonatomic) int orientation; 
@property (assign,nonatomic) int mode; 
@property (readonly) BOOL isOffscreen; 
@property (assign,nonatomic) BOOL displaysFPS; 
@property (assign,nonatomic) BOOL displaysPlayingIDs; 
@property (assign,nonatomic) BOOL displaysIsPreloadingImages; 
@property (assign,nonatomic) BOOL displaysTouchVisualFeedback; 
@property (assign,nonatomic) BOOL displaysHitZonesVisualFeedback; 
@property (assign,nonatomic) BOOL isEditing; 
@property (readonly) BOOL isPlaying; 
@property (assign,nonatomic) BOOL pushRendering; 
@property (assign,nonatomic) BOOL requestRenderingOnChanges; 
@property (assign,nonatomic) BOOL allowsThumbnails;                                                     //@synthesize allowsThumbnails=_allowsThumbnails - In the implementation block
@property (assign,nonatomic) unsigned char currentLayoutIndex; 
@property (assign,nonatomic) float volume; 
@property (assign,nonatomic) BOOL ignoresBackgroundAudio;                                               //@synthesize ignoresBackgroundAudio=_ignoresBackgroundAudio - In the implementation block
@property (readonly) NSDictionary * parameters; 
@property (assign) id<MZMediaManagement> assetManagementDelegate;                                       //@synthesize assetManagementDelegate=_assetManagementDelegate - In the implementation block
@property (assign) id<MRFeatureDelegate> featureDelegate;                                               //@synthesize featureDelegate=_featureDelegate - In the implementation block
@property (assign) id<MRRenderingDelegate> renderingDelegate;                                           //@synthesize renderingDelegate=_renderingDelegate - In the implementation block
@property (assign) id<MREditingDelegate> editingDelegate;                                               //@synthesize editingDelegate=_editingDelegate - In the implementation block
@property (assign,nonatomic) BOOL interactivityIsEnabled;                                               //@synthesize interactivityIsEnabled=_interactivityIsEnabled - In the implementation block
@property (nonatomic,retain) MRCameraCaptureSession * cameraCaptureSession;                             //@synthesize cameraCaptureSession=_cameraCaptureSession - In the implementation block
@property (readonly) NSString * currentFocusedSlideAsset; 
@property (assign,nonatomic) double fadeInStartTime;                                                    //@synthesize fadeInStartTime=_fadeInStartTime - In the implementation block
@property (assign,nonatomic) double fadeInDuration;                                                     //@synthesize fadeInDuration=_fadeInDuration - In the implementation block
@property (assign,nonatomic) double fadeOutStartTime;                                                   //@synthesize fadeOutStartTime=_fadeOutStartTime - In the implementation block
@property (assign,nonatomic) double fadeOutDuration;                                                    //@synthesize fadeOutDuration=_fadeOutDuration - In the implementation block
@property (assign,nonatomic) double interactiveTransitionTrackingBoxRadius;                             //@synthesize interactiveTransitionTrackingBoxRadius=_interactiveTransitionTrackingBoxRadius - In the implementation block
@property (assign,nonatomic) double interactiveTransitionProgressThreshold;                             //@synthesize interactiveTransitionProgressThreshold=_interactiveTransitionProgressThreshold - In the implementation block
@property (assign,nonatomic) double interactiveTransitionVelocityThreshold;                             //@synthesize interactiveTransitionVelocityThreshold=_interactiveTransitionVelocityThreshold - In the implementation block
+(double)textScaleForResolution:(CGSize)arg1 ;
+(void)enableDiskImageCache;
+(BOOL)isDiskImageCacheEnabled;
-(void)touchesCancelled:(id)arg1 ;
-(void)setDisplaysPlayingIDs:(BOOL)arg1 ;
-(BOOL)canGoToMoreSlides:(BOOL)arg1 ;
-(void)addNavigatorToBackHistory:(id)arg1 ;
-(void)setIsEditing:(BOOL)arg1 ;
-(void)_createSlideFocusLayer;
-(id)slideInfosForCurrentElements;
-(void)jumpToNextMarker;
-(void)_r_syncIsPlayingToOuter;
-(void)_displayIsPreloadingImages;
-(void)_r_renderWithPassParameters:(id)arg1 ;
-(void)_r_stopRenderTimer;
-(double)slideshowTransitionCancel:(id)arg1 ;
-(double)currentSlideshowTime;
-(void)_displayTouchVisualFeedback;
-(double)slideZoomCancel:(id)arg1 ;
-(void)setDisplaysTouchVisualFeedback:(BOOL)arg1 ;
-(BOOL)interactivityIsEnabled;
-(NSString *)currentFocusedSlideAsset;
-(double)focusedTransitionCancel:(id)arg1 ;
-(BOOL)displaysTouchVisualFeedback;
-(id)_layerForPlugObjectID:(id)arg1 ;
-(void)_adaptToPressureLevel:(int)arg1 ;
-(double)exitSlideFocusMode;
-(void)_cleanupGestureRecognizers;
-(void)_dimLayersExceptForPathTo:(id)arg1 ;
-(double)slideshowTransitionStart:(id)arg1 ;
-(double)defaultPauseResumeOnTap:(BOOL)arg1 ;
-(id)_computeMatrixChainForLayer:(id)arg1 ;
-(void)warmupVideo:(BOOL)arg1 ;
-(double)exitSlideZoomMode:(BOOL)arg1 ;
-(void)swapMontage:(id)arg1 ;
-(void)_r_setTime:(double)arg1 isResyncing:(BOOL)arg2 ;
-(void)stall;
-(double)enterSlideZoomMode;
-(void)_displayPlayingIDs;
-(void)addIDToDisplay:(id)arg1 :(id)arg2 ;
-(double)focusedTransitionEnd:(id)arg1 ;
-(void)pauseWhenStill;
-(BOOL)slideshowIsPlaying;
-(void)resumeSlideshow;
-(void)setAllowsThumbnails:(BOOL)arg1 ;
-(BOOL)prerenderWithPassParameters:(id)arg1 ;
-(id<MRRenderingDelegate>)renderingDelegate;
-(void)_startDisplayLinkOnRunloop;
-(double)focusedTransitionUpdate:(id)arg1 ;
-(void)removeAudioObject:(id)arg1 ;
-(void)imagePreloadingBegan;
-(void)setDisplaysFPS:(BOOL)arg1 ;
-(void)_r_doSnapshot;
-(void)endTextEditing:(BOOL)arg1 ;
-(void)setTimeQuantum:(double)arg1 ;
-(BOOL)isOffscreen;
-(double)slideshowTransitionUpdate:(id)arg1 ;
-(void)imagePreloadingEnded;
-(unsigned char)currentLayoutIndex;
-(BOOL)_doActions;
-(double)slideZoomUpdate:(id)arg1 ;
-(BOOL)_r_prerenderWithPassParameters:(id)arg1 ;
-(void)setScreenBurnTest:(BOOL)arg1 ;
-(void)endMorphing;
-(void)_r_resume;
-(void)doAction:(id)arg1 ;
-(void)disableFadeInAndOut;
-(NSObject*<OS_dispatch_queue>)renderDispatchQueue;
-(double)slideZoomStart:(id)arg1 ;
-(double)slideshowTransitionEnd:(id)arg1 ;
-(id)chooseTransitionIDForRandomTransitionPresetID:(id)arg1 ;
-(void)requestRendering:(BOOL)arg1 ;
-(void)setEAGLContext:(id)arg1 ;
-(void)_r_render;
-(id)actionByEvaluatingConditionalAction:(id)arg1 withStates:(id)arg2 ;
-(void)setMasterStartTime:(double)arg1 andDuration:(double)arg2 mode:(int)arg3 ;
-(double)timeQuantum;
-(void)willGoToPreviousOrNextFocusedSlide:(BOOL)arg1 withAction:(id)arg2 animate:(BOOL)arg3 ;
-(void)didGoToPreviousOrNextFocusedSlide:(BOOL)arg1 withAction:(id)arg2 ;
-(double)enterSlideFocusModeWithState:(id)arg1 animate:(BOOL)arg2 ;
-(id)layerHitAtPoint:(CGPoint)arg1 onlyIfHitElement:(BOOL)arg2 localPoint:(CGPoint*)arg3 ;
-(id)defaultActionsWithHitLayer:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)_findAndHandleBestRecognizerInRecognizers:(id)arg1 ;
-(BOOL)requestRenderingOnChanges;
-(void)setCurrentLayoutIndex:(unsigned char)arg1 ;
-(void)moveNavigatorFromBackToForthHistory:(id)arg1 ;
-(void)removeNavigatorFromForthHistory:(id)arg1 ;
-(void)moveNavigatorFromForthToBackHistory:(id)arg1 ;
-(void)addAudioObject:(id)arg1 ;
-(double)_doAction:(id)arg1 ;
-(double)animateCurrentFocuserToSlideFocusModeWithDuration:(double)arg1 ;
-(BOOL)beginTextEditingOfElement:(id)arg1 inLayer:(id)arg2 callDelegate:(BOOL)arg3 ;
-(void)_startMonitoringThermalPressureLevelChanges;
-(void)_stopMonitoringThermalPressureLevelChanges;
-(void)_r_updateTimeWithDisplayLinkTimestamp:(double)arg1 ;
-(void)_playbackIsOverWithTime:(double)arg1 sendNotification:(BOOL)arg2 ;
-(void)_r_renderForScreenBurnTestAtTime:(double)arg1 ;
-(void)effect:(id)arg1 requestedNumberOfSlides:(unsigned long long)arg2 firstSlideIndexStillNeeded:(unsigned long long)arg3 ;
-(void)_r_beginMorphingToAspectRatio:(double)arg1 andOrientation:(int)arg2 withDuration:(double)arg3 ;
-(double)fadeOutStartTime;
-(void)gotoState:(id)arg1 ;
-(MCMontage *)montage;
-(void)setFadeOutStartTime:(double)arg1 ;
-(void)setSlideFocusModeBackgroundColor:(CGColorRef)arg1 ;
-(void)pauseSlideshow;
-(void)goForth;
-(double)slideZoomEnd:(id)arg1 ;
-(long long)_maxLinesForCurrentEditingTextElement;
-(CGSize)_maxSizeForCurrentEditingTextElement;
-(BOOL)getVerticesCoordinatesForCurrentlyEditedTextElement:(CGPoint*)arg1 ;
-(BOOL)ignoresBackgroundAudio;
-(BOOL)asynchronousOperationsAreSuspended;
-(void)suspendAsynchronousOperations:(BOOL)arg1 ;
-(BOOL)hideTextWhileEditing;
-(void)setInteractivityIsEnabled:(BOOL)arg1 ;
-(void)setRenderingDelegate:(id<MRRenderingDelegate>)arg1 ;
-(void)setTransitionLayerPlugObjectID:(NSString *)arg1 ;
-(void)setFeatureDelegate:(id<MRFeatureDelegate>)arg1 ;
-(void)setLiveSlideshowDelegate:(id<MRLiveSlideshowDelegate>)arg1 ;
-(void)setAsynchronousOperationsDelegate:(id<MRAsynchronousOperationsDelegate>)arg1 ;
-(void)setRequestRenderingOnChanges:(BOOL)arg1 ;
-(id)currentStateForMontageSwap;
-(void)beginMorphingToAspectRatio:(double)arg1 andOrientation:(int)arg2 withDuration:(double)arg3 ;
-(void)applyStateForMontageSwap:(id)arg1 ;
-(CGImageRef)currentFrameAsCGImage;
-(BOOL)requestRenderingWithin:(double)arg1 ;
-(BOOL)beginTextEditingOfElement:(id)arg1 inPlug:(id)arg2 callDelegate:(BOOL)arg3 ;
-(void)gotoNextFocusedSlide:(BOOL)arg1 ;
-(void)gotoNextInterestingTime:(BOOL)arg1 ;
-(void)gotoPreviousFocusedSlide:(BOOL)arg1 ;
-(void)gotoPreviousInterestingTime:(BOOL)arg1 ;
-(void)setSlideshowTime:(double)arg1 ;
-(id<MRFeatureDelegate>)featureDelegate;
-(void)touchesEnded:(id)arg1 ;
-(void)touchesBegan:(id)arg1 ;
-(void)_r_pause;
-(void)_r_renderRotation;
-(void)_displayFPS:(double)arg1 actuallyDisplay:(BOOL)arg2 ;
-(void)touchesMoved:(id)arg1 ;
-(double)_unalteredTime;
-(void)resetFadeInAndOut;
-(void)_r_endMorphing;
-(double)focusedTransitionStart:(id)arg1 ;
-(void)nearingEndForSerializer:(id)arg1 ;
-(void)_renderThreadMain;
-(void)_r_syncTimeToOuter;
-(void)processAudioObjects;
-(void)_r_snapshotForRotation;
-(void)sendMCAction:(id)arg1 fromSender:(id)arg2 ;
-(BOOL)displaysFPS;
-(void)_displayHitZonesVisualFeedback;
-(void)_renderOnDisplayLink:(id)arg1 ;
-(NSString *)transitionLayerPlugObjectID;
-(void)_r_startRenderTimer;
-(void)_undimAllLayersInLayer:(id)arg1 ;
-(void)_updateSelectionLayer;
-(void)jumpToPreviousMarker;
-(MRCameraCaptureSession *)cameraCaptureSession;
-(CGImageRef)snapshotAsCGImageForTime:(double)arg1 andSize:(CGSize)arg2 ;
-(void)transitionToPreviousPlugInContainerOfPlug:(id)arg1 ;
-(BOOL)canGoForth;
-(void)setSlaveFrameMode:(BOOL)arg1 ;
-(void)setTemporarySize:(CGSize)arg1 ;
-(void)setFreezeSizeOfImageRequests:(BOOL)arg1 ;
-(void)setHideTextWhileEditing:(BOOL)arg1 ;
-(NSString *)renderingLogFilePath;
-(void)setContextOffset:(CGPoint)arg1 ;
-(void)deselectAllLayers;
-(void)setFadeInStartTime:(double)arg1 ;
-(BOOL)isCleanedUp;
-(BOOL)displaysIsPreloadingImages;
-(id<MRLiveSlideshowDelegate>)liveSlideshowDelegate;
-(void)setPushRendering:(BOOL)arg1 ;
-(void)sendMCAction:(id)arg1 fromSender:(id)arg2 toTarget:(id)arg3 ;
-(id)layerAtPath:(id)arg1 fromLayer:(id)arg2 ;
-(void)setCameraCaptureSession:(MRCameraCaptureSession *)arg1 ;
-(id)currentlyShowingAssetPaths;
-(void)removeNavigatorFromBackHistory:(id)arg1 ;
-(void)setTimestampOfLastRenderPass:(double)arg1 ;
-(id)slideInfoForCurrentElement:(id)arg1 ;
-(void)_doLayerTrackingAtLocation:(CGPoint)arg1 ;
-(double)fadeInStartTime;
-(BOOL)displaysPlayingIDs;
-(void)dimLayersExceptForPathTo:(id)arg1 ;
-(void)setIgnoresBackgroundAudio:(BOOL)arg1 ;
-(id)snapshotOfStates:(id)arg1 atSize:(CGSize)arg2 ;
-(void)undimAllLayers;
-(void)setDisplaysIsPreloadingImages:(BOOL)arg1 ;
-(void)dumpActiveHierarchy;
-(double)timestampOfLastRenderPass;
-(BOOL)displaysHitZonesVisualFeedback;
-(id)selectedLayers;
-(void)updateTimeWithDisplayLinkTimestamp:(double)arg1 ;
-(void)setUsesExternalDisplayLink:(BOOL)arg1 ;
-(void)setMasterStartTime:(double)arg1 andDuration:(double)arg2 loop:(BOOL)arg3 ;
-(CGPoint)_fixPointForUnprojectionForOrientation:(CGPoint)arg1 ;
-(BOOL)allowsThumbnails;
-(CGPoint)contextOffset;
-(void)warmupAudio:(BOOL)arg1 ;
-(BOOL)screenBurnTest;
-(void)selectLayer:(id)arg1 ;
-(void)stepForward;
-(void)deselectLayer:(id)arg1 ;
-(BOOL)pushRendering;
-(void)stepBackward;
-(void)addNavigatorToForthHistory:(id)arg1 ;
-(void)transitionToNextPlugInContainerOfPlug:(id)arg1 ;
-(CGPoint)_fixProjectedPointForOrientation:(CGPoint)arg1 ;
-(void)setUseCGLFlushDrawableWorkaround:(BOOL)arg1 ;
-(id<MRAsynchronousOperationsDelegate>)asynchronousOperationsDelegate;
-(id)plugForCurrentSublayerInNavigatorForPlug:(id)arg1 ;
-(void)setDisplaysHitZonesVisualFeedback:(BOOL)arg1 ;
-(BOOL)slaveFrameMode;
-(id)init;
-(CGSize)size;
-(void)dealloc;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(id)currentState;
-(void)setSize:(CGSize)arg1 ;
-(MRContext *)context;
-(BOOL)isEditing;
-(NSDictionary *)parameters;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setEditingDelegate:(id<MREditingDelegate>)arg1 ;
-(void)resume;
-(BOOL)isPlaying;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<MREditingDelegate>)editingDelegate;
-(BOOL)canGoBack;
-(void)goBack;
-(void)cleanup;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(void)pause;
-(double)time;
-(void)setTime:(double)arg1 ;
-(void)sendNotification:(id)arg1 ;
-(double)masterClock;
-(void)setMasterClock:(double)arg1 ;
-(void)setMontage:(MCMontage *)arg1 ;
-(id)initWithParameters:(id)arg1 ;
-(void)render;
-(void)freeze;
-(void)setInteractiveTransitionTrackingBoxRadius:(double)arg1 ;
-(void)setInteractiveTransitionProgressThreshold:(double)arg1 ;
-(void)setInteractiveTransitionVelocityThreshold:(double)arg1 ;
-(double)_time;
-(double)interactiveTransitionTrackingBoxRadius;
-(double)interactiveTransitionProgressThreshold;
-(double)interactiveTransitionVelocityThreshold;
-(BOOL)logRenderingTimes;
-(void)setLogRenderingTimes:(BOOL)arg1 ;
-(id<MZMediaManagement>)assetManagementDelegate;
-(void)setAssetManagementDelegate:(id<MZMediaManagement>)arg1 ;
-(BOOL)isFlipped;
-(void)unfreeze;
@end

