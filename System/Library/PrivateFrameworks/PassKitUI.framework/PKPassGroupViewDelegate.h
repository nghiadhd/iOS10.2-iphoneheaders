/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPassGroupViewDelegate <NSObject>
@optional
-(void)groupViewTapped:(id)arg1;
-(BOOL)groupViewShouldAllowPanning:(id)arg1;
-(void)groupViewPanDidBegin:(id)arg1;
-(void)groupViewPanDidEnd:(id)arg1;
-(void)groupView:(id)arg1 panned:(CGPoint)arg2 withVelocity:(CGPoint)arg3;
-(void)groupViewDidUpdatePageControlVisibility:(id)arg1;
-(BOOL)groupViewShouldAllowPassFlip:(id)arg1;
-(void)groupViewFrontPassDidFlip:(id)arg1 animated:(BOOL)arg2;
-(BOOL)groupViewShouldAllowPassResize:(id)arg1;
-(void)groupViewFrontPassDidResize:(id)arg1 animated:(BOOL)arg2;
-(void)groupView:(id)arg1 didUpdatePassView:(id)arg2;
-(void)groupView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
-(BOOL)groupView:(id)arg1 deleteButtonEnabledForPass:(id)arg2;
-(void)groupView:(id)arg1 flipButtonPressedForPass:(id)arg2;
-(void)groupView:(id)arg1 resizeButtonPressedForPass:(id)arg2;
-(void)groupView:(id)arg1 didScrollToPassView:(id)arg2;
-(BOOL)groupViewPassesGrowWhenFlipped:(id)arg1;
-(BOOL)groupViewPassesGrowCenteredWhenFlipped:(id)arg1;
-(unsigned long long)groupViewPassesSuppressedContent:(id)arg1;
-(id)groupViewReusablePassViewQueue:(id)arg1;
-(CGRect*)groupView:(id)arg1 targetPageControlFrameForProposedFrame:(CGRect)arg2;
-(long long)groupViewContentModeForFrontmostPassWhenStacked:(id)arg1;
-(long long)groupViewContentModeForFrontmostPassWhenPiled:(id)arg1 withDefaultContentMode:(long long)arg2;

@end

