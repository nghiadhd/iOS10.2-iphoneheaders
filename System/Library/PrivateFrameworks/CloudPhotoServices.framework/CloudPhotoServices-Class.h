/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoServices.framework/CloudPhotoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CPLDerivativeGenerator.h>

@interface CloudPhotoServices : NSObject <CPLDerivativeGenerator>
+(long long)status;
+(id)_minionConnection;
+(void)_sendRetryNumber:(int)arg1 toRemoteObjectProxyWithCommand:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
+(void)_sendCommandToRemoteObjectProxy:(/*^block*/id)arg1 withErrorHandler:(/*^block*/id)arg2 ;
+(void)_generateImageDerivativeResourcesFromInputResource:(id)arg1 destinationDirectory:(id)arg2 isAdjusted:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)_generateVideoDerivativeResourcesFromInputResource:(id)arg1 withCPLAdjustments:(id)arg2 destinationDirectory:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(unsigned long long)_bestImageResourceTypeForPixelCount:(long long)arg1 ;
+(id)_createCPLResourceFromURL:(id)arg1 withResourceType:(unsigned long long)arg2 uniformTypeIdentifier:(id)arg3 itemIdentifier:(id)arg4 ;
+(void)_createJPEGResourcesFromInputJPEGURL:(id)arg1 resourceTypes:(id)arg2 withItemIdentifier:(id)arg3 destinationDirectory:(id)arg4 outputResources:(id)arg5 convertToSRGB:(BOOL)arg6 ;
+(id)_filenameForResourceWithItemIdentifier:(id)arg1 resourceType:(unsigned long long)arg2 extension:(id)arg3 ;
+(void)generatePosterFrameForVideoAtURL:(id)arg1 maximumPixelCount:(long long)arg2 destinationURL:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)_createVideoResourcesFromInputURL:(id)arg1 withItemIdentifier:(id)arg2 videoAdjustments:(id)arg3 resourceType:(unsigned long long)arg4 forIris:(BOOL)arg5 destinationDirectory:(id)arg6 outputResources:(id)arg7 ;
+(void)_createPosterFrameResourcesFromInputURL:(id)arg1 withItemIdentifier:(id)arg2 destinationDirectory:(id)arg3 outputResources:(id)arg4 ;
+(void)transcodeVideoAtURL:(id)arg1 withAdjustments:(id)arg2 destinationURL:(id)arg3 presetName:(id)arg4 outputFileType:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
+(BOOL)isUnsupportedOriginalFormatError:(id)arg1 ;
+(void)generateDerivativeResourcesFromInputResource:(id)arg1 withAdjustments:(id)arg2 destinationDirectory:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)resizeImageAtURL:(id)arg1 destinationURL:(id)arg2 maximumPixelCount:(long long)arg3 bakeInOrientation:(BOOL)arg4 colorOutput:(long long)arg5 completionHandler:(/*^block*/id)arg6 ;
@end

