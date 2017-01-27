/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class MCDPCModel, MCDPCContainer, NSArray, NSString;

@interface MCDPlayableContentViewController : UINavigationController <UINavigationControllerDelegate> {

	MCDPCModel* _model;
	MCDPCContainer* _rootContainer;
	NSArray* _stackToRebuild;
	BOOL _hasBrowsableContent;
	BOOL _hasSectionedContent;
	BOOL _hasLoaded;
	NSString* _bundleID;

}

@property (nonatomic,copy,readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setupView;
-(NSString *)bundleID;
-(void)_modelWillInvalidate:(id)arg1 ;
-(void)_modelDidInvalidate:(id)arg1 ;
-(void)_browsableContentEndpointChangedNotification:(id)arg1 ;
-(void)_nowPlayingIdentifiersChanged:(id)arg1 ;
-(id)initWithBundleID:(id)arg1 stack:(id)arg2 ;
-(id)_createSectionedRootViewController;
-(id)_createRootViewController;
-(void)_checkAndSetupView;
-(void)_populateStack;
-(void)_updateStackForPlaying:(BOOL)arg1 ;
-(void)refreshNavigationStackForLaunch;
-(id)currentStack;
-(id)initWithBundleID:(id)arg1 ;
@end

