/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaLibraryPlaybackItemMetadata.h>

@class NSString;

@interface VideosExtrasPlaybackItemMetadata : MPMediaLibraryPlaybackItemMetadata {

	NSString* _buyParameters;
	unsigned long long _mediaType;
	long long _storeAdamID;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)storeAdamID;
-(BOOL)allowsInitiatingPlayWhileDownload;
-(BOOL)_calculateAllowsCellularNetworking;
-(id)buyParameters;
-(unsigned long long)contentType;
-(id)initWithStoreAdamID:(long long)arg1 buyParameters:(id)arg2 mediaType:(unsigned long long)arg3 ;
-(void)_videosPlaybackSettingsChanged:(id)arg1 ;
@end

