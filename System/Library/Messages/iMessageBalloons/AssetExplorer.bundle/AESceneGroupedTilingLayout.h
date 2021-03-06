/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/AssetExplorer.bundle/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <PhotosUICore/PXAssetsTilingLayout.h>

@protocol AEBrowserLayoutDelegate, AETileLayoutInfo;
@class AEProgressViewModelSnapshot;

@interface AESceneGroupedTilingLayout : PXAssetsTilingLayout {

	CGRect* _sectionBounds;
	long long _contentGridColumns;
	CGRect _cachedCameraTileFrame;
	CGSize _cachedGradientOverlaySize;
	AEProgressViewModelSnapshot* _progressSnapshot;
	id<AEBrowserLayoutDelegate> _delegate;
	long long _layoutStyle;
	id<AETileLayoutInfo> __cameraTileLayoutInfo;
	id<AETileLayoutInfo> __gradientTileLayoutInfo;

}

@property (nonatomic,readonly) id<AETileLayoutInfo> _cameraTileLayoutInfo;                //@synthesize _cameraTileLayoutInfo=__cameraTileLayoutInfo - In the implementation block
@property (nonatomic,readonly) id<AETileLayoutInfo> _gradientTileLayoutInfo;              //@synthesize _gradientTileLayoutInfo=__gradientTileLayoutInfo - In the implementation block
@property (nonatomic,retain) AEProgressViewModelSnapshot * progressSnapshot;              //@synthesize progressSnapshot=_progressSnapshot - In the implementation block
@property (assign,nonatomic,__weak) id<AEBrowserLayoutDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long layoutStyle;                                     //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (nonatomic,readonly) CGPoint initialOrigin; 
@property (nonatomic,readonly) BOOL requiresCustomInitialOrigin; 
-(CGRect)_cachedCameraTileFrame;
-(CGRect)_frameForGridTile:(long long)arg1 inSection:(long long)arg2 ;
-(CGRect)_progressFrameForGridTileFrame:(CGRect)arg1 ;
-(id<AETileLayoutInfo>)_cameraTileLayoutInfo;
-(CGRect)_applyTransform:(AETileDynamicTransformInfo*)arg1 toFrame:(CGRect)arg2 alpha:(out double*)arg3 ;
-(CGPoint)_boundedVisibleOrigin;
-(void)_invalidateBadgeDecorations;
-(double)_zPositionForDecorativeTileSubitem:(unsigned long long)arg1 ;
-(CGRect)_frameForInteractiveTileItem:(unsigned long long)arg1 outTransform:(out AETileDynamicTransformInfo*)arg2 ;
-(double)_zPositionForInteractiveTileItem:(unsigned long long)arg1 ;
-(PXTileGeometry*)_geometryWithFrame:(CGRect)arg1 alpha:(double)arg2 zPosition:(double)arg3 ;
-(CGPoint)initialOrigin;
-(BOOL)requiresCustomInitialOrigin;
-(id<AETileLayoutInfo>)_gradientTileLayoutInfo;
-(void)setProgressSnapshot:(AEProgressViewModelSnapshot *)arg1 ;
-(AEProgressViewModelSnapshot *)progressSnapshot;
-(CGRect)_gradientShadowFrameForItemFrame:(CGRect)arg1 ;
-(long long)_thumbnailRowsForCurrentLayoutStyle;
-(id)initWithDataSource:(id)arg1 layoutStyle:(long long)arg2 cameraTileInfo:(id)arg3 gradientTileInfo:(id)arg4 ;
-(id)initWithDataSource:(id)arg1 layoutStyle:(long long)arg2 cameraTileInfo:(id)arg3 ;
-(void)setDelegate:(id<AEBrowserLayoutDelegate>)arg1 ;
-(void)dealloc;
-(id<AEBrowserLayoutDelegate>)delegate;
-(void)prepareLayout;
-(long long)layoutStyle;
-(CGRect)contentBounds;
-(BOOL)getGeometry:(out PXTileGeometry*)arg1 group:(out unsigned long long*)arg2 userData:(out id*)arg3 forTileWithIdentifier:(PXTileIdentifier)arg4 ;
-(void)setReferenceSize:(CGSize)arg1 ;
-(void)enumerateTilesInRect:(CGRect)arg1 withOptions:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setVisibleOrigin:(CGPoint)arg1 ;
-(void)setSelectedIndexPaths:(id)arg1 ;
@end

