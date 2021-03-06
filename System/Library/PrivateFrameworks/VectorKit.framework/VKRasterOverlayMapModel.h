/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKMapTileModel.h>
#import <libobjc.A.dylib/VKMapLayer.h>

@class NSMutableArray, NSString;

@interface VKRasterOverlayMapModel : VKMapTileModel <VKMapLayer> {

	NSMutableArray* _sortedTiles;
	unsigned long long _level;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _gglRenderState;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _gglRenderStateDepthTest;
	unique_ptr<ggl::Mesh, std::__1::default_delete<ggl::Mesh> >* _unitMesh;
	unique_ptr<ggl::ClearItem, std::__1::default_delete<ggl::ClearItem> >* _clearItem;
	shared_ptr<ggl::Textured::Pos2DUVPipelineState>* _pipelineState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)reset;
-(BOOL)shouldLayoutWithoutStyleManager;
-(void)gglLayoutScene:(id)arg1 withContext:(LayoutContext*)arg2 renderQueue:(RenderQueue*)arg3 ;
-(unsigned long long)mapLayerPosition;
-(id)initWithTarget:(id)arg1 sharedResources:(id)arg2 level:(unsigned long long)arg3 ;
@end

