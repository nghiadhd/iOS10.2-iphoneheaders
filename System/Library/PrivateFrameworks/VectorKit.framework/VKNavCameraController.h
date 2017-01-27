/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKCameraController.h>
#import <libobjc.A.dylib/VKNavigationCameraController.h>
#import <libobjc.A.dylib/VKGesturingCameraController.h>
#import <libobjc.A.dylib/VKNavContextObserver.h>

@protocol VKNavGestureCameraBehavior, VKNavCameraControllerObserver;
@class VKMapModel, VKMapCanvas, VKGestureCameraBehavior, VKAttachedNavGestureCameraBehavior, VKDetachedNavGestureCameraBehavior, VKTimedAnimation, VKNavContext, GEORouteMatch, NSString, GEOMapRegion;

@interface VKNavCameraController : VKCameraController <VKNavigationCameraController, VKGesturingCameraController, VKNavContextObserver> {

	unsigned char _cameraType;
	unsigned char _headingType;
	Unit<RadianUnitDescription, double> _puckCourse;
	Matrix<double, 2, 1> _puckLocation;
	Unit<RadianUnitDescription, double> _headingDelta;
	Unit<RadianUnitDescription, double> _headingMinDelta;
	CameraFrame<geo::Radians, double> _lastCalculatedCameraFrame;
	CameraFrame<geo::Radians, double> _cameraFrame;
	BOOL _needsUpdate;
	Spring<double, md::SpringType::Linear> _pitchSpring;
	Spring<double, md::SpringType::Angular> _headingSpring;
	Spring<double, md::SpringType::Linear> _distanceFromTargetSpring;
	Spring<gm::Matrix<double, 2, 1>, md::SpringType::Linear> _screenPositionSpring;
	Unit<MeterUnitDescription, double> _cameraDistanceFromTarget;
	Unit<RadianUnitDescription, double> _cameraPitch;
	double _previousUpdateTime;
	double _maxZoomScale;
	double _minZoomScale;
	VKGestureCameraBehavior*<VKNavGestureCameraBehavior> _gestureBehavior;
	VKAttachedNavGestureCameraBehavior* _attachedGestureBehavior;
	VKDetachedNavGestureCameraBehavior* _detachedGestureBehavior;
	BOOL _isDetached;
	BOOL _panning;
	BOOL _rotating;
	BOOL _pitching;
	BOOL _zooming;
	VKTimedAnimation* _transitionAnimation;
	VKTimedAnimation* _snapPitchAnimation;
	VKTimedAnimation* _snapHeadingAnimation;
	CameraFrame<geo::Radians, double> _transitionFrame;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > _currentStyleName;
	id<VKNavCameraControllerObserver> _observer;
	vector<geo::Mercator2<double>, std::__1::allocator<geo::Mercator2<double> > >* _pointsToFrame;
	unsigned char _styleManeuversToFrame;
	unsigned char _maneuversToFrame;
	double _minCameraHeight;
	double _maxCameraHeight;
	Unit<RadianUnitDescription, double> _minCameraPitch;
	Unit<RadianUnitDescription, double> _maxCameraPitch;
	VKEdgeInsets _framingEdgeInset;
	VKEdgeInsets _framingEdgeInsetProportional;
	VKEdgeInsets _clientFramingInsets;
	Matrix<float, 2, 1> _puckMovementBoundsMin;
	Matrix<float, 2, 1> _puckMovementBoundsMax;
	Matrix<float, 2, 1> _puckScreenPosition;
	double _minHeightDeltaChangeHorizontal;
	double _maxHeightDeltaChangeHorizontal;
	double _minHeightDeltaChangeVertical;
	double _maxHeightDeltaChangeVertical;
	double _halfPuckSize;
	Box<double, 2> _viewableScreenRect;
	Box<double, 2> _framingScreenRect;
	BOOL _enablePan;
	BOOL _enableZoom;
	BOOL _enablePitch;
	BOOL _enableRotate;
	float _panReturnDelayTime;
	unsigned char _alternateFramingSource;
	double _maxFramingDistance;
	double _framingDistanceAfterManeuver;
	VKNavContext* _navContext;
	GEORouteMatch* _routeMatch;
	BOOL _frameAllGroupedManeuvers;
	unsigned char _maxManeuversToFrame;
	BOOL _ignorePointsBehind;
	BOOL _insetsAnimating;
	Mercator2<double> _routeFocusPoint;
	unsigned long long _lastTargetStyleIdentifier;
	double _desiredZoomScale;
	float _animationTime;
	BOOL _pouncing;
	BOOL _isTracking;
	VKMapModel* _mapModel;
	VKMapCanvas* _mapCanvas;
	long long _baseDisplayRate;

}

