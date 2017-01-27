/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@class PVVideoCompositingContext, EAGLSharegroup;

@interface PVCameraPreviewRenderer : NSObject {

	HGRef<PVRenderManager>* _renderManager;
	HGRef<HGRenderJob>* _currentRenderJob;
	PVVideoCompositingContext* _compositingContext;

}

@property (nonatomic,readonly) EAGLSharegroup * shareGroup; 
-(id)init;
-(void)dealloc;
-(HGRef<PVRenderManager>*)renderManager;
-(EAGLSharegroup *)shareGroup;
-(void)enqueueRenderRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

