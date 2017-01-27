/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol UILayoutContainerViewDelegate;
@class UIView;

@interface UILayoutContainerView : UIView <NSCoding> {

	UIView* _shadowView;
	struct {
		unsigned delegateRespondsToSemanticContentAttributeChanged : 1;
		unsigned delegateRespondsToViewWillLayoutSubviews : 1;
		unsigned delegateRespondsToWillMoveToWindow : 1;
		unsigned delegateRespondsToDidMoveToWindow : 1;
	}  _layoutContainerViewFlags;
	BOOL _usesInnerShadow;
	BOOL _usesRoundedCorners;
	id<UILayoutContainerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<UILayoutContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL usesInnerShadow;                                           //@synthesize usesInnerShadow=_usesInnerShadow - In the implementation block
@property (assign,nonatomic) BOOL usesRoundedCorners;                                        //@synthesize usesRoundedCorners=_usesRoundedCorners - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(void)addSubview:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UILayoutContainerViewDelegate>)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setBounds:(CGRect)arg1 ;
-(id<UILayoutContainerViewDelegate>)delegate;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setUsesRoundedCorners:(BOOL)arg1 ;
-(void)setUsesInnerShadow:(BOOL)arg1 ;
-(void)_setFlagsFromDelegate:(id)arg1 ;
-(void)_updateShadowViews;
-(void)_installShadowViews;
-(void)_tearDownShadowViews;
-(BOOL)usesInnerShadow;
-(BOOL)usesRoundedCorners;
@end

