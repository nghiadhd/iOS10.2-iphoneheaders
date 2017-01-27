/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCNSceneRenderer;
#import <SceneKit/SceneKit-Structs.h>
@class NSSet, NSMutableOrderedSet, NSArray, NSMutableArray, SCNManipulator, SCNAuthoringEnvironment2;

@interface SCNAuthoringEnvironment : NSObject {

	C3DEngineContextRef _engineContext;
	id<SCNSceneRenderer> _sceneRenderer;
	_C3DFXProgram* _noColorProgram;
	_C3DFXProgram* _colorOnlyProgram;
	_C3DFXProgram* _colorAndTextureProgram;
	_C3DFXProgram* _lightProbesProgram;
	_C3DFXProgram* _wireframeProgram;
	SCD_Struct_SC89* _logsInfo;
	SCD_Struct_SC89* _boldLogsInfo;
	SCD_Struct_SC89* _upArrowInfo;
	SCD_Struct_SC89* _xyQuadrantInfo;
	SCD_Struct_SC89* _xyQuadrantRingInfo;
	SCD_Struct_SC89* _dynamicLinesInfo;
	SCD_Struct_SC89* _dynamicTrianglesInfo;
	SCD_Struct_SC89* _overlayDynamicLinesInfo;
	SCD_Struct_SC89* _overlayDynamicTriangleInfo;
	SCD_Struct_SC89* _textInfo;
	SCD_Struct_SC89* _lightProbesInfo;
	SCD_Struct_SC91* _normalTextInfo;
	SCD_Struct_SC91* _boldTextInfo;
	C3DRasterizerStatesRef _depthOnCullOnStates;
	C3DRasterizerStatesRef _depthOffCullOnStates;
	C3DRasterizerStatesRef _depthOnCullOffStates;
	C3DRasterizerStatesRef _depthOffCullOffStates;
	const void* _arrowIndicesOffset;
	unsigned short _arrowIndicesCount;
	const void* _quadrantIndicesOffset;
	unsigned short _quadrantIndicesCount;
	const void* _quadrantRingIndicesOffset;
	unsigned short _quadrantRingIndicesCount;
	long long _authoringDisplayMask;
	unsigned _hasLighting : 1;
	BOOL _shouldSnapOnGrid;
	BOOL _shouldSnapToAlign;
	BOOL _selectionIsReadonly;
	long long _editingSpace;
	BOOL _graphicalSelectionEnabled;
	 _selectionP0;
	 _selectionP1;
	BOOL _selecting;
	BOOL _surroundToSelect;
	NSSet* _initialSelection;
	NSMutableOrderedSet* _selection;
	NSArray* _selectedNodes;
	float _lastGridDistance;
	double _gridUnit;
	NSMutableArray* _visibleManipulableItems;
	void* _wireframeRenderer;
	SCD_Struct_SC93* _statisticsInfo;
	float _drawScale;
	SCNManipulator* _manipulator;
	_C3DFXPass* _pass;
	id _delegate;
	SCNAuthoringEnvironment2* _authEnv2;

}

@property (readonly) id<SCNSceneRenderer> sceneRenderer; 
@property (nonatomic,readonly) NSArray * selectedNodes; 
@property (assign,nonatomic) BOOL selectionIsReadonly; 
@property (nonatomic,readonly) BOOL selecting;                                                 //@synthesize selecting=_selecting - In the implementation block
@property (nonatomic,readonly) SCNManipulator * manipulator; 
@property (assign,nonatomic) BOOL shouldSnapOnGrid;                                            //@synthesize shouldSnapOnGrid=_shouldSnapOnGrid - In the implementation block
@property (assign,nonatomic) BOOL shouldSnapToAlign;                                           //@synthesize shouldSnapToAlign=_shouldSnapToAlign - In the implementation block
@property (assign,nonatomic) BOOL graphicalSelectionEnabled;                                   //@synthesize graphicalSelectionEnabled=_graphicalSelectionEnabled - In the implementation block
@property (assign,nonatomic) BOOL surroundToSelect;                                            //@synthesize surroundToSelect=_surroundToSelect - In the implementation block
@property (assign,nonatomic) long long authoringDisplayMask; 
@property (nonatomic,readonly) double gridUnit;                                                //@synthesize gridUnit=_gridUnit - In the implementation block
@property (assign,nonatomic) long long editingSpace;                                           //@synthesize editingSpace=_editingSpace - In the implementation block
@property (nonatomic,readonly) SCNMatrix4 viewMatrix; 
@property (assign,nonatomic,__weak) id<SCNAuthoringEnvironmentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)authoringEnvironmentForSceneRenderer:(id)arg1 ;
+(long long)defaultAuthoringDisplayMask;
-(id)init;
-(void)setDelegate:(id<SCNAuthoringEnvironmentDelegate>)arg1 ;
-(void)dealloc;
-(id<SCNAuthoringEnvironmentDelegate>)delegate;
-(void)update;
-(long long)editingSpace;
-(double)gridUnit;
-(BOOL)shouldSnapToAlign;
-(BOOL)shouldSnapOnGrid;
-(id<SCNSceneRenderer>)sceneRenderer;
-(SCNMatrix4)viewMatrix;
-(void)setAuthoringDisplayMask:(long long)arg1 ;
-(long long)authoringDisplayMask;
-(BOOL)didTapAtPoint:(CGPoint)arg1 ;
-(id)_initWithEngineContext:(C3DEngineContextRef)arg1 ;
-(void)beginEditingNodes:(id)arg1 ;
-(void)_updateManipulatorTargets;
-(NSArray *)selectedNodes;
-(BOOL)selectionIsReadonly;
-(void)setSelectionIsReadonly:(BOOL)arg1 ;
-(SCNManipulator *)manipulator;
-(void)cancelEdition;
-(void)beginEditingNode:(id)arg1 ;
-(void)saveInitialSelection;
-(void)drawLineFromPoint:(SCNVector3)arg1 toPoint:(SCNVector3)arg2 color:(id)arg3 ;
-(void)drawString:(id)arg1 atPoint:(CGPoint)arg2 color:(id)arg3 ;
-(BOOL)isEditingSubComponent;
-(void)setShouldSnapOnGrid:(BOOL)arg1 ;
-(void)setShouldSnapToAlign:(BOOL)arg1 ;
-(void)setEditingSpace:(long long)arg1 ;
-(BOOL)graphicalSelectionEnabled;
-(void)setGraphicalSelectionEnabled:(BOOL)arg1 ;
-(BOOL)surroundToSelect;
-(void)setSurroundToSelect:(BOOL)arg1 ;
-(BOOL)selecting;
-(id)selectedItems;
@end

