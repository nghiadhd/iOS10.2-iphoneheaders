/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMRampToVideoZoomFactorCommand : CAMCaptureCommand {

	float __rate;
	double __videoZoomFactor;
	double __duration;

}

@property (nonatomic,readonly) double _videoZoomFactor;              //@synthesize _videoZoomFactor=__videoZoomFactor - In the implementation block
@property (nonatomic,readonly) float _rate;                          //@synthesize _rate=__rate - In the implementation block
@property (nonatomic,readonly) double _duration;                     //@synthesize _duration=__duration - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)_duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)_videoZoomFactor;
-(float)_rate;
-(id)initWithVideoZoomFactor:(double)arg1 rate:(float)arg2 ;
-(id)initWithVideoZoomFactor:(double)arg1 duration:(double)arg2 ;
-(void)executeWithContext:(id)arg1 ;
@end

