/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class AVPlayerController, AVPlayerControllerTimeResolver, AVPlayerViewController, NSArray, NSDictionary;

@interface AVPlaybackControlsViewController : UIViewController {

	AVPlayerController* _playerController;
	AVPlayerControllerTimeResolver* _intervalTimeResolver;
	AVPlayerControllerTimeResolver* _resolutionTimeResolver;
	id _AVSystemControllerCurrentRouteHasVolumeControlDidChangeObserver;
	BOOL _showsDoneButton;
	BOOL _playing;
	BOOL _scrubberEnabled;
	BOOL _scanBackwardButtonEnabled;
	BOOL _playPauseButtonEnabled;
	BOOL _scanForwardButtonEnabled;
	BOOL _showsStreamingControls;
	BOOL _skipBackwardThirtySecondsButtonEnabled;
	BOOL _gotoEndOfSeekableRangesButtonEnabled;
	BOOL _showsScaleButton;
	BOOL _showsLoadingIndicator;
	BOOL _showsMediaSelectionButton;
	BOOL _showsExitFullScreenButton;
	BOOL _showsPictureInPictureButton;
	BOOL _pictureInPictureButtonEnabled;
	BOOL _showsVolumeSlider;
	AVPlayerViewController* _playerViewController;
	double _scrubberWidth;
	NSArray* _scrubberLoadedTimeRanges;
	long long _scaleButtonType;
	NSDictionary* _metadata;

}

