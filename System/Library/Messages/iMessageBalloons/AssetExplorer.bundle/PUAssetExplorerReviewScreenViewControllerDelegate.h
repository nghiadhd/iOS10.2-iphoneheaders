/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/AssetExplorer.bundle/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PUAssetExplorerReviewScreenViewControllerDelegate <NSObject>
@optional
-(BOOL)assetExplorerReviewScreenViewController:(id)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
-(BOOL)assetExplorerReviewScreenViewController:(id)arg1 shouldEnableActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
-(void)assetExplorerReviewScreenViewControllerDidPressRetake:(id)arg1;

@required
-(void)assetExplorerReviewScreenViewControllerDidPressCancel:(id)arg1;
-(void)assetExplorerReviewScreenViewController:(id)arg1 didPressDoneWithSelectedAssetUUIDs:(id)arg2 livePhotoDisabledAssetUUIDs:(id)arg3 substituteAssetsByUUID:(id)arg4;

@end

