/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@protocol SKUIFlexibleSegmentedControlDelegate;
@class NSArray, NSString, UISegmentedControl;

@interface SKUIFlexibleSegmentedControl : UIView {

	id<SKUIFlexibleSegmentedControlDelegate> _delegate;
	double _desiredSegmentWidth;
	BOOL _isMoreListSelected;
	NSArray* _itemTitles;
	long long _maximumNumberOfVisibleItems;
	NSString* _moreListTitle;
	long long _previousSelectedSegmentIndex;
	UISegmentedControl* _segmentedControl;
	long long _selectedSegmentIndex;
	BOOL _sizesSegmentsToFitWidth;

}

@property (assign,nonatomic) BOOL sizesSegmentsToFitWidth;                                          //@synthesize sizesSegmentsToFitWidth=_sizesSegmentsToFitWidth - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIFlexibleSegmentedControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double desiredSegmentWidth;                                            //@synthesize desiredSegmentWidth=_desiredSegmentWidth - In the implementation block
@property (nonatomic,copy) NSArray * itemTitles;                                                    //@synthesize itemTitles=_itemTitles - In the implementation block
@property (assign,nonatomic) long long maximumNumberOfVisibleItems;                                 //@synthesize maximumNumberOfVisibleItems=_maximumNumberOfVisibleItems - In the implementation block
@property (nonatomic,readonly) long long moreListIndex; 
@property (nonatomic,copy) NSString * moreListTitle;                                                //@synthesize moreListTitle=_moreListTitle - In the implementation block
@property (assign,nonatomic) long long selectedSegmentIndex;                                        //@synthesize selectedSegmentIndex=_selectedSegmentIndex - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SKUIFlexibleSegmentedControlDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SKUIFlexibleSegmentedControlDelegate>)delegate;
-(void)setSelectedSegmentIndex:(long long)arg1 ;
-(long long)selectedSegmentIndex;
-(void)setDesiredSegmentWidth:(double)arg1 ;
-(NSArray *)itemTitles;
-(void)cancelMoreList;
-(long long)moreListIndex;
-(CGRect)frameForSegmentWithIndex:(long long)arg1 ;
-(void)setItemTitles:(NSArray *)arg1 ;
-(NSString *)moreListTitle;
-(void)setMoreListTitle:(NSString *)arg1 ;
-(long long)maximumNumberOfVisibleItems;
-(void)setMaximumNumberOfVisibleItems:(long long)arg1 ;
-(void)setSizesSegmentsToFitWidth:(BOOL)arg1 ;
-(double)desiredSegmentWidth;
-(void)_valueChangeAction:(id)arg1 ;
-(void)_configureSegmentedControl:(id)arg1 withTitles:(id)arg2 boundingSize:(CGSize)arg3 ;
-(void)_setTitles:(id)arg1 forSegmentedControl:(id)arg2 ;
-(BOOL)sizesSegmentsToFitWidth;
@end

