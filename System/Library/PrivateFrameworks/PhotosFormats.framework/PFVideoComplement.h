/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosFormats/PhotosFormats-Structs.h>
@class NSString, NSDictionary;

@interface PFVideoComplement : NSObject {

	NSString* _imagePath;
	NSString* _videoPath;
	NSDictionary* _metadata;
	NSString* _originalPairingIdentifier;
	SCD_Struct_PF0 _originalImageDisplayTime;
	SCD_Struct_PF0 _originalVideoDuration;
	BOOL _didReadOriginalMetadata;

}

@property (nonatomic,copy,readonly) NSString * videoPath; 
@property (nonatomic,copy,readonly) NSString * imagePath; 
@property (nonatomic,copy,readonly) NSString * pairingIdentifier; 
@property (nonatomic,readonly) SCD_Struct_PF0 imageDisplayTime; 
@property (nonatomic,copy,readonly) NSString * originalPairingIdentifier; 
@property (nonatomic,readonly) SCD_Struct_PF0 originalImageDisplayTime; 
@property (nonatomic,readonly) SCD_Struct_PF0 originalVideoDuration; 
@property (nonatomic,copy,readonly) NSString * videoPath;                              //@synthesize videoPath=_videoPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * imagePath;                              //@synthesize imagePath=_imagePath - In the implementation block
-(id)init;
-(NSString *)videoPath;
-(NSString *)originalPairingIdentifier;
-(SCD_Struct_PF0)originalImageDisplayTime;
-(void)_readMetadataIfNeeded;
-(NSString *)pairingIdentifier;
-(SCD_Struct_PF0)imageDisplayTime;
-(SCD_Struct_PF0)originalVideoDuration;
-(id)propertyListRepresentation;
-(id)initWithPropertyList:(id)arg1 ;
-(id)initWithBundleAtURL:(id)arg1 ;
-(NSString *)imagePath;
-(id)initWithPathToVideo:(id)arg1 pathToImage:(id)arg2 ;
-(BOOL)writeToBundleAtURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithPathToVideo:(id)arg1 pathToImage:(id)arg2 imageDisplayTime:(SCD_Struct_PF0)arg3 pairingIdentifier:(id)arg4 ;
@end

