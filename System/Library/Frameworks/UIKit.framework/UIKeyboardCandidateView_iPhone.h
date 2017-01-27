/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKeyboardCandidateView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIKeyboardCandidateGridHeader, NSString;

@interface UIKeyboardCandidateView_iPhone : UIKeyboardCandidateView <UICollectionViewDelegate, UIGestureRecognizerDelegate> {

	UIKeyboardCandidateGridHeader* _header;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultExtendedControlHeight;
-(void)dealloc;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)handleTap;
-(void)_handleKeyboardShowOrHide:(id)arg1 ;
-(BOOL)_shouldShowHideKeyboard;
-(BOOL)_shouldUseFullMetrics;
-(void)_setupKeyboardInteraction;
@end

