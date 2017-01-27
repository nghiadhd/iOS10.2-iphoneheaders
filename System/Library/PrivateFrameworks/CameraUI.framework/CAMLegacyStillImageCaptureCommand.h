/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class CAMLegacyStillImageCaptureRequest;

@interface CAMLegacyStillImageCaptureCommand : CAMCaptureCommand {

	CAMLegacyStillImageCaptureRequest* __request;

}

@property (nonatomic,readonly) CAMLegacyStillImageCaptureRequest * _request;              //@synthesize _request=__request - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(CAMLegacyStillImageCaptureRequest *)_request;
-(long long)_videoOrientationForCaptureOrientation:(long long)arg1 ;
@end

