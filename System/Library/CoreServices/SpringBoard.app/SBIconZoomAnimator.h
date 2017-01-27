/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBIconAnimator.h>
#import <SpringBoard/SBIconIndexNodeObserver.h>

@class NSMapTable, NSSet, SBIconListModel, SBIconModel, SBIconListView, SBIconZoomSettings, NSString;

@interface SBIconZoomAnimator : SBIconAnimator <SBIconIndexNodeObserver> {

	NSMapTable* _listIconToViewMap;
	NSMapTable* _dockIconToViewMap;
	NSSet* _criticalIconNodeIdentifiers;
	SBIconListModel* _iconListModel;
	SBIconModel* _iconModel;
	BOOL* _phaseTwoCancelledPtr;
	SBIconListView* _iconListView;
	SBIconListView* _dockListView;

}

@property (assign,nonatomic) BOOL* phaseTwoCancelledPtr;                       //@synthesize phaseTwoCancelledPtr=_phaseTwoCancelledPtr - In the implementation block
@property (nonatomic,readonly) SBIconListView * iconListView;                  //@synthesize iconListView=_iconListView - In the implementation block
@property (nonatomic,readonly) SBIconListView * dockListView;                  //@synthesize dockListView=_dockListView - In the implementation block
@property (nonatomic,retain) NSSet * criticalIconNodeIdentifiers;              //@synthesize criticalIconNodeIdentifiers=_criticalIconNodeIdentifiers - In the implementation block
@property (nonatomic,retain) SBIconZoomSettings * settings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(id)iconViewForIcon:(id)arg1 ;
-(SBIconListView *)dockListView;
-(id)initWithFolderController:(id)arg1 ;
-(void)setCriticalIconNodeIdentifiers:(NSSet *)arg1 ;
-(void)_setAnimationFraction:(double)arg1 ;
-(unsigned long long)_numberOfSignificantAnimations;
-(void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(BOOL)arg4 sharedCompletion:(/*^block*/id)arg5 ;
-(void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(BOOL)isPastPointOfNoReturn;
-(void)_iconModelDidRelayout:(id)arg1 ;
-(void)_iconModelDidReload:(id)arg1 ;
-(void)_clearObservers;
-(void)_cleanupZoom;
-(BOOL*)phaseTwoCancelledPtr;
-(void)_setIconListView:(id)arg1 ;
-(void)_setDockListView:(id)arg1 ;
-(void)_applyLabelAlphaFraction:(double)arg1 ;
-(void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(/*^block*/id)arg3 ;
-(void)setPhaseTwoCancelledPtr:(BOOL*)arg1 ;
-(void)_invalidateAnimationForSignificantIconModelChangesForReason:(id)arg1 ;
-(void)enumerateIconsAndIconViewsWithHandler:(/*^block*/id)arg1 ;
-(unsigned long long)listIconCount;
-(unsigned long long)dockIconCount;
-(void)cleanupZoom;
-(NSSet *)criticalIconNodeIdentifiers;
-(SBIconListView *)iconListView;
-(void)dealloc;
@end

