/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/ADPlayerDelegate.h>
#import <libobjc.A.dylib/ADTVMediaControlsViewControllerDelegate.h>

@class ADInterstitialAd, ADAdImpressionPublicAttributes, UIImage, ADPlayer, ADTVPrerollVideoView, ADTVMediaControlsViewController, NSString;

@interface ADTVInterstitialMediaViewController : UIViewController <ADPlayerDelegate, ADTVMediaControlsViewControllerDelegate> {

	ADInterstitialAd* _interstitialAd;
	BOOL _videoCanPlay;
	ADAdImpressionPublicAttributes* _impressionAttributes;
	UIImage* _backgroundImage;
	ADPlayer* _videoPlayer;
	ADTVPrerollVideoView* _videoView;
	ADTVMediaControlsViewController* _mediaControlsViewController;
	/*^block*/id _loadCompletion;

}

@property (nonatomic,retain) ADAdImpressionPublicAttributes * impressionAttributes;                      //@synthesize impressionAttributes=_impressionAttributes - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;                                                  //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) ADPlayer * videoPlayer;                                                     //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,retain) ADTVPrerollVideoView * videoView;                                           //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,retain) ADTVMediaControlsViewController * mediaControlsViewController;              //@synthesize mediaControlsViewController=_mediaControlsViewController - In the implementation block
@property (assign,nonatomic) BOOL videoCanPlay;                                                          //@synthesize videoCanPlay=_videoCanPlay - In the implementation block
@property (nonatomic,copy) id loadCompletion;                                                            //@synthesize loadCompletion=_loadCompletion - In the implementation block
@property (nonatomic,__weak,readonly) ADInterstitialAd * interstitialAd; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(ADTVPrerollVideoView *)videoView;
-(void)setVideoView:(ADTVPrerollVideoView *)arg1 ;
-(ADPlayer *)videoPlayer;
-(void)setVideoPlayer:(ADPlayer *)arg1 ;
-(void)adtvMediaControlsSkipButtonWasPressed:(id)arg1 ;
-(void)adtvMediaControlsActionButtonWasPressed:(id)arg1 ;
-(void)adtvMediaControlsPrivacyButtonWasPressed:(id)arg1 ;
-(ADInterstitialAd *)interstitialAd;
-(void)adPlayerDidTimeout:(id)arg1 ;
-(void)adPlayerFailedToLoadAsset:(id)arg1 ;
-(void)adPlayerFailedToPlayWithUnknownError:(id)arg1 ;
-(void)adPlayer:(id)arg1 readyForPlaybackWithAVPlayer:(id)arg2 impressionProperties:(id)arg3 ;
-(void)adPlayer:(id)arg1 elapsedTime:(double)arg2 totalTime:(double)arg3 ;
-(void)adPlayerDidFinishPlayback:(id)arg1 ;
-(id)viewControllerForActionFromAdPlayer:(id)arg1 ;
-(void)adPlayer:(id)arg1 didChangePlaybackState:(unsigned long long)arg2 ;
-(void)setImpressionAttributes:(ADAdImpressionPublicAttributes *)arg1 ;
-(ADAdImpressionPublicAttributes *)impressionAttributes;
-(void)setMediaControlsViewController:(ADTVMediaControlsViewController *)arg1 ;
-(ADTVMediaControlsViewController *)mediaControlsViewController;
-(void)playVideo;
-(void)setLoadCompletion:(id)arg1 ;
-(void)_loadBackgroundImageFromString:(id)arg1 ;
-(void)setVideoCanPlay:(BOOL)arg1 ;
-(void)_updateLoadStatus:(id)arg1 ;
-(id)loadCompletion;
-(BOOL)videoCanPlay;
-(id)initForInterstitialAd:(id)arg1 withImpressionPublicAttributes:(id)arg2 ;
-(void)loadContentsWithCompletionHandler:(/*^block*/id)arg1 ;
@end

