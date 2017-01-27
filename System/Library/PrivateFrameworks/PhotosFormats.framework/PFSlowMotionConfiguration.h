/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PFSlowMotionRampConfiguration;

@interface PFSlowMotionConfiguration : NSObject {

	float _volumeDuringSlowMotion;
	float _volumeDuringRampToSlowMotion;
	PFSlowMotionRampConfiguration* _rampDown;
	PFSlowMotionRampConfiguration* _rampUp;

}

@property (nonatomic,readonly) float volumeDuringSlowMotion;                                 //@synthesize volumeDuringSlowMotion=_volumeDuringSlowMotion - In the implementation block
@property (nonatomic,readonly) float volumeDuringRampToSlowMotion;                           //@synthesize volumeDuringRampToSlowMotion=_volumeDuringRampToSlowMotion - In the implementation block
@property (nonatomic,retain,readonly) PFSlowMotionRampConfiguration * rampDown;              //@synthesize rampDown=_rampDown - In the implementation block
@property (nonatomic,retain,readonly) PFSlowMotionRampConfiguration * rampUp;                //@synthesize rampUp=_rampUp - In the implementation block
-(id)init;
-(PFSlowMotionRampConfiguration *)rampDown;
-(PFSlowMotionRampConfiguration *)rampUp;
-(float)volumeDuringRampToSlowMotion;
-(float)volumeDuringSlowMotion;
@end

