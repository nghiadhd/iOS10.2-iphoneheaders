/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLItemViewController.h>
#import <UIKit/UIDocumentPasswordViewDelegate.h>

@interface QLPasswordItemViewController : QLItemViewController <UIDocumentPasswordViewDelegate> {

	/*^block*/id _completionBlock;

}
-(void)invalidate;
-(void)loadView;
-(void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2 ;
-(void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewWillDisappear:(BOOL)arg1 ;
-(BOOL)canPinchToDismiss;
-(BOOL)canEnterFullScreen;
-(id)passwordView;
-(BOOL)canSwipeToDismiss;
@end

