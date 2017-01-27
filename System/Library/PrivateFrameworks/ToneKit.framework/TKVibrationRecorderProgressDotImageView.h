/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ToneKit/ToneKit-Structs.h>
#import <UIKit/UIImageView.h>

@interface TKVibrationRecorderProgressDotImageView : UIImageView {

	double _timeInterval;
	double _duration;
	double _previousPauseTimeInterval;
	double _previousPauseDuration;
	double _accessibilityFrameAdditionalHeight;

}

@property (assign,nonatomic) double timeInterval;                                    //@synthesize timeInterval=_timeInterval - In the implementation block
@property (assign,nonatomic) double duration;                                        //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double previousPauseTimeInterval;                       //@synthesize previousPauseTimeInterval=_previousPauseTimeInterval - In the implementation block
@property (assign,nonatomic) double previousPauseDuration;                           //@synthesize previousPauseDuration=_previousPauseDuration - In the implementation block
@property (assign,nonatomic) double accessibilityFrameAdditionalHeight;              //@synthesize accessibilityFrameAdditionalHeight=_accessibilityFrameAdditionalHeight - In the implementation block
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)timeInterval;
-(void)setTimeInterval:(double)arg1 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)setPreviousPauseTimeInterval:(double)arg1 ;
-(void)setPreviousPauseDuration:(double)arg1 ;
-(void)setAccessibilityFrameAdditionalHeight:(double)arg1 ;
-(double)previousPauseTimeInterval;
-(double)previousPauseDuration;
-(double)accessibilityFrameAdditionalHeight;
@end

