/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherWallpaperPageContentView.h>

@class UIView, UIImageView, UILabel, SBAppView, SBDisplayItem, SBZoomableCrossfadeView, SBOrientationTransformWrapperView;

@interface SBDeckSwitcherAppSuggestionPageContentView : SBSwitcherWallpaperPageContentView {

	UIView* _contentView;
	UIImageView* _imageView;
	UILabel* _topLabel;
	UILabel* _bottomLabel;
	SBAppView* _zoomUpAppView;
	SBDisplayItem* _displayItem;
	SBZoomableCrossfadeView* _zoomUpCrossfadeView;
	SBOrientationTransformWrapperView* _appViewLayoutWrapper;

}
-(void)viewPresenting:(id)arg1 withInteraction:(BOOL)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4 ;
-(void)viewDismissing:(id)arg1 withInteraction:(BOOL)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4 ;
-(id)_firstWakeGreetingString;
-(id)_meCardShortName;
-(void)_configureImageAndLabelsForSuggestion:(id)arg1 ;
-(id)_imageForSuggestion:(id)arg1 ;
-(id)_topStringForSuggestion:(id)arg1 ;
-(id)_bottomStringForSuggestion:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 displayItem:(id)arg2 suggestedApp:(id)arg3 ;
-(void)layoutSubviews;
-(void)invalidate;
@end

