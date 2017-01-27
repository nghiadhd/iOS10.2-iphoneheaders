/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightUI/SpotlightUI-Structs.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>

@protocol SPUISearchResultHandlerDelegate;
@class NSString;

@interface SPUISearchResultHandler : NSObject <SKStoreProductViewControllerDelegate, UIDocumentInteractionControllerDelegate> {

	id<SPUISearchResultHandlerDelegate> _delegate;

}

@property (__weak) id<SPUISearchResultHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)requestDeviceUnlockWithSuccessHandler:(/*^block*/id)arg1 ;
+(id)sharedResultHandler;
-(void)setDelegate:(id<SPUISearchResultHandlerDelegate>)arg1 ;
-(id<SPUISearchResultHandlerDelegate>)delegate;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)handleResultSelected:(id)arg1 withFeedback:(id)arg2 wasPop:(BOOL)arg3 ;
-(void)requestAuthIfNecessaryAndPresentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)asyncViewControllerForResult:(id)arg1 preview:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)viewControllerForResult:(id)arg1 preview:(BOOL)arg2 ;
-(BOOL)defaultApplicationExistsAndSupportsOpenInPlaceForResult:(id)arg1 open:(BOOL)arg2 ;
-(void)openUserActivityForResult:(id)arg1 ;
-(BOOL)shouldDisplayContactCardForResult:(id)arg1 ;
-(void)modalViewControllerClosed;
-(void)showViewController:(id)arg1 ;
-(void)requestAuthAndPresentViewController:(id)arg1 animated:(BOOL)arg2 ;
@end

