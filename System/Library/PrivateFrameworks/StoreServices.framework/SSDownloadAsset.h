/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:34:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSEntity.h>

@class SSURLRequestProperties, NSString, NSURLRequest, NSArray;

@interface SSDownloadAsset : SSEntity {

	long long _assetType;
	SSURLRequestProperties* _localProperties;

}

@property (readonly) long long fileSize; 
@property (readonly) NSString * downloadFileName; 
@property (readonly) NSString * downloadPath; 
@property (readonly) NSString * finalizedPath; 
@property (getter=isExternal,readonly) BOOL external; 
@property (readonly) SSURLRequestProperties * URLRequestProperties; 
@property (retain,readonly) NSURLRequest * URLRequest; 
@property (readonly) NSArray * sinfs; 
+(long long)_existsMessage;
+(long long)_getExternalValuesMessage;
+(long long)_getValueMessage;
+(long long)_setValuesMessage;
+(id)assetWithURL:(id)arg1 type:(long long)arg2 ;
-(long long)_legacyAssetType;
-(void)_resetLocalIVars;
-(id)_copyURLRequestProperties;
-(long long)bytesUploadTotal;
-(id)initWithURLRequest:(id)arg1 type:(long long)arg2 ;
-(NSString *)downloadFileName;
-(NSString *)downloadPath;
-(NSString *)finalizedPath;
-(void)dealloc;
-(BOOL)isExternal;
-(long long)fileSize;
-(NSArray *)sinfs;
-(id)copyXPCEncoding;
-(long long)bytesDownloaded;
-(SSURLRequestProperties *)URLRequestProperties;
-(id)initWithURLRequest:(id)arg1 ;
-(NSURLRequest *)URLRequest;
-(id)initWithURLRequestProperties:(id)arg1 ;
-(long long)assetType;
-(long long)bytesUploaded;
@end

