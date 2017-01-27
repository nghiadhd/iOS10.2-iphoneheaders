/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MCDNowPlayingViewControllerDelegate <NSObject>
@optional
-(BOOL)nowPlayingViewControllerIsFuseSubscriber:(id)arg1;
-(BOOL)nowPlayingViewController:(id)arg1 shouldDisplayButton:(long long)arg2 withImage:(out id*)arg3 existingIdentifier:(id)arg4 tinted:(out BOOL*)arg5;
-(BOOL)nowPlayingViewController:(id)arg1 buttonShouldBeActive:(long long)arg2;
-(BOOL)nowPlayingViewController:(id)arg1 shouldEnableButton:(long long)arg2;
-(void)nowPlayingViewController:(id)arg1 didSendAction:(long long)arg2 state:(long long)arg3;
-(BOOL)nowPlayingViewControllerCanShuffle:(id)arg1;
-(BOOL)nowPlayingViewControllerCanRepeat:(id)arg1;
-(BOOL)nowPlayingViewControllerCanShowMore:(id)arg1;
-(BOOL)nowPlayingViewControllerCanShowAddToLibrary:(id)arg1;
-(void)nowPlayingViewControllerToggleShuffle:(id)arg1;
-(void)nowPlayingViewControllerToggleRepeat:(id)arg1;
-(void)nowPlayingViewControllerMore:(id)arg1;
-(void)nowPlayingViewControllerAddToLibrary:(id)arg1;

@end

