/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/VKWorldDelegate.h>
#import <libobjc.A.dylib/VKAnimationRunner.h>
#import <libobjc.A.dylib/VKCameraControllerDelegate.h>
#import <libobjc.A.dylib/VKCameraDelegate.h>

@protocol MDRenderTarget, MDMapControllerDelegate;
@class VKDispatch, VKWorld, VKCamera, VKScene, VKCameraController, NSMutableArray, NSString;

@interface VKScreenCanvas : NSObject <VKWorldDelegate, VKAnimationRunner, VKCameraControllerDelegate, VKCameraDelegate> {

	VKDispatch* _dispatch;
	VKWorld* _world;
	VKCamera* _camera;
	VKScene* _scene;
	id<MDRenderTarget> _displayTarget;
	BOOL _needsLayout;
	unsigned _wantsLayout;
	unsigned _needsRepaint;
	BOOL _userIsGesturing;
	BOOL _iconsShouldAlignToPixels;
	VKCameraController* _cameraController;
	float _debugFramesPerSecond;
	BOOL _rendersInBackground;
	NSMutableArray* _animations[2];
	BOOL _isInBackground;
	BOOL _isHidden;
	VKEdgeInsets _edgeInsets;
	VKEdgeInsets _fullyOccludedEdgeInsets;
	VKEdgeInsets _labelEdgeInsets;
	BOOL _deallocing;
	BOOL _needsInitialization;
	unique_ptr<md::RenderQueue, std::__1::default_delete<md::RenderQueue> >* _renderQueue;
	RenderTree* _mapScene;
	LayoutContext* _layoutContext;
	Matrix<float, 4, 1> _bgColor;
	id<MDMapControllerDelegate> _mapDelegate;
	PerspectiveView<double> _view;

}

