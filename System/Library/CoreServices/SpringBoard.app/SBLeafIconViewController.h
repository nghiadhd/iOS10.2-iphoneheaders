/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTreeNodeViewController.h>

@class SBSceneLayoutAnimationWrapperView, SBSceneLayoutElementAnimationWrapperView, SBLeafIcon, SBIconViewMap, SBWorkspaceTransitionRequest;

@interface SBLeafIconViewController : SBTreeNodeViewController {

	SBSceneLayoutAnimationWrapperView* _sceneLayoutView;
	SBSceneLayoutElementAnimationWrapperView* _primaryAppView;
	SBLeafIcon* _leafIcon;
	long long _orientation;
	SBIconViewMap* _viewMap;
	SBWorkspaceTransitionRequest* _transitionRequest;

}

@property (nonatomic,readonly) SBLeafIcon * leafIcon;                                                  //@synthesize leafIcon=_leafIcon - In the implementation block
@property (nonatomic,readonly) long long orientation;                                                  //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) SBIconViewMap * viewMap;                                                //@synthesize viewMap=_viewMap - In the implementation block
@property (nonatomic,retain) SBWorkspaceTransitionRequest * transitionRequest;                         //@synthesize transitionRequest=_transitionRequest - In the implementation block
@property (nonatomic,readonly) SBSceneLayoutElementAnimationWrapperView * primaryAppView; 
-(SBWorkspaceTransitionRequest *)transitionRequest;
-(SBIconViewMap *)viewMap;
-(void)viewWillTransitionToSize:(CGSize)arg1 withContainingExpandedTreeNode:(id)arg2 transitionCoordinator:(id)arg3 ;
-(SBLeafIcon *)leafIcon;
-(id)initWithLeafIcon:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3 ;
-(void)setTransitionRequest:(SBWorkspaceTransitionRequest *)arg1 ;
-(id)borrowPrimaryAppView;
-(void)returnPrimaryAppView;
-(SBSceneLayoutElementAnimationWrapperView *)primaryAppView;
-(void)_updateSceneLayoutView;
-(long long)orientation;
-(void)viewDidLoad;
@end

