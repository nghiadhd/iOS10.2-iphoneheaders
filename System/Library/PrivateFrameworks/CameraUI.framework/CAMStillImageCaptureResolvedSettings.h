/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CAMStillImageCaptureResolvedSettings : NSObject {

	BOOL _HDREnabled;
	BOOL _portraitEffectEnabled;

}

@property (getter=isHDREnabled,nonatomic,readonly) BOOL HDREnabled;                                    //@synthesize HDREnabled=_HDREnabled - In the implementation block
@property (getter=isPortraitEffectEnabled,nonatomic,readonly) BOOL portraitEffectEnabled;              //@synthesize portraitEffectEnabled=_portraitEffectEnabled - In the implementation block
-(id)initWithHDREnabled:(BOOL)arg1 portraitEffectEnabled:(BOOL)arg2 ;
-(BOOL)isHDREnabled;
-(BOOL)isPortraitEffectEnabled;
@end
