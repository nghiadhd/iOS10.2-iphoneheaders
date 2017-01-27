/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BRCUserNotifier <NSObject>
@required
-(void)close;
-(void)moveToFront;
-(void)showJoinDialogForShareMetadata:(id)arg1 session:(id)arg2 reply:(/*^block*/id)arg3;
-(void)showErrorSignInToiCloudForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2;
-(void)showErrorTurnOniCloudDriveForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2;
-(void)showErrorInstallNativeAppForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2;
-(void)showErrorNativeAppDisabledByProfileForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2;
-(void)showErrorReasonUnknownForShareURL:(id)arg1 reply:(/*^block*/id)arg2;
-(void)showErrorDeviceOfflineForShareURL:(id)arg1 reply:(/*^block*/id)arg2;
-(void)showErrorServerNotReachableForShareURL:(id)arg1 reply:(/*^block*/id)arg2;
-(void)showErrorItemUnavailableOrAccessRestrictedForShareURL:(id)arg1 reply:(/*^block*/id)arg2;
-(void)showErrorParticipantLimitReachedForShareURL:(id)arg1 reply:(/*^block*/id)arg2;
-(void)showErroriCloudDriveAppNotVisibleForShareURL:(id)arg1 reply:(/*^block*/id)arg2;

@end

