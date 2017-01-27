/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKFullScreenBalloonViewControllerDelegate <NSObject>
@optional
-(void)fullScreenBalloonViewController:(id)arg1 willAppearAnimated:(BOOL)arg2;
-(void)fullScreenBalloonViewController:(id)arg1 willDisappearWithSendAnimation:(BOOL)arg2;
-(void)fullScreenBalloonViewControllerDidDisappear:(id)arg1;
-(void)fullScreenBalloonViewController:(id)arg1 didAppearAnimated:(BOOL)arg2;
-(void)fullScreenBalloonViewControllerHandleDismissTap:(id)arg1;
-(void)fullScreenBalloonViewController:(id)arg1 verticallyScrollTranscriptByAmount:(double)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)fullScreenBalloonViewController:(id)arg1 stickerPackTappedWithAdamID:(id)arg2;
-(void)fullScreenBalloonViewController:(id)arg1 deleteStickerWithTransferGUID:(id)arg2;

@required
-(CGRect*)fullScreenBalloonViewController:(id)arg1 balloonFrameForChatItem:(id)arg2;
-(void)fullScreenBalloonViewController:(id)arg1 sendMessageAcknowledgment:(long long)arg2 forChatItem:(id)arg3;

@end

