/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUIApplicationDelegate <NSObject>
@optional
-(BOOL)shouldShowExplicitRestrictionAlertOnLaunch;
-(void)application:(id)arg1 didStopWithOptions:(id)arg2;
-(void)application:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2 JSContext:(id)arg3;
-(void)applicationDidCustomizeTabBarItems:(id)arg1;
-(void)application:(id)arg1 didReselectTabBarItem:(id)arg2;
-(void)application:(id)arg1 didSelectTabBarItem:(id)arg2;
-(void)application:(id)arg1 willTransitionToSize:(CGSize)arg2 withTransitionCoordinator:(id)arg3;
-(BOOL)application:(id)arg1 shouldDismissPopoverOnTraitCollectionChange:(id)arg2;
-(void)application:(id)arg1 didFailToLoadWithError:(id)arg2;
-(id)bootstrapScriptURLForApplication:(id)arg1;
-(id)application:(id)arg1 navigationControllerWithTabBarItem:(id)arg2;
-(void)applicationDidChangeClientContext:(id)arg1;
-(void)applicationDidDisplayFirstPage:(id)arg1;
-(id)legacyScriptInterfaceForApplication:(id)arg1;

@end

