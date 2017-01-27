/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/TVCarouselViewDataSource.h>

@class NSArray, NSString, UILayoutGuide, UIStackView, UILabel, UIButton, TVCarouselView;

@interface WLKUIAccessView_iOS : UIView <TVCarouselViewDataSource> {

	NSArray* _apps;
	NSString* _accountName;
	UILayoutGuide* _titlePlacementGuide;
	UIStackView* _contentStack;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UIStackView* _logoStack;
	UIStackView* _bottomStack;
	UIButton* _allowButton;
	UIButton* _disallowButton;
	UIButton* _nackButton;
	UILabel* _privacyLabel;
	UIButton* _privacyButton;
	UIButton* _seeAllButton;
	TVCarouselView* _carouselView;
	BOOL _didLayout;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)privacyButton;
-(unsigned long long)numberOfItemsInCarouselView:(id)arg1 ;
-(id)carouselView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2 ;
-(id)_buildCarousel;
-(id)_buildLogoStack;
-(id)_imageViewForIndex:(unsigned long long)arg1 ;
-(id)initWithApps:(id)arg1 accountName:(id)arg2 ;
-(id)allowButton;
-(id)disallowButton;
-(id)seeAllButton;
-(id)nackButton;
-(void)showNackScreen;
@end

