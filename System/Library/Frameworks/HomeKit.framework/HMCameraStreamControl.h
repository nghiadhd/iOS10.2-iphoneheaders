/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMCameraControl.h>
#import <libobjc.A.dylib/_HMCameraStreamControlDelegate.h>

@protocol HMCameraStreamControlDelegate, OS_dispatch_queue;
@class _HMCameraStreamControl, NSObject, HMCameraStream, NSString;

@interface HMCameraStreamControl : HMCameraControl <_HMCameraStreamControlDelegate> {

	id<HMCameraStreamControlDelegate> _delegate;
	_HMCameraStreamControl* _streamControl;
	NSObject*<OS_dispatch_queue> _propertyQueue;

}

@property (nonatomic,retain) _HMCameraStreamControl * streamControl;                         //@synthesize streamControl=_streamControl - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                   //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (assign,nonatomic,__weak) id<HMCameraStreamControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long streamState; 
@property (nonatomic,readonly) HMCameraStream * cameraStream; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<HMCameraStreamControlDelegate>)arg1 ;
-(id<HMCameraStreamControlDelegate>)delegate;
-(void)cameraStreamControl:(id)arg1 didStopStream:(id)arg2 ;
-(id)initWithStreamControl:(id)arg1 ;
-(void)setStreamControl:(_HMCameraStreamControl *)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)stopStream;
-(unsigned long long)streamState;
-(_HMCameraStreamControl *)streamControl;
-(void)cameraStreamControlDidStartStream:(id)arg1 ;
-(void)startStream;
-(HMCameraStream *)cameraStream;
@end

