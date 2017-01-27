/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIBarButtonItem, UIImageView, NSArray, UIColor, UITapGestureRecognizer, NSString;

@interface UIDimmingView : UIView <UIGestureRecognizerDelegate> {

	UIBarButtonItem* _highlightedBarButtonItem;
	UIImageView* _highlightedImageView;
	UIImageView* _backgroundGlow;
	NSArray* _passthroughViews;
	BOOL _ignoresTouches;
	BOOL _displayed;
	BOOL _inPassthroughHitTest;
	UIColor* _dimmingColor;
	UITapGestureRecognizer* _singleFingerTapRecognizer;
	BOOL _suppressesBackdrops;
	id _delegate;

}

@property (assign,nonatomic,__weak) id delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * highlightedBarButtonItem; 
@property (nonatomic,retain) NSArray * passthroughViews;                              //@synthesize passthroughViews=_passthroughViews - In the implementation block
@property (assign,nonatomic) BOOL ignoresTouches;                                     //@synthesize ignoresTouches=_ignoresTouches - In the implementation block
@property (assign,nonatomic) BOOL displayed;                                          //@synthesize displayed=_displayed - In the implementation block
@property (nonatomic,retain) UIColor * dimmingColor;                                  //@synthesize dimmingColor=_dimmingColor - In the implementation block
@property (assign,nonatomic) BOOL suppressesBackdrops;                                //@synthesize suppressesBackdrops=_suppressesBackdrops - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultDimmingColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setDimmingColor:(UIColor *)arg1 ;
-(UIColor *)dimmingColor;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(BOOL)displayed;
-(void)setIgnoresTouches:(BOOL)arg1 ;
-(void)setSuppressesBackdrops:(BOOL)arg1 ;
-(void)display:(BOOL)arg1 withAnimationDuration:(double)arg2 afterDelay:(double)arg3 ;
-(void)mouseUp:(GSEventRef)arg1 ;
-(void)display:(BOOL)arg1 ;
-(void)handleSingleTap:(id)arg1 ;
-(BOOL)suppressesBackdrops;
-(id)_backdropViewsToAnimate;
-(void)dimmingRemovalAnimationDidStop;
-(void)setHighlightedBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)highlightedBarButtonItem;
-(void)_simulateTap;
-(NSArray *)passthroughViews;
-(void)setPassthroughViews:(NSArray *)arg1 ;
-(BOOL)ignoresTouches;
-(void)setDisplayed:(BOOL)arg1 ;
@end

