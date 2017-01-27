/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVPlayerViewControllerDelegate <NSObject>
@optional
-(void)playerViewControllerWillStartPictureInPicture:(id)arg1;
-(void)playerViewControllerDidStartPictureInPicture:(id)arg1;
-(void)playerViewController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
-(void)playerViewControllerWillStopPictureInPicture:(id)arg1;
-(void)playerViewControllerDidStopPictureInPicture:(id)arg1;
-(BOOL)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(id)arg1;
-(void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(/*^block*/id)arg2;

@end

