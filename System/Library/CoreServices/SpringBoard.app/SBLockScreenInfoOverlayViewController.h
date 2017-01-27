/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBLockOverlayViewController.h>
#import <SpringBoard/SBLockOverlayViewDelegate.h>

@class SBLockScreenInfoOverlayView, NSString;

@interface SBLockScreenInfoOverlayViewController : SBLockOverlayViewController <SBLockOverlayViewDelegate> {

	SBLockScreenInfoOverlayView* _overlayView;
	NSString* _title;

}

@property (assign,nonatomic,__weak) id<SBLockScreenInfoOverlayDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(id)initWithTitle:(id)arg1 ;
-(void)handleTapGestureFromView:(id)arg1 ;
@end

