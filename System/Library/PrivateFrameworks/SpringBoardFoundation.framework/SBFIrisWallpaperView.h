/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFStaticWallpaperView.h>
#import <libobjc.A.dylib/ISPlayerViewDelegatePrivate.h>
#import <libobjc.A.dylib/SBFIrisWallpaperView.h>

@protocol SBFIrisWallpaperView <NSObject>
@property (assign,nonatomic,__weak) id<SBFIrisWallpaperViewDelegate> irisDelegate; 
@property (nonatomic,readonly) long long irisPlaybackState; 
@property (nonatomic,readonly) BOOL isIrisInteracting; 
@required
-(id<SBFIrisWallpaperViewDelegate>)irisDelegate;
-(id)irisGestureRecognizer;
-(void)setIrisDelegate:(id)arg1;
-(long long)irisPlaybackState;
-(BOOL)isIrisInteracting;

@end


@protocol SBFIrisWallpaperViewDelegate;
@class UIImageView, NSURL, ISAVPlayer, ISPlayerView, UIGestureRecognizer, NSString;

@interface SBFIrisWallpaperView : SBFStaticWallpaperView <ISPlayerViewDelegatePrivate, SBFIrisWallpaperView> {

	id<SBFIrisWallpaperViewDelegate> _irisDelegate;
	long long _currentMode;
	UIImageView* _imageView;
	NSURL* _videoFileURL;
	double _stillTimeInVideo;
	BOOL _useRewindPlaybackStyle;
	ISAVPlayer* _prewiredAVPlayer;
	CGSize _prewiredSize;
	ISPlayerView* _playerView;
	long long _playerState;
	long long _playbackState;
	BOOL _isInteracting;
	UIGestureRecognizer* _playerGestureRecognizer;

}

@property (nonatomic,copy,readonly) NSURL * videoFileURL; 
@property (nonatomic,readonly) double stillTimeInVideo; 
@property (nonatomic,readonly) long long currentIrisMode;                                       //@synthesize currentMode=_currentMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBFIrisWallpaperViewDelegate> irisDelegate;              //@synthesize irisDelegate=_irisDelegate - In the implementation block
@property (nonatomic,readonly) long long irisPlaybackState; 
@property (nonatomic,readonly) BOOL isIrisInteracting; 
+(void)initialize;
-(void)dealloc;
-(double)stillTimeInVideo;
-(BOOL)_setupContentViewForMode:(long long)arg1 ;
-(void)_populateContentView;
-(id<SBFIrisWallpaperViewDelegate>)irisDelegate;
-(void)_setPlayerGestureRecognizer:(id)arg1 ;
-(void)_resetPrewiredAVPlayer;
-(void)playerViewPlaybackStateDidChange:(id)arg1 ;
-(void)playerViewIsInteractingDidChange:(id)arg1 ;
-(id)videoPlayerForPlayerView:(id)arg1 ;
-(void)playerViewGestureRecognizerDidChange:(id)arg1 ;
-(id)irisGestureRecognizer;
-(void)setIrisDelegate:(id<SBFIrisWallpaperViewDelegate>)arg1 ;
-(long long)irisPlaybackState;
-(BOOL)isIrisInteracting;
-(id)initWithFrame:(CGRect)arg1 wallpaperImage:(id)arg2 variant:(long long)arg3 ;
-(void)switchToIrisMode:(long long)arg1 ;
-(void)_setupContentView;
-(long long)currentIrisMode;
-(id)initWithFrame:(CGRect)arg1 wallpaperImage:(id)arg2 cacheGroup:(id)arg3 wallpaperVideoURL:(id)arg4 stillTimeInVideo:(double)arg5 staticImageOptions:(unsigned long long)arg6 variant:(long long)arg7 prewireMemory:(BOOL)arg8 useRewindPlaybackStyle:(BOOL)arg9 ;
-(NSURL *)videoFileURL;
-(long long)wallpaperType;
-(void)_setImage:(id)arg1 ;
@end

