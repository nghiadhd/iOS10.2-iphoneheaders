/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class AVAsset;

@interface ISAsset : NSObject {

	int _photoEXIFOrientation;
	AVAsset* _videoAsset;
	CGImageRef _photo;
	double _photoTime;
	unsigned long long _options;

}

@property (nonatomic,copy,readonly) AVAsset * videoAsset;               //@synthesize videoAsset=_videoAsset - In the implementation block
@property (nonatomic,readonly) CGImageRef photo;                        //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) double photoTime;                        //@synthesize photoTime=_photoTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS4 photoCMTime; 
@property (nonatomic,readonly) int photoEXIFOrientation;                //@synthesize photoEXIFOrientation=_photoEXIFOrientation - In the implementation block
@property (nonatomic,readonly) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) BOOL hasColorAdjustments; 
+(id)assetForURL:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned long long)options;
-(CGImageRef)photo;
-(AVAsset *)videoAsset;
-(double)photoTime;
-(id)initWithVideoAsset:(id)arg1 photo:(CGImageRef)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4 options:(unsigned long long)arg5 ;
-(id)initWithVideoAsset:(id)arg1 photo:(CGImageRef)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4 ;
-(int)photoEXIFOrientation;
-(void)resetAVObjects;
-(SCD_Struct_IS4)photoCMTime;
-(BOOL)hasColorAdjustments;
-(id)initWithVideoAsset:(id)arg1 photo:(CGImageRef)arg2 photoTime:(double)arg3 options:(unsigned long long)arg4 ;
-(id)initWithVideoAsset:(id)arg1 photo:(CGImageRef)arg2 photoTime:(double)arg3 ;
@end

