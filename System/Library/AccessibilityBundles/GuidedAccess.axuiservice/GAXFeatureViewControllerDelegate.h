/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GAXFeatureViewControllerDelegate <NSObject>
@optional
-(id)viewForPresentingOverlayUserInterfaceForFeatureViewController:(id)arg1;
-(void)featureViewController:(id)arg1 touchSystemFeatureDidChange:(BOOL)arg2;
-(void)featureViewController:(id)arg1 willPresentPopoverControllerInOverlayUserInterfaceView:(id)arg2;
-(void)featureViewController:(id)arg1 didDismissPopoverControllerFromOverlayUserInterfaceView:(id)arg2;

@required
-(BOOL)shouldDisplayMiniToolbarForController:(id)arg1;

@end

