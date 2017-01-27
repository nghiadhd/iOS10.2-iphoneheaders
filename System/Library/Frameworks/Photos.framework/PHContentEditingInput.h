/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, AVAsset, NSDate, CLLocation, NSString, PHAdjustmentData, UIImage, NSURL, PHLivePhoto;

@interface PHContentEditingInput : NSObject {

	NSObject*<OS_dispatch_queue> _avAssetIsolationQueue;
	NSMutableArray* _sandboxExtensionHandles;
	int _fullSizeImageOrientation;
	AVAsset* _avAsset;
	long long _mediaType;
	unsigned long long _mediaSubtypes;
	NSDate* _creationDate;
	CLLocation* _location;
	NSString* _uniformTypeIdentifier;
	PHAdjustmentData* _adjustmentData;
	UIImage* _displaySizeImage;
	NSURL* _fullSizeImageURL;
	PHLivePhoto* _livePhoto;
	long long _baseVersion;
	NSURL* _videoURL;

}

@property (assign,nonatomic) long long mediaType;                            //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) unsigned long long mediaSubtypes;               //@synthesize mediaSubtypes=_mediaSubtypes - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                            //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) CLLocation * location;                            //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) PHAdjustmentData * adjustmentData;              //@synthesize adjustmentData=_adjustmentData - In the implementation block
@property (assign,nonatomic) long long baseVersion;                          //@synthesize baseVersion=_baseVersion - In the implementation block
@property (nonatomic,retain) UIImage * displaySizeImage;                     //@synthesize displaySizeImage=_displaySizeImage - In the implementation block
@property (nonatomic,copy) NSString * uniformTypeIdentifier;                 //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * fullSizeImageURL;                         //@synthesize fullSizeImageURL=_fullSizeImageURL - In the implementation block
@property (assign,nonatomic) int fullSizeImageOrientation;                   //@synthesize fullSizeImageOrientation=_fullSizeImageOrientation - In the implementation block
@property (nonatomic,retain) PHLivePhoto * livePhoto;                        //@synthesize livePhoto=_livePhoto - In the implementation block
@property (nonatomic,copy) NSURL * videoURL;                                 //@synthesize videoURL=_videoURL - In the implementation block
@property (readonly) AVAsset * avAsset; 
@property (readonly) AVAsset * audiovisualAsset;                             //@synthesize avAsset=_avAsset - In the implementation block
-(NSURL *)fullSizeImageURL;
-(id)init;
-(void)dealloc;
-(id)description;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setUniformTypeIdentifier:(NSString *)arg1 ;
-(void)consumeSandboxExtensionToken:(id)arg1 ;
-(void)requestFullSizeImageURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(UIImage *)displaySizeImage;
-(int)fullSizeImageOrientation;
-(void)_invalidateAVAsset;
-(void)loadFullSizeImageDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)imagePreview;
-(long long)mediaType;
-(BOOL)isMediaSubtype:(unsigned long long)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(PHAdjustmentData *)adjustmentData;
-(void)setLivePhoto:(PHLivePhoto *)arg1 ;
-(void)setBaseVersion:(long long)arg1 ;
-(long long)baseVersion;
-(void)setAdjustmentData:(PHAdjustmentData *)arg1 ;
-(id)videoComposition;
-(NSURL *)videoURL;
-(NSString *)uniformTypeIdentifier;
-(unsigned long long)mediaSubtypes;
-(void)setVideoURL:(NSURL *)arg1 ;
-(void)setMediaType:(long long)arg1 ;
-(void)setMediaSubtypes:(unsigned long long)arg1 ;
-(void)setDisplaySizeImage:(UIImage *)arg1 ;
-(void)setFullSizeImageOrientation:(int)arg1 ;
-(void)setFullSizeImageURL:(NSURL *)arg1 ;
-(PHLivePhoto *)livePhoto;
-(AVAsset *)audiovisualAsset;
-(AVAsset *)avAsset;
-(id)audioMix;
@end

