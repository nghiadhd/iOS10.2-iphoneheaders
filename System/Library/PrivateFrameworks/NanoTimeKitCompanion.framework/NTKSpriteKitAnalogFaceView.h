/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>

@class SKView, NTKAnalogScene, UIView;

@interface NTKSpriteKitAnalogFaceView : NTKAnalogFaceView {

	SKView* _sceneHostView;
	NTKAnalogScene* _analogScene;
	UIView* _circleView;
	UIView* _handsView;
	double _maxZoomingIconDiameter;

}

@property (assign,nonatomic,__weak) UIView * circleView;                  //@synthesize circleView=_circleView - In the implementation block
@property (assign,nonatomic,__weak) UIView * handsView;                   //@synthesize handsView=_handsView - In the implementation block
@property (assign,nonatomic) double maxZoomingIconDiameter;               //@synthesize maxZoomingIconDiameter=_maxZoomingIconDiameter - In the implementation block
@property (assign,nonatomic) BOOL shouldRasterizeBackground; 
@property (nonatomic,retain) NTKAnalogScene * analogScene;                //@synthesize analogScene=_analogScene - In the implementation block
@property (nonatomic,readonly) UIView * sceneView; 
+(void)_prewarm;
-(void)_prepareForEditing;
-(void)_cleanupAfterEditing;
-(void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_applyFrozen;
-(void)_unloadSnapshotContentViews;
-(void)_applyDataMode;
-(void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_configureForEditMode:(long long)arg1 ;
-(void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3 ;
-(void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2 ;
-(void)_cleanupAfterZoom;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(BOOL)_needsForegroundContainerView;
-(void)_applyShowContentForUnadornedSnapshot;
-(void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 ;
-(void)setEditView:(id)arg1 ;
-(BOOL)_wantsOpportunisticLiveFaceLoading;
-(NTKAnalogScene *)analogScene;
-(void)setAnalogScene:(NTKAnalogScene *)arg1 ;
-(UIView *)sceneView;
-(void)setShouldRasterizeBackground:(BOOL)arg1 ;
-(void)_loadScene;
-(void)_setContentViewsOpaque:(BOOL)arg1 ;
-(void)_handleLocaleDidChange;
-(void)_loadContentToReplaceUnadornedSnapshot;
-(void)setMaxZoomingIconDiameter:(double)arg1 ;
-(double)maxZoomingIconDiameter;
-(BOOL)_shouldFreezeSceneForEditMode:(long long)arg1 ;
-(void)_loadLiveBackground;
-(BOOL)shouldRasterizeBackground;
-(UIView *)circleView;
-(void)setCircleView:(UIView *)arg1 ;
-(UIView *)handsView;
-(void)setHandsView:(UIView *)arg1 ;
@end