@property (nonatomic,retain) VKMapModel * mapModel;                            //@synthesize mapModel=_mapModel - In the implementation block
@property (assign,nonatomic) VKMapCanvas * mapCanvas;                          //@synthesize mapCanvas=_mapCanvas - In the implementation block
@property (assign,nonatomic) double zoomScale; 
@property (assign,nonatomic) long long baseDisplayRate;                        //@synthesize baseDisplayRate=_baseDisplayRate - In the implementation block
@property (assign,nonatomic) VKEdgeInsets clientFramingInsets;                 //@synthesize clientFramingInsets=_clientFramingInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGSize centerCoordinate; 
@property (assign,nonatomic) double distanceFromCenterCoordinate; 
@property (assign,nonatomic) double heading; 
@property (assign,nonatomic) double pitch; 
@property (nonatomic,readonly) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) double altitude; 
@property (nonatomic,readonly) double maxPitch; 
@property (nonatomic,readonly) BOOL isPitched; 
@property (nonatomic,readonly) BOOL isRotated; 
@property (nonatomic,readonly) BOOL isFullyPitched; 
-(id)init;
-(void)dealloc;
-(double)heading;
-(void)stop;
-(double)zoomScale;
-(void)setZoomScale:(double)arg1 ;
-(void)stopAnimations;
-(void)setObserver:(id)arg1 ;
-(double)altitude;
-(void)setCamera:(id)arg1 ;
-(CGSize)centerCoordinate;
-(double)pitch;
-(void)puckAnimator:(id)arg1 runAnimation:(id)arg2 ;
-(void)puckAnimator:(id)arg1 updatedPosition:(const Mercator3<double>*)arg2 course:(double)arg3 ;
-(void)puckAnimatorDidStop:(id)arg1 ;
-(void)puckAnimator:(id)arg1 updatedTargetPosition:(Matrix<double, 3, 1>)arg2 ;
-(void)setNavContext:(id)arg1 ;
-(void)startPanningAtPoint:(CGPoint)arg1 panAtStartPoint:(BOOL)arg2 ;
-(void)transferGestureState:(id)arg1 ;
-(BOOL)wantsTimerTick;
-(void)updateWithTimestamp:(double)arg1 ;
-(void)updateLocation:(const Mercator3<double>*)arg1 andCourse:(double)arg2 ;
-(void)setBaseDisplayRate:(long long)arg1 ;
-(void)setMapCanvas:(VKMapCanvas *)arg1 ;
-(void)setMapModel:(VKMapModel *)arg1 ;
-(void)returnToPuck;
-(void)setClientFramingInsets:(VKEdgeInsets)arg1 ;
-(void)edgeInsetsWillBeginAnimating;
-(void)edgeInsetsDidEndAnimating;
-(void)removeObserver;
-(long long)baseDisplayRate;
-(VKMapCanvas *)mapCanvas;
-(void)startWithPounce:(BOOL)arg1 startLocation:(CGSize)arg2 pounceCompletionHandler:(/*^block*/id)arg3 ;
-(void)stylesheetDidChange;
-(void)stylesheetDidReload;
-(double)maximumZoomLevel;
-(double)minimumZoomLevel;
-(void)canvasDidLayout;
-(VKMapModel *)mapModel;
-(double)distanceFromCenterCoordinate;
-(double)currentZoomLevel;
-(double)topDownMinimumZoomLevel;
-(void)_updateStyles;
-(void)navContextStateDidChange:(id)arg1 ;
-(void)_setDetached:(BOOL)arg1 ;
-(void)_updateRouteMatch;
-(void)updateCameraState;
-(void)resetSpringsToResting;
-(BOOL)_hasRunningAnimation;
-(Matrix<double, 2, 1>)worldPointToScreenPoint:(Matrix<double, 3, 1>)arg1 forViewProjectionMatrix:(const Matrix<double, 4, 4>*)arg2 ;
-(void)_updateDebugText;
-(Matrix<double, 3, 1>)_groundPointFromScreenPoint:(const Matrix<double, 2, 1>*)arg1 andFrame:(const CameraFrame<geo::Radians, double>*)arg2 ;
-(Matrix<double, 2, 1>)_calculatePuckScreenPoint;
-(BOOL)_updateSprings:(double)arg1 ;
-(void)_updateSceneStyles;
-(CameraFrame<geo::Radians, double>)currentCameraFrame;
-(CameraFrame<geo::Radians, double>)restingCameraFrame;
-(CameraFrame<geo::Radians, double>)lerpCameraFrame:(const CameraFrame<geo::Radians, double>*)arg1 two:(const CameraFrame<geo::Radians, double>*)arg2 frac:(float)arg3 ;
-(void)animateCameraWithDuration:(float)arg1 ;
-(void)returnToTrackingWithDelay:(double)arg1 resetZoom:(BOOL)arg2 ;
-(double)_normalizedZoomLevelForDisplayZoomLevel:(double)arg1 ;
-(Unit<RadianUnitDescription, double>)calculateHeading;
-(Box<double, 2>)calculateViewableScreenRect;
-(void)updateSpringsForTrackingCamera;
-(double)distanceToManeuver:(unsigned long long)arg1 ;
-(Mercator2<double>)routeLocationAtDistance:(double)arg1 fromManeuver:(unsigned long long)arg2 ;
-(Mercator2<double>)routeLocationAtDistance:(double)arg1 ;
-(void)updateManeuversToFrame;
-(void)updatePointsToFrame;
-(void)updateSpringsForFramingCamera;
-(void)_updateZoomScaleLimts;
-(double)minZoomScale;
-(double)maxZoomScale;
-(double)minZoomHeight;
-(double)maxZoomHeight;
-(Unit<RadianUnitDescription, double>)minCameraPitch;
-(Unit<RadianUnitDescription, double>)maxCameraPitch;
-(void)_snapPitch;
-(void)_snapHeading;
-(CameraFrame<geo::Radians, double>)cameraFrame;
-(void)setCameraFrame:(CameraFrame<geo::Radians, double>)arg1 ;
-(VKEdgeInsets)clientFramingInsets;
-(BOOL)_canZoomIn;
-(BOOL)_canZoomOut;
-(BOOL)isRotateEnabled;
-(void)stopPanningAtPoint:(CGPoint)arg1 ;
-(void)updatePanWithTranslation:(CGPoint)arg1 ;
-(void)zoom:(double)arg1 withFocusPoint:(CGPoint)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canEnter3DMode;
-(BOOL)isGesturing;
-(BOOL)canZoomOutForTileSize:(long long)arg1 ;
-(BOOL)canZoomInForTileSize:(long long)arg1 ;
-(void)stopSnappingAnimations;
-(void)updatePinchWithFocusPoint:(CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3 ;
-(void)startPinchingWithFocusPoint:(CGPoint)arg1 ;
-(void)stopPinchingWithFocusPoint:(CGPoint)arg1 ;
-(void)updateRotationWithFocusPoint:(CGPoint)arg1 newValue:(double)arg2 ;
-(void)startRotatingWithFocusPoint:(CGPoint)arg1 ;
-(void)stopRotatingWithFocusPoint:(CGPoint)arg1 ;
-(void)stopPitchingWithFocusPoint:(CGPoint)arg1 ;
-(void)updatePitchWithFocusPoint:(CGPoint)arg1 translation:(double)arg2 ;
-(void)startPitchingWithFocusPoint:(CGPoint)arg1 ;
-(void)_setNeedsUpdate;
-(void)_updateDebugOverlay;
-(BOOL)isPitchEnabled;
@end

