/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKVectorMapModel.h>
#import <libobjc.A.dylib/VKBuildingFootprintMapModelDelegate.h>

@class VKCamera, VKTimedAnimation, NSMutableSet;

@interface VKTransitLineMapModel : VKVectorMapModel <VKBuildingFootprintMapModelDelegate> {

	int _stencilRef;
	float _contentScale;
	BOOL _isPrimaryModel;
	BOOL _updateSelectionIDs;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _renderState;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _renderState3D;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _renderStateStencil;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _renderStateStencil3D;
	float _inflation;
	int _styleZ;
	LabelExternalObjectsModerator* _labelExternalObjectsModerator;
	int _sourceTileZtoStencilOffset;
	VKCamera* _previousCamera;
	BOOL _isTransitioningToTransit;
	unsigned char _transitLinesCommandBufferId;
	unsigned char _transitLines3DCommandBufferId;
	shared_ptr<md::TransitInterTileMediator>* _interTileMediator;
	unique_ptr<md::TransitNodeFeaturePool, std::__1::default_delete<md::TransitNodeFeaturePool> >* _nodeFeaturePool;
	BOOL _shouldSynchronizeWithLabels;
	VKTimedAnimation* _fadeOutAnimation;
	NSMutableSet* _lastTilesInScene;
	NSMutableSet* _tilesEnteringScene;
	NSMutableSet* _tilesLeavingScene;
	unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >* _selectedLineIDs;
	unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >* _selectedNodeIDs;
	unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >* _linesOnSelectedNodes;
	unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >* _nodesOnSelectedLines;
	shared_ptr<md::TransitLineSharedResources>* _transitLineSharedResources;
	ClearItem* _clearItem;
	Matrix<double, 4, 4> _screenProjectionMatrix;
	Matrix<float, 2, 1> _screenSizeInPixels;
	BOOL _isScreenInfoReady;
	shared_ptr<md::TransitItemMarker>* _debugHighlightedItem;
	BOOL _forceStyleUpdate;
	BOOL _forceMeshCreation;
	BOOL _needDebugConsoleClear;
	BOOL _debugPaintCounts;
	BOOL _debugHighlightFeaturesOnly;
	unsigned char _lineMergingDisabled;
	BOOL _disableIntraLinkLineCrossings;

}

@property (nonatomic,readonly) const unordered_set<unsigned long long* selectedLines;                                     //@synthesize selectedLineIDs=_selectedLineIDs - In the implementation block
@property (nonatomic,readonly) const unordered_set<unsigned long long* nodesOnSelectedLines;                              //@synthesize nodesOnSelectedLines=_nodesOnSelectedLines - In the implementation block
@property (nonatomic,readonly) shared_ptr<const md::TransitLineSharedResources>* transitLineSharedResources; 
-(void)dealloc;
-(void)reset;
-(void)didReceiveMemoryWarning:(BOOL)arg1 ;
-(void)setContentScale:(double)arg1 ;
-(void)didBeginTransitionToTransit;
-(void)stylesheetDidChange;
-(void)gglLayoutScene:(id)arg1 withContext:(LayoutContext*)arg2 renderQueue:(RenderQueue*)arg3 ;
-(void)didEndTransitionToTransit;
-(void)debugHighlightObjectAtScreenPoint:(CGPoint)arg1 ;
-(unsigned long long)mapLayerPosition;
-(void)populateSelectedLineBounds:(id)arg1 ;
-(void)setSelectedLines:(const unordered_set<unsigned long long*)arg1 ;
-(unsigned)minSelectedLineZoomForIDs:(const unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >*)arg1 ;
-(const unordered_set<unsigned long long*)selectedLines;
-(void)reserveStencilRangeForScene:(id)arg1 withContext:(LayoutContext*)arg2 renderQueue:(RenderQueue*)arg3 ;
-(void)clearDelegates;
-(id)initWithTarget:(id)arg1 sharedResources:(id)arg2 labelExternalObjectsModerator:(LabelExternalObjectsModerator*)arg3 ;
-(void)beginFadeOut:(/*^block*/id)arg1 ;
-(void)stopFadeOut;
-(shared_ptr<const md::TransitLineSharedResources>*)transitLineSharedResources;
-(void)buildingFootprintMapModel:(id)arg1 didUpdateStencilRef:(int)arg2 ;
-(id)initWithTarget:(id)arg1 sharedResources:(id)arg2 labelExternalObjectsModerator:(LabelExternalObjectsModerator*)arg3 supportedPassIds:(pair<md::CommandBufferId, md::CommandBufferId>)arg4 ;
-(void)_willStartDrawingTiles:(id)arg1 ;
-(void)_willStopDrawingTiles:(id)arg1 ;
-(void)_clearLastTilesInScene;
-(void)transitionTiles:(id)arg1 fromAlpha:(float)arg2 toAlpha:(float)arg3 animated:(BOOL)arg4 ;
-(void)appendTransitLineCommandsToBuffer:(CommandBuffer*)arg1 inContext:(LayoutContext*)arg2 ;
-(const unordered_set<unsigned long long*)nodesOnSelectedLines;
-(void)_debugHighlightItemAtScreenPoint:(CGPoint)arg1 ;
-(void)_debugLayoutWithContext:(LayoutContext*)arg1 ;
-(void)_updateDebugSettings;
-(shared_ptr<md::TransitItemMarker>*)_itemAtScreenPoint:(CGPoint)arg1 ;
-(BOOL)_grabStateFromContext:(LayoutContext*)arg1 ;
-(void)_setDebugHighlight:(const shared_ptr<md::TransitItemMarker>*)arg1 ;
-(id)transitLineMarkersInCurrentViewport;
-(id)transitLineMarkersForSelectionAtPoint:(CGPoint)arg1 ;
-(void)willDeactivate;
@end

