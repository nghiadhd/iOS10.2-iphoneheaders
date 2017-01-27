/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UILayoutGuide.h>

@class NSLayoutConstraint;

@interface _UIContentConstraintsLayoutGuide : UILayoutGuide {

	BOOL _wantsMaximumSizeConstraintsActive;
	BOOL _wantsMinimumSizeConstraintsActive;
	NSLayoutConstraint* _leadingConstraint;
	NSLayoutConstraint* _trailingConstraint;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	NSLayoutConstraint* _maximumWidthConstraint;
	NSLayoutConstraint* _maximumHeightConstraint;
	NSLayoutConstraint* _minimumWidthConstraint;
	NSLayoutConstraint* _minimumHeightConstraint;
	CGSize _maximumSize;
	CGSize _minimumSize;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,readonly) NSLayoutConstraint * leadingConstraint;                    //@synthesize leadingConstraint=_leadingConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * trailingConstraint;                   //@synthesize trailingConstraint=_trailingConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * topConstraint;                        //@synthesize topConstraint=_topConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * bottomConstraint;                     //@synthesize bottomConstraint=_bottomConstraint - In the implementation block
@property (nonatomic,readonly) BOOL wantsMaximumSizeConstraintsActive;                    //@synthesize wantsMaximumSizeConstraintsActive=_wantsMaximumSizeConstraintsActive - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * maximumWidthConstraint;               //@synthesize maximumWidthConstraint=_maximumWidthConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * maximumHeightConstraint;              //@synthesize maximumHeightConstraint=_maximumHeightConstraint - In the implementation block
@property (nonatomic,readonly) BOOL wantsMinimumSizeConstraintsActive;                    //@synthesize wantsMinimumSizeConstraintsActive=_wantsMinimumSizeConstraintsActive - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * minimumWidthConstraint;               //@synthesize minimumWidthConstraint=_minimumWidthConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * minimumHeightConstraint;              //@synthesize minimumHeightConstraint=_minimumHeightConstraint - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                     //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) CGSize maximumSize;                                          //@synthesize maximumSize=_maximumSize - In the implementation block
@property (assign,nonatomic) CGSize minimumSize;                                          //@synthesize minimumSize=_minimumSize - In the implementation block
-(id)init;
-(UIEdgeInsets)edgeInsets;
-(void)setOwningView:(id)arg1 ;
-(NSLayoutConstraint *)bottomConstraint;
-(void)setMinimumSize:(CGSize)arg1 ;
-(CGSize)minimumSize;
-(NSLayoutConstraint *)minimumWidthConstraint;
-(NSLayoutConstraint *)minimumHeightConstraint;
-(void)_clearConstraints;
-(void)_updateAllMarginConstraintConstants;
-(void)_setAllMarginConstraintsActive:(BOOL)arg1 ;
-(void)_updateAllSizeConstraints;
-(void)_setAllSizeConstraintsActive:(BOOL)arg1 ;
-(CGSize)maximumSize;
-(id)_allMarginConstraints;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setMaximumSize:(CGSize)arg1 ;
-(id)_allSizeConstraints;
-(NSLayoutConstraint *)leadingConstraint;
-(NSLayoutConstraint *)trailingConstraint;
-(NSLayoutConstraint *)topConstraint;
-(BOOL)wantsMaximumSizeConstraintsActive;
-(NSLayoutConstraint *)maximumWidthConstraint;
-(NSLayoutConstraint *)maximumHeightConstraint;
-(BOOL)wantsMinimumSizeConstraintsActive;
@end

