/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class SBAlert;

@interface SBAlertView : UIView {

	SBAlert* _alert;
	unsigned _shouldAnimateIn : 1;

}
-(void)layoutForInterfaceOrientation:(long long)arg1 ;
-(void)alertDisplayWillBecomeVisible;
-(void)alertDisplayBecameVisible;
-(BOOL)isReadyToBeRemovedFromView;
-(BOOL)isAnimatingOut;
-(BOOL)shouldAddClippingViewDuringRotation;
-(void)alertWindowViewControllerResizedFromContentFrame:(CGRect)arg1 toContentFrame:(CGRect)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)dismiss;
-(BOOL)shouldAnimateIn;
-(void)setShouldAnimateIn:(BOOL)arg1 ;
-(id)alert;
-(void)setAlert:(id)arg1 ;
@end

