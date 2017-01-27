/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/MediaStreamPlugins/PhotoSharingPlugin.mediastream/PhotoSharingPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSASModelObserver <NSObject>
@optional
-(void)MSASModel:(id)arg1 didDeleteAllContentsOfAlbum:(id)arg2;
-(void)MSASModel:(id)arg1 didUnsubscribeFromAlbum:(id)arg2;
-(void)MSASModel:(id)arg1 didSubscribeToAlbum:(id)arg2;
-(void)MSASModel:(id)arg1 didDeleteAllCommentsForAssetCollection:(id)arg2 inAlbum:(id)arg3;
-(void)MSASModelDidDeleteAllAlbumsInAlbumList:(id)arg1 info:(id)arg2;
-(void)MSASModel:(id)arg1 didSubscribeToAlbum:(id)arg2 info:(id)arg3;
-(void)MSASModel:(id)arg1 didUnsubscribeFromAlbum:(id)arg2 info:(id)arg3;
-(void)MSASModel:(id)arg1 didDeleteAllContentsOfAlbum:(id)arg2 info:(id)arg3;
-(void)MSASModel:(id)arg1 didDeleteAllCommentsForAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
-(void)MSASModel:(id)arg1 didFinishMarkingAssetCollection:(id)arg2 asViewedInAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
-(void)MSASModel:(id)arg1 didFinishMarkingAssetCollection:(id)arg2 asViewedInAlbum:(id)arg3 error:(id)arg4;
-(void)MSASModelDidReceiveNewServerSideConfiguration:(id)arg1 info:(id)arg2;
-(void)MSASModelDidReceiveNewServerSideConfiguration:(id)arg1;
-(void)MSASModelDidDeleteAllAlbumsInAlbumList:(id)arg1;
-(void)MSASModel:(id)arg1 didFinishMarkingAlbumAsViewed:(id)arg2 info:(id)arg3 error:(id)arg4;
-(void)MSASModel:(id)arg1 didFinishMarkingAlbumAsViewed:(id)arg2 error:(id)arg3;
-(void)MSASModel:(id)arg1 didFinishAcceptingInvitation:(id)arg2 forAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
-(void)MSASModel:(id)arg1 didFinishAcceptingInvitation:(id)arg2 forAlbum:(id)arg3 error:(id)arg4;
-(void)MSASModel:(id)arg1 didFinishRejectingInvitation:(id)arg2 info:(id)arg3 error:(id)arg4;
-(void)MSASModel:(id)arg1 didFinishRejectingInvitation:(id)arg2 error:(id)arg3;
-(void)MSASModel:(id)arg1 didFinishRemovingAccessControlEntry:(id)arg2 fromAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
-(void)MSASModel:(id)arg1 didFinishRemovingAccessControlEntry:(id)arg2 fromAlbum:(id)arg3 error:(id)arg4;
-(void)MSASModel:(id)arg1 didFinishDeletingAssetCollection:(id)arg2 fromAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
-(void)MSASModel:(id)arg1 didFinishDeletingAssetCollection:(id)arg2 fromAlbum:(id)arg3 error:(id)arg4;
-(void)MSASModel:(id)arg1 didFinishMarkingCommentsAsViewedInAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
-(void)MSASModel:(id)arg1 didFinishMarkingCommentsAsViewedInAssetCollection:(id)arg2 inAlbum:(id)arg3 error:(id)arg4;
-(void)MSASModel:(id)arg1 didFinishAddingComment:(id)arg2 toAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5 error:(id)arg6;
-(void)MSASModel:(id)arg1 didFinishAddingComment:(id)arg2 toAssetCollection:(id)arg3 inAlbum:(id)arg4 error:(id)arg5;
-(void)MSASModel:(id)arg1 didFinishDeletingComment:(id)arg2 fromAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5 error:(id)arg6;
-(void)MSASModel:(id)arg1 didFinishDeletingComment:(id)arg2 fromAssetCollection:(id)arg3 inAlbum:(id)arg4 error:(id)arg5;
-(void)MSASModelWillBeForgotten:(id)arg1 info:(id)arg2;
-(void)MSASModelWillBeForgotten:(id)arg1;
-(void)MSASModel:(id)arg1 didFailToFindAssetsForAssetCollectionGUID:(id)arg2 assetTypeFlags:(int)arg3;
-(void)MSASModel:(id)arg1 didFindAlbumMetadataChange:(id)arg2 info:(id)arg3;
-(void)MSASModel:(id)arg1 didFindAlbumMetadataChange:(id)arg2;
-(void)MSASModel:(id)arg1 didFindNewAlbum:(id)arg2 info:(id)arg3;
-(void)MSASModel:(id)arg1 didFindNewAlbum:(id)arg2;
-(void)MSASModel:(id)arg1 didFindDeletedAlbum:(id)arg2 info:(id)arg3;
-(void)MSASModel:(id)arg1 didFindDeletedAlbum:(id)arg2;
-(void)MSASModel:(id)arg1 didFindAccessControlChange:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
-(void)MSASModel:(id)arg1 didFindAccessControlChange:(id)arg2 inAlbum:(id)arg3;
-(void)MSASModel:(id)arg1 didFindNewAccessControl:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
-(void)MSASModel:(id)arg1 didFindNewAccessControl:(id)arg2 inAlbum:(id)arg3;
-(void)MSASModel:(id)arg1 didFindDeletedAccessControl:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
-(void)MSASModel:(id)arg1 didFindDeletedAccessControl:(id)arg2 inAlbum:(id)arg3;
-(void)MSASModel:(id)arg1 didFindInvitationChange:(id)arg2 info:(id)arg3;
-(void)MSASModel:(id)arg1 didFindInvitationChange:(id)arg2;
-(void)MSASModel:(id)arg1 didFindNewInvitation:(id)arg2 info:(id)arg3;
-(void)MSASModel:(id)arg1 didFindNewInvitation:(id)arg2;
-(void)MSASModel:(id)arg1 didFindDeletedInvitation:(id)arg2 info:(id)arg3;
-(void)MSASModel:(id)arg1 didFindDeletedInvitation:(id)arg2;
-(void)MSASModel:(id)arg1 didFindAssetCollectionChange:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
-(void)MSASModel:(id)arg1 didFindAssetCollectionChange:(id)arg2 inAlbum:(id)arg3;
-(void)MSASModel:(id)arg1 didFindNewAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
-(void)MSASModel:(id)arg1 didFindNewAssetCollection:(id)arg2 inAlbum:(id)arg3;
-(void)MSASModel:(id)arg1 didFindDeletedAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
-(void)MSASModel:(id)arg1 didFindDeletedAssetCollection:(id)arg2 inAlbum:(id)arg3;
-(void)MSASModel:(id)arg1 didFindCommentChange:(id)arg2 inAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5;
-(void)MSASModel:(id)arg1 didFindCommentChange:(id)arg2 inAssetCollection:(id)arg3 inAlbum:(id)arg4;
-(void)MSASModel:(id)arg1 didFindNewComment:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5;
-(void)MSASModel:(id)arg1 didFindNewComment:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4;
-(void)MSASModel:(id)arg1 didDeleteComment:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5;
-(void)MSASModel:(id)arg1 didDeleteComment:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4;
-(void)MSASModel:(id)arg1 didFindLastViewedCommentDate:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5;
-(void)MSASModel:(id)arg1 didFindLastViewedCommentDate:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4;
-(void)MSASModel:(id)arg1 didMarkAssetCollection:(id)arg2 asHavingUnreadComments:(BOOL)arg3 inAlbum:(id)arg4 info:(id)arg5;
-(void)MSASModel:(id)arg1 didMarkAssetCollection:(id)arg2 asHavingUnreadComments:(BOOL)arg3 inAlbum:(id)arg4;
-(void)MSASModel:(id)arg1 didMarkAlbum:(id)arg2 asHavingUnreadContent:(BOOL)arg3 info:(id)arg4;
-(void)MSASModel:(id)arg1 didMarkAlbum:(id)arg2 asHavingUnreadContent:(BOOL)arg3;
-(void)MSASModel:(id)arg1 didUpdateUnviewedAssetCollectionCount:(int)arg2 forAlbum:(id)arg3 info:(id)arg4;
-(void)MSASModel:(id)arg1 didUpdateUnviewedAssetCollectionCount:(int)arg2 forAlbum:(id)arg3;
-(void)MSASModel:(id)arg1 didFindGlobalResetSyncInfo:(id)arg2;
-(void)MSASModel:(id)arg1 didFinishCheckingForChangesInfo:(id)arg2 error:(id)arg3;
-(void)MSASModel:(id)arg1 didFinishSubscribingToAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
-(void)MSASModel:(id)arg1 didFinishSubscribingToAlbum:(id)arg2 error:(id)arg3;
-(void)MSASModel:(id)arg1 didFinishUnsubscribingFromAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
-(void)MSASModel:(id)arg1 didFinishUnsubscribingFromAlbum:(id)arg2 error:(id)arg3;
-(void)MSASModel:(id)arg1 didFinishEnqueueingAssetsForDownload:(id)arg2 inAlbumWithGUID:(id)arg3;
-(void)MSASModel:(id)arg1 didFinishRetrievingAsset:(id)arg2 inAlbum:(id)arg3 error:(id)arg4;
-(void)MSASModel:(id)arg1 didFinishDeletingAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
-(void)MSASModel:(id)arg1 didFinishDeletingAlbum:(id)arg2 error:(id)arg3;
-(void)MSASModel:(id)arg1 didFinishAddingAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
-(void)MSASModel:(id)arg1 didFinishAddingAlbum:(id)arg2 error:(id)arg3;
-(void)MSASModel:(id)arg1 didFinishModifyingAlbumMetadata:(id)arg2 info:(id)arg3 error:(id)arg4;
-(void)MSASModel:(id)arg1 didFinishModifyingAlbumMetadata:(id)arg2 error:(id)arg3;
-(void)MSASModel:(id)arg1 didRequestDerivativesForAssetCollections:(id)arg2 specifications:(id)arg3 info:(id)arg4 completionBlock:(/*^block*/id)arg5;
-(void)MSASModel:(id)arg1 didRequestDerivativesForAssetCollections:(id)arg2 specifications:(id)arg3 completionBlock:(/*^block*/id)arg4;
-(void)MSASModel:(id)arg1 didFinishAddingAssetCollection:(id)arg2 toAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
-(void)MSASModel:(id)arg1 didFinishAddingAssetCollection:(id)arg2 toAlbum:(id)arg3 error:(id)arg4;
-(void)MSASModel:(id)arg1 didFinishAddingAccessControlEntry:(id)arg2 toAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
-(void)MSASModel:(id)arg1 didFinishAddingAccessControlEntry:(id)arg2 toAlbum:(id)arg3 error:(id)arg4;
-(void)MSASModel:(id)arg1 didFinishSendingInvitationByPhone:(id)arg2 toAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
-(void)MSASModel:(id)arg1 didFindNewAlbums:(id)arg2 info:(id)arg3;
-(void)MSASModel:(id)arg1 didFindDeletedAlbums:(id)arg2 info:(id)arg3;
-(void)MSASModel:(id)arg1 didFindNewAssetCollections:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
-(void)MSASModel:(id)arg1 didFindDeletedAssetCollections:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
-(void)MSASModel:(id)arg1 didFindNewAccessControls:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
-(void)MSASModel:(id)arg1 didFindDeletedAccessControls:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
-(void)MSASModel:(id)arg1 didFindNewInvitations:(id)arg2 info:(id)arg3;
-(void)MSASModel:(id)arg1 didFindDeletedInvitations:(id)arg2 info:(id)arg3;
-(void)MSASModel:(id)arg1 didFindNewComments:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5;
-(void)MSASModel:(id)arg1 didFindDeletedComments:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5;

@end