@property (nonatomic,retain) AVPlayerController * playerController; 
@property (assign,nonatomic,__weak) AVPlayerViewController * playerViewController;                                                     //@synthesize playerViewController=_playerViewController - In the implementation block
@property (nonatomic,readonly) double scrubberWidth;                                                                                   //@synthesize scrubberWidth=_scrubberWidth - In the implementation block
@property (assign,nonatomic) BOOL showsDoneButton;                                                                                     //@synthesize showsDoneButton=_showsDoneButton - In the implementation block
@property (assign,getter=isPlaying,nonatomic) BOOL playing;                                                                            //@synthesize playing=_playing - In the implementation block
@property (assign,getter=isScrubberEnabled,nonatomic) BOOL scrubberEnabled;                                                            //@synthesize scrubberEnabled=_scrubberEnabled - In the implementation block
@property (nonatomic,retain) NSArray * scrubberLoadedTimeRanges;                                                                       //@synthesize scrubberLoadedTimeRanges=_scrubberLoadedTimeRanges - In the implementation block
@property (assign,getter=isScanBackwardButtonEnabled,nonatomic) BOOL scanBackwardButtonEnabled;                                        //@synthesize scanBackwardButtonEnabled=_scanBackwardButtonEnabled - In the implementation block
@property (assign,getter=isPlayPauseButtonEnabled,nonatomic) BOOL playPauseButtonEnabled;                                              //@synthesize playPauseButtonEnabled=_playPauseButtonEnabled - In the implementation block
@property (assign,getter=isScanForwardButtonEnabled,nonatomic) BOOL scanForwardButtonEnabled;                                          //@synthesize scanForwardButtonEnabled=_scanForwardButtonEnabled - In the implementation block
@property (assign,nonatomic) BOOL showsStreamingControls;                                                                              //@synthesize showsStreamingControls=_showsStreamingControls - In the implementation block
@property (assign,getter=isSkipBackwardThirtySecondsButtonEnabled,nonatomic) BOOL skipBackwardThirtySecondsButtonEnabled;              //@synthesize skipBackwardThirtySecondsButtonEnabled=_skipBackwardThirtySecondsButtonEnabled - In the implementation block
@property (assign,getter=isGotoEndOfSeekableRangesButtonEnabled,nonatomic) BOOL gotoEndOfSeekableRangesButtonEnabled;                  //@synthesize gotoEndOfSeekableRangesButtonEnabled=_gotoEndOfSeekableRangesButtonEnabled - In the implementation block
@property (assign,nonatomic) BOOL showsScaleButton;                                                                                    //@synthesize showsScaleButton=_showsScaleButton - In the implementation block
@property (assign,nonatomic) long long scaleButtonType;                                                                                //@synthesize scaleButtonType=_scaleButtonType - In the implementation block
@property (assign,nonatomic) BOOL showsLoadingIndicator;                                                                               //@synthesize showsLoadingIndicator=_showsLoadingIndicator - In the implementation block
@property (assign,nonatomic) BOOL showsMediaSelectionButton;                                                                           //@synthesize showsMediaSelectionButton=_showsMediaSelectionButton - In the implementation block
@property (assign,nonatomic) BOOL showsExitFullScreenButton;                                                                           //@synthesize showsExitFullScreenButton=_showsExitFullScreenButton - In the implementation block
@property (assign,nonatomic) BOOL showsPictureInPictureButton;                                                                         //@synthesize showsPictureInPictureButton=_showsPictureInPictureButton - In the implementation block
@property (assign,getter=isPictureInPictureButtonEnabled,nonatomic) BOOL pictureInPictureButtonEnabled;                                //@synthesize pictureInPictureButtonEnabled=_pictureInPictureButtonEnabled - In the implementation block
@property (assign,nonatomic) BOOL showsVolumeSlider;                                                                                   //@synthesize showsVolumeSlider=_showsVolumeSlider - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                                                                                  //@synthesize metadata=_metadata - In the implementation block
-(void)togglePlayback:(id)arg1 ;
-(void)skipBackwardThirtySeconds:(id)arg1 ;
-(void)gotoEndOfSeekableRanges:(id)arg1 ;
-(void)beginScanningForward:(id)arg1 ;
-(void)endScanningForward:(id)arg1 ;
-(void)beginScanningBackward:(id)arg1 ;
-(void)endScanningBackward:(id)arg1 ;
-(void)seekChapterBackward:(id)arg1 ;
-(void)seekChapterForward:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(BOOL)isPlaying;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(void)setShowsVolumeSlider:(BOOL)arg1 ;
-(BOOL)showsVolumeSlider;
-(void)setShowsExitFullScreenButton:(BOOL)arg1 ;
-(double)scrubberWidth;
-(BOOL)showsDoneButton;
-(void)setShowsDoneButton:(BOOL)arg1 ;
-(void)setShowsScaleButton:(BOOL)arg1 ;
-(void)setShowsPictureInPictureButton:(BOOL)arg1 ;
-(void)setShowsLoadingIndicator:(BOOL)arg1 ;
-(void)setScaleButtonType:(long long)arg1 ;
-(void)setPictureInPictureButtonEnabled:(BOOL)arg1 ;
-(void)scaleButtonTapped:(id)arg1 ;
-(void)mediaSelectionButtonTapped:(id)arg1 ;
-(void)fullScreenButtonTapped:(id)arg1 ;
-(void)pictureInPictureButtonTapped:(id)arg1 ;
-(BOOL)showsExitFullScreenButton;
-(BOOL)isScrubberEnabled;
-(void)setScrubberEnabled:(BOOL)arg1 ;
-(NSArray *)scrubberLoadedTimeRanges;
-(void)setScrubberLoadedTimeRanges:(NSArray *)arg1 ;
-(BOOL)isPlayPauseButtonEnabled;
-(void)setPlayPauseButtonEnabled:(BOOL)arg1 ;
-(BOOL)showsStreamingControls;
-(void)setShowsStreamingControls:(BOOL)arg1 ;
-(BOOL)showsLoadingIndicator;
-(BOOL)showsMediaSelectionButton;
-(void)setShowsMediaSelectionButton:(BOOL)arg1 ;
-(BOOL)showsPictureInPictureButton;
-(BOOL)isPictureInPictureButtonEnabled;
-(void)updateElapsedTimeLabel:(id)arg1 ;
-(void)updateScrubberMinimumValue:(float)arg1 ;
-(void)updateScrubberValue:(float)arg1 ;
-(void)updateScrubberMaximumValue:(float)arg1 ;
-(void)updateRemainingTimeLabel:(id)arg1 ;
-(void)addControlForUserInteractionObservation:(id)arg1 ;
-(void)scrubberValueChanged:(id)arg1 ;
-(void)removeControlForUserInteractionObservation:(id)arg1 ;
-(void)_updatePlaybackProgress;
-(BOOL)isScanBackwardButtonEnabled;
-(void)setScanBackwardButtonEnabled:(BOOL)arg1 ;
-(BOOL)isScanForwardButtonEnabled;
-(void)setScanForwardButtonEnabled:(BOOL)arg1 ;
-(BOOL)isSkipBackwardThirtySecondsButtonEnabled;
-(void)setSkipBackwardThirtySecondsButtonEnabled:(BOOL)arg1 ;
-(BOOL)isGotoEndOfSeekableRangesButtonEnabled;
-(void)setGotoEndOfSeekableRangesButtonEnabled:(BOOL)arg1 ;
-(BOOL)showsScaleButton;
-(long long)scaleButtonType;
-(void)_updateVolumeSliderVisibility;
-(void)_userInteractionObservationControlTouchDown:(id)arg1 ;
-(void)_userInteractionObservationControlTouchUp:(id)arg1 ;
-(void)updatePlaybackProgress:(float)arg1 ;
-(void)updateVolumeSliderValue:(float)arg1 ;
-(void)volumeSliderValueChanged:(id)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(AVPlayerViewController *)playerViewController;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(void)setPlayerViewController:(AVPlayerViewController *)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
@end

