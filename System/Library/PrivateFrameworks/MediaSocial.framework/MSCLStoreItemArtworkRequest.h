/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <StoreKitUI/SKUIArtworkRequest.h>

@class MPArtworkCatalog;

@interface MSCLStoreItemArtworkRequest : SKUIArtworkRequest {

	MPArtworkCatalog* _artworkCatalog;
	CGSize _imageSize;

}
-(id)newLoadOperation;
-(id)initWithStoreItem:(id)arg1 imageSize:(CGSize)arg2 ;
@end

