/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UISegmentedControl.h>
#import <libobjc.A.dylib/SUDeferredUIView.h>

@class NSMutableArray, NSString;

@interface SUDeferredUISegmentedControl : UISegmentedControl <SUDeferredUIView> {

	CGRect _deferredFrame;
	double _deferredMaxTotalWidth;
	double _deferredMinSegmentWidth;
	NSMutableArray* _deferredSegments;
	long long _deferredSegmentedControlStyle;
	unsigned long long _deferredSelectedSegmentIndex;
	BOOL _deferredSizeToFit;
	BOOL _isDeferringInterfaceUpdates;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDeferringInterfaceUpdates,nonatomic) BOOL deferringInterfaceUpdates; 
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGRect)frame;
-(void)sizeToFit;
-(void)setSegmentedControlStyle:(long long)arg1 ;
-(void)removeAllSegments;
-(void)setSelectedSegmentIndex:(long long)arg1 ;
-(long long)segmentedControlStyle;
-(void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)insertSegmentWithImage:(id)arg1 atIndex:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)removeSegmentAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(id)titleForSegmentAtIndex:(unsigned long long)arg1 ;
-(void)setImage:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(id)imageForSegmentAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSegments;
-(long long)selectedSegmentIndex;
-(BOOL)isDeferringInterfaceUpdates;
-(void)setDeferringInterfaceUpdates:(BOOL)arg1 ;
-(void)sizeToFitWithMinimumSegmentWidth:(double)arg1 maximumTotalWidth:(double)arg2 ;
-(void)_saveCurrentStateAsDeferred;
-(void)_commitDeferredInterfaceUpdates;
-(void)_insertSegmentWithValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_saveSegmentsAsDeferred;
@end

