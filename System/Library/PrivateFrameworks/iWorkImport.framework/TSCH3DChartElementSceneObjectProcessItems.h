/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHUnretainedParent.h>

@class TSCH3DChartElementSceneObject, TSCH3DSceneRenderPipeline, TSCH3DChartElementProperties, TSCH3DRenderProcessor;

@interface TSCH3DChartElementSceneObjectProcessItems : NSObject <TSCHUnretainedParent> {

	TSCH3DChartElementSceneObject* mSceneObject;
	TSCH3DSceneRenderPipeline* mPipeline;
	TSCH3DChartElementProperties* mProperties;
	vector<TSCH3D::RenderElementInfo, std::__1::allocator<TSCH3D::RenderElementInfo> >* mDelayedItems;

}

@property (nonatomic,readonly) BOOL pushStates; 
@property (nonatomic,readonly) BOOL useBoundsGeometry; 
@property (nonatomic,readonly) BOOL geometryOnly; 
@property (nonatomic,readonly) TSCH3DRenderProcessor * processor; 
+(id)processItemsWithSceneObject:(id)arg1 properties:(id)arg2 pipeline:(id)arg3 ;
-(void)clearParent;
-(id)initWithSceneObject:(id)arg1 properties:(id)arg2 pipeline:(id)arg3 ;
-(BOOL)useBoundsGeometry;
-(BOOL)geometryOnly;
-(RenderElementInfo)elementInfoWithSeries:(id)arg1 position:(const tvec2<int>*)arg2 ;
-(BOOL)pushStates;
-(void)p_processElementInfoWithSeries:(id)arg1 position:(const tvec2<int>*)arg2 ;
-(void)performItemsProcessing;
-(BOOL)p_delayedItemsAreUnique;
-(void)processDelayedItemsWithOpacity:(float)arg1 ;
-(void)processItems;
-(TSCH3DRenderProcessor *)processor;
-(void)dealloc;
@end

