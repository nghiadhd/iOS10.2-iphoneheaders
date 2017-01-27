/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:34:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SSUpdatableAssetCacheManager : NSObject {

	NSString* _clientIdentifier;

}
-(id)manifestsDirectoryURL;
-(id)currentManifestFileURL;
-(BOOL)setCacheURLsOnManifestAndAssets:(id)arg1 error:(id*)arg2 ;
-(id)cacheRoot;
-(id)assetsDirectoryURL;
-(id)assetFileName:(id)arg1 ;
-(id)manifestFileName:(id)arg1 ;
-(id)manifestFileURL:(id)arg1 ;
-(id)validatePath:(id)arg1 ;
-(id)assetFileURL:(id)arg1 ;
-(id)allCachedManifests;
-(id)loadCurrentCachedManifest;
-(id)initWithClientIdentifier:(id)arg1 ;
@end

