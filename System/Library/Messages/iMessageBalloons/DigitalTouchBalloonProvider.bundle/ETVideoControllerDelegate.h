/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/DigitalTouchBalloonProvider.bundle/DigitalTouchBalloonProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ETVideoControllerDelegate <NSObject>
@required
-(void)videoControllerDidStartPreview:(id)arg1;
-(void)videoControllerDidStopPreview:(id)arg1;
-(void)videoControllerDidStartRecording:(id)arg1;
-(void)videoControllerWillCancelRecording:(id)arg1;
-(void)videoControllerDidInterruptPreview:(id)arg1 withInterruptionReason:(long long)arg2;
-(void)videoControllerDidEndRecording:(id)arg1 mediaURL:(id)arg2 withError:(id)arg3;
-(void)videoControllerWillBeginPhotoCapture:(id)arg1;
-(void)videoControllerDidEndPhotoCapture:(id)arg1 photoImage:(id)arg2;

@end

