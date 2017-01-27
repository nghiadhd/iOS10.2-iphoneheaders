/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/appstored-Structs.h>
#import <StoreServices/SSMemoryEntity.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, SSDownloadPolicy;

@interface Download : SSMemoryEntity <NSCopying> {

	NSArray* _assets;
	SSDownloadPolicy* _downloadPolicy;

}

@property (nonatomic,copy) NSArray * assets;                               //@synthesize assets=_assets - In the implementation block
@property (nonatomic,copy) SSDownloadPolicy * downloadPolicy;              //@synthesize downloadPolicy=_downloadPolicy - In the implementation block
+(Class)databaseEntityClass;
-(BOOL)_setDatabasePropertiesWithExternalMetadata:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setAssetsWithExternalAssets:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setThumbnailImageWithExternalAssets:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setAssetsWithExternalThinnedAssets:(id)arg1 error:(id*)arg2 ;
-(id)_copyValidAssetsWithExternalAssets:(id)arg1 validateVariants:(BOOL)arg2 ;
-(id)initWithExternalManifestDictionary:(id)arg1 ;
-(id)anyAssetForAssetType:(id)arg1 ;
-(id)assetForAssetIdentifier:(long long)arg1 ;
-(void)removeAssetsWithAssetType:(id)arg1 ;
-(id)copyStoreDownloadMetadata;
-(void)unionNetworkConstraints:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SSDownloadPolicy *)downloadPolicy;
-(void)setDownloadPolicy:(SSDownloadPolicy *)arg1 ;
-(void)setAssets:(NSArray *)arg1 ;
-(NSArray *)assets;
-(id)initWithStoreDownload:(id)arg1 ;
-(id)initWithActivity:(id)arg1 ;
@end
