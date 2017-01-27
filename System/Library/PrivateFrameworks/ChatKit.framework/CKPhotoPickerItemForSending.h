/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore, CKPhotoPickerItemForSendingDelegate;
@class NSObject, NSURL, UIImage;

@interface CKPhotoPickerItemForSending : NSObject {

	NSObject*<OS_dispatch_semaphore> _outstandingWork;
	BOOL _isVideo;
	BOOL _sendIris;
	NSURL* _localURL;
	NSURL* _assetURL;
	UIImage* _thumbnail;
	NSURL* _extraVideoURL;
	id<CKPhotoPickerItemForSendingDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CKPhotoPickerItemForSendingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSURL * localURL;                                                   //@synthesize localURL=_localURL - In the implementation block
@property (nonatomic,readonly) NSURL * assetURL;                                                   //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,readonly) BOOL isVideo;                                                       //@synthesize isVideo=_isVideo - In the implementation block
@property (retain) UIImage * thumbnail;                                                            //@synthesize thumbnail=_thumbnail - In the implementation block
@property (assign,nonatomic) BOOL sendIris;                                                        //@synthesize sendIris=_sendIris - In the implementation block
@property (nonatomic,retain) NSURL * extraVideoURL;                                                //@synthesize extraVideoURL=_extraVideoURL - In the implementation block
-(void)setDelegate:(id<CKPhotoPickerItemForSendingDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<CKPhotoPickerItemForSendingDelegate>)delegate;
-(NSURL *)localURL;
-(UIImage *)thumbnail;
-(BOOL)isVideo;
-(void)setThumbnail:(UIImage *)arg1 ;
-(NSURL *)assetURL;
-(void)waitForOutstandingWork;
-(NSURL *)extraVideoURL;
-(BOOL)sendIris;
-(void)_fetchAndPersistImageDataForAsset:(id)arg1 withImageManager:(id)arg2 ;
-(id)initWithImageManager:(id)arg1 asset:(id)arg2 delegate:(id)arg3 ;
-(id)initWithAssetURL:(id)arg1 isVideo:(BOOL)arg2 ;
-(void)setSendIris:(BOOL)arg1 ;
-(void)setExtraVideoURL:(NSURL *)arg1 ;
@end

