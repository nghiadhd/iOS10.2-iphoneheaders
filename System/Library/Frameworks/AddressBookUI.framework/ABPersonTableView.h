/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UITableView.h>
#import <libobjc.A.dylib/ABPersonTabsScrollView.h>

@protocol ABPersonTabsLayoutManager;
@class UIView, ABPersonViewControllerHelper, NSString;

@interface ABPersonTableView : UITableView <ABPersonTabsScrollView> {

	double _minimumBottomInset;
	UIEdgeInsets _savedContentInset;
	ABPersonViewControllerHelper* _helper;
	id<ABPersonTabsLayoutManager> _tabsLayoutManager;

}

@property (assign,nonatomic) ABPersonViewControllerHelper * helper;                        //@synthesize helper=_helper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double minimumBottomInset; 
@property (nonatomic,retain) UIView * backgroundView; 
@property (nonatomic,retain) id<ABPersonTabsLayoutManager> tabsLayoutManager;              //@synthesize tabsLayoutManager=_tabsLayoutManager - In the implementation block
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(BOOL)touchesShouldCancelInContentView:(id)arg1 ;
-(ABPersonViewControllerHelper *)helper;
-(void)setHelper:(ABPersonViewControllerHelper *)arg1 ;
-(void)setMinimumBottomInset:(double)arg1 ;
-(id<ABPersonTabsLayoutManager>)tabsLayoutManager;
-(void)setTabsLayoutManager:(id<ABPersonTabsLayoutManager>)arg1 ;
-(double)minimumBottomInset;
@end

