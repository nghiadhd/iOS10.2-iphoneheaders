/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class UIImageView, UIStatusBarLockItemView, NSString;

@interface _UIStatusBarLockItemPadlockView : UIView <CAAnimationDelegate> {

	UIImageView* _bodyView;
	UIImageView* _shackleView;
	/*^block*/id _completionBlock;
	UIStatusBarLockItemView* _owner;

}

@property (nonatomic,retain) UIImageView * bodyView;                              //@synthesize bodyView=_bodyView - In the implementation block
@property (nonatomic,retain) UIImageView * shackleView;                           //@synthesize shackleView=_shackleView - In the implementation block
@property (nonatomic,copy) id completionBlock;                                    //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic,__weak) UIStatusBarLockItemView * owner;              //@synthesize owner=_owner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)reset;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(UIStatusBarLockItemView *)owner;
-(void)setOwner:(UIStatusBarLockItemView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 owner:(id)arg2 ;
-(void)animateUnlockCompletionBlock:(/*^block*/id)arg1 ;
-(void)jiggleCompletionBlock:(/*^block*/id)arg1 ;
-(UIImageView *)bodyView;
-(void)setBodyView:(UIImageView *)arg1 ;
-(UIImageView *)shackleView;
-(void)setShackleView:(UIImageView *)arg1 ;
@end