@property (nonatomic,readonly) VKWorld * world;                                    //@synthesize world=_world - In the implementation block
@property (nonatomic,readonly) VKCamera * camera;                                  //@synthesize camera=_camera - In the implementation block
@property (assign,nonatomic) float debugFramesPerSecond;                           //@synthesize debugFramesPerSecond=_debugFramesPerSecond - In the implementation block
@property (assign,nonatomic) unsigned char targetDisplay; 
@property (assign,nonatomic) VehicleState vehicleState; 
@property (assign,nonatomic) unsigned char applicationUILayout; 
@property (assign,nonatomic) VKEdgeInsets edgeInsets; 
@property (assign,nonatomic) VKEdgeInsets fullyOccludedEdgeInsets;                 //@synthesize fullyOccludedEdgeInsets=_fullyOccludedEdgeInsets - In the implementation block
@property (assign,nonatomic) VKEdgeInsets labelEdgeInsets; 
@property (assign,nonatomic) id<MDMapControllerDelegate> mapDelegate;              //@synthesize mapDelegate=_mapDelegate - In the implementation block
@property (nonatomic,readonly) BOOL needsInitialization;                           //@synthesize needsInitialization=_needsInitialization - In the implementation block
@property (nonatomic,readonly) Matrix<float bgColor;                               //@synthesize bgColor=_bgColor - In the implementation block
@property (assign,nonatomic) BOOL rendersInBackground; 
@property (assign,getter=isGesturing,nonatomic) BOOL gesturing; 
@property (assign,nonatomic) BOOL iconsShouldAlignToPixels;                        //@synthesize iconsShouldAlignToPixels=_iconsShouldAlignToPixels - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setNeedsLayout;
-(void)setNeedsDisplay;
-(void)dealloc;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(VKEdgeInsets)edgeInsets;
-(void)animationDidStop:(id)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(void)forceLayout;
-(void)setEdgeInsets:(VKEdgeInsets)arg1 ;
-(void)willEnterForeground;
-(id)viewportInfo;
-(void)cameraDidChange:(id)arg1 ;
-(void)puckAnimator:(id)arg1 updatedPosition:(const Mercator3<double>*)arg2 course:(double)arg3 ;
-(shared_ptr<gss::StylesheetManager<gss::PropertyID> >*)styleManager;
-(VehicleState)vehicleState;
-(void)setApplicationUILayout:(unsigned char)arg1 ;
-(unsigned char)applicationUILayout;
-(float)debugFramesPerSecond;
-(void)setFullyOccludedEdgeInsets:(VKEdgeInsets)arg1 ;
-(VKEdgeInsets)fullyOccludedEdgeInsets;
-(BOOL)updateDisplayLinkStatus;
-(id<MDMapControllerDelegate>)mapDelegate;
-(id)cameraController;
-(void)layoutRenderQueue:(shared_ptr<ggl::RenderQueue>*)arg1 ;
-(void)resetRenderQueue:(shared_ptr<ggl::RenderQueue>*)arg1 ;
-(void)initializeWithRenderer:(Renderer*)arg1 ;
-(BOOL)wantsTimerTick;
-(BOOL)canRender;
-(BOOL)wantsRender;
-(void)updateWithTimestamp:(double)arg1 ;
-(void)setCameraController:(id)arg1 ;
-(void)updateCameraForFrameResize;
-(void)transferAnimationsTo:(id)arg1 ;
-(void)transferStateFromCanvas:(id)arg1 ;
-(void)stopNonTransferableAnimations;
-(void)didReceiveMemoryWarning:(BOOL)arg1 beAggressive:(BOOL)arg2 ;
-(shared_ptr<gss::CartoStyle<gss::PropertyID> >*)styleForFeature:(const shared_ptr<md::FeatureMarker>*)arg1 ;
-(shared_ptr<md::FeatureMarker>*)featureMarkerAtScreenPoint:(CGPoint)arg1 ;
-(shared_ptr<md::FeatureMarker>*)buildingMarkerAtScreenPoint:(CGPoint)arg1 ;
-(vector<std::__1::shared_ptr<md::LabelFeatureMarker>, std::__1::allocator<std::__1::shared_ptr<md::LabelFeatureMarker> > >*)roadMarkersForSelectionAtScreenPoint:(CGPoint)arg1 ;
-(void)clearSceneIsEffectivelyHidden:(BOOL)arg1 ;
-(BOOL)currentSceneRequiresMSAA;
-(void)gglWillDrawWithTimestamp;
-(void)cameraControllerDidChangeCameraState:(id)arg1 ;
-(void)cameraControllerRequestsLayout:(id)arg1 ;
-(void)cameraController:(id)arg1 willChangeRegionAnimated:(BOOL)arg2 ;
-(void)cameraController:(id)arg1 didChangeRegionAnimated:(BOOL)arg2 ;
-(void)cameraControllerDidFinishInitialTrackingAnimation:(id)arg1 ;
-(void)cameraController:(id)arg1 didBecomePitched:(BOOL)arg2 ;
-(void)cameraController:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2 ;
-(id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2 ;
-(void)cameraController:(id)arg1 canZoomInDidChange:(BOOL)arg2 ;
-(void)cameraController:(id)arg1 canZoomOutDidChange:(BOOL)arg2 ;
-(id)initWithTarget:(id)arg1 inBackground:(BOOL)arg2 ;
-(VKWorld *)world;
-(void)animationDidResume:(id)arg1 ;
-(void)cameraControllerRequestsUpdateDisplayLinkStatus:(id)arg1 ;
-(void)cameraController:(id)arg1 requestsDisplayRate:(long long)arg2 ;
-(void)cameraController:(id)arg1 flyoverModeDidChange:(int)arg2 ;
-(void)cameraController:(id)arg1 flyoverModeWillChange:(int)arg2 ;
-(void)worldLayoutDidChange:(id)arg1 ;
-(void)worldDisplayDidChange:(id)arg1 ;
-(void)adoptAnimation:(id)arg1 ;
-(void)animateWithTimestamp:(double)arg1 ;
-(void)_queueUpdateDisplayLinkStatus;
-(void)runOrAdoptAnimation:(id)arg1 run:(BOOL)arg2 ;
-(void)setDebugFramesPerSecond:(float)arg1 ;
-(BOOL)needsInitialization;
-(BOOL)rendersInBackground;
-(void)setRendersInBackground:(BOOL)arg1 ;
-(void)setVehicleState:(VehicleState)arg1 ;
-(void)setLabelEdgeInsets:(VKEdgeInsets)arg1 ;
-(VKEdgeInsets)labelEdgeInsets;
-(BOOL)iconsShouldAlignToPixels;
-(void)setGesturing:(BOOL)arg1 ;
-(BOOL)isGesturing;
-(void)setIconsShouldAlignToPixels:(BOOL)arg1 ;
-(BOOL)restoreViewportFromInfo:(id)arg1 ;
-(void)setMapDelegate:(id<MDMapControllerDelegate>)arg1 ;
-(void)runAnimation:(id)arg1 ;
-(unsigned char)targetDisplay;
-(void)setTargetDisplay:(unsigned char)arg1 ;
-(VKCamera *)camera;
-(void)didEnterBackground;
-(shared_ptr<gss::StyleSheet<gss::PropertyID> >*)stylesheet;
-(Matrix<float)bgColor;
-(void)didPresent;
@end

