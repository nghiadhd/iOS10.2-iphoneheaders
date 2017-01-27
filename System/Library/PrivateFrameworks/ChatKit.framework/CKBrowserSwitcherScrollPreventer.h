/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol CKBrowserSwitcherScrollPreventerDelegate;
@class UIScrollView, NSString;

@interface CKBrowserSwitcherScrollPreventer : UIView <UIScrollViewDelegate> {

	BOOL _engaged;
	BOOL _switching;
	BOOL _scrollEnabled;
	id<CKBrowserSwitcherScrollPreventerDelegate> _delegate;
	UIScrollView* _horizontalScrollView;
	UIScrollView* _verticalScrollView;

}

@property (nonatomic,retain) UIScrollView * horizontalScrollView;                                       //@synthesize horizontalScrollView=_horizontalScrollView - In the implementation block
@property (nonatomic,retain) UIScrollView * verticalScrollView;                                         //@synthesize verticalScrollView=_verticalScrollView - In the implementation block
@property (assign,getter=isEngaged,nonatomic) BOOL engaged;                                             //@synthesize engaged=_engaged - In the implementation block
@property (assign,getter=isSwitching,nonatomic) BOOL switching;                                         //@synthesize switching=_switching - In the implementation block
@property (assign,nonatomic) BOOL scrollEnabled;                                                        //@synthesize scrollEnabled=_scrollEnabled - In the implementation block
@property (assign,nonatomic) CGPoint contentOffset; 
@property (assign,nonatomic) CGSize contentSize; 
@property (assign,nonatomic,__weak) id<CKBrowserSwitcherScrollPreventerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)contentSize;
-(void)layoutSubviews;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setDelegate:(id<CKBrowserSwitcherScrollPreventerDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<CKBrowserSwitcherScrollPreventerDelegate>)delegate;
-(CGPoint)contentOffset;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(BOOL)scrollEnabled;
-(void)setHorizontalScrollView:(UIScrollView *)arg1 ;
-(void)setVerticalScrollView:(UIScrollView *)arg1 ;
-(BOOL)isEngaged;
-(void)setEngaged:(BOOL)arg1 ;
-(UIScrollView *)horizontalScrollView;
-(UIScrollView *)verticalScrollView;
-(void)setSwitching:(BOOL)arg1 ;
-(BOOL)isSwitching;
@end

