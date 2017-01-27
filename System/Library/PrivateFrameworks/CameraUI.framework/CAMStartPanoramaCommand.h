/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class CAMPanoramaCaptureRequest;

@interface CAMStartPanoramaCommand : CAMCaptureCommand {

	CAMPanoramaCaptureRequest* __request;

}

@property (nonatomic,readonly) CAMPanoramaCaptureRequest * _request;              //@synthesize _request=__request - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(CAMPanoramaCaptureRequest *)_request;
-(void)executeWithContext:(id)arg1 ;
@end

