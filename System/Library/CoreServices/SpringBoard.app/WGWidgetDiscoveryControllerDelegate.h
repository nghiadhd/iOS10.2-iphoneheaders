/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WGWidgetDiscoveryControllerDelegate <NSObject>
@optional
-(id)whiteStatusBarAssertionForWidgetDiscoveryController:(id)arg1;
-(void)widgetDiscoveryController:(id)arg1 didEndUsingStatusBarAssertion:(id)arg2;
-(id)widgetDiscoveryController:(id)arg1 preferredViewControllerForPresentingFromViewController:(id)arg2;
-(void)widgetDiscoveryController:(id)arg1 requestUnlockWithCompletion:(/*^block*/id)arg2;
-(void)widgetDiscoveryController:(id)arg1 widgetWithBundleIdentifier:(id)arg2 didEncounterProblematicSnapshotAtURL:(id)arg3;
-(BOOL)widgetDiscoveryController:(id)arg1 shouldPurgeArchivedSnapshotsForWidgetWithBundleIdentifier:(id)arg2;
-(BOOL)widgetDiscoveryControllerShouldIncludeInternalWidgets:(id)arg1;

@end

