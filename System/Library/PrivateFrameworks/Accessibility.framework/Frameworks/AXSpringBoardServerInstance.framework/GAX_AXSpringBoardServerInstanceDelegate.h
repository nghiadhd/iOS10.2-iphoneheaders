/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GAX_AXSpringBoardServerInstanceDelegate <AXSpringBoardServerInstanceDelegate>
@required
-(void)serverInstance:(id)arg1 activateApp:(id)arg2;
-(void)endRequiringWallpaperWithServerInstance:(id)arg1;
-(id)serverInstance:(id)arg1 appIconForBundleID:(id)arg2 format:(int)arg3;
-(id)serverInstance:(id)arg1 appNameForDisplayID:(id)arg2;
-(id)serverInstance:(id)arg1 mainScreenContextHostManagerForApplicationWithIdentifier:(id)arg2;
-(id)serverInstance:(id)arg1 hostViewForApplicationContextHostManager:(id)arg2 enableAndOrderFront:(BOOL)arg3;
-(void)serverInstance:(id)arg1 disableHostingForApplicationContextHostManager:(id)arg2 withHostView:(id)arg3;
-(id)snapshotInCallServiceRemoteViewWithServerInstance:(id)arg1;
-(id)mainSceneWindowWithServerInstance:(id)arg1;
-(id)mainScreenAlertWindowWithServerInstance:(id)arg1;
-(void)quitTopApplicationWithServerInstance:(id)arg1;
-(void)updateLockAndIdleTimersWithServerInstance:(id)arg1;
-(void)beginRequiringWallpaperWithServerInstance:(id)arg1;
-(void)animateWallpaperStyleToNormalWithServerInstance:(id)arg1;
-(void)animateWallpaperStyleToOriginalWithServerInstance:(id)arg1;

@end

