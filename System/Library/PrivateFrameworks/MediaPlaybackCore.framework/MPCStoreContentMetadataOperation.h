/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, MPCStoreContentMetadataResponse, NSDictionary, NSArray;

@interface MPCStoreContentMetadataOperation : MPAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	MPCStoreContentMetadataResponse* _response;
	NSDictionary* _storeBagDictionary;
	NSArray* _storeIDs;

}

@property (copy) NSDictionary * storeBagDictionary; 
@property (copy) NSArray * storeIDs; 
@property (readonly) MPCStoreContentMetadataResponse * response; 
-(id)init;
-(MPCStoreContentMetadataResponse *)response;
-(NSArray *)storeIDs;
-(void)setStoreIDs:(NSArray *)arg1 ;
-(void)execute;
-(void)setStoreBagDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)storeBagDictionary;
@end

