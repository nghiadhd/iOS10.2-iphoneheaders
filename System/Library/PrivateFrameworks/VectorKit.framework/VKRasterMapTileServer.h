/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, NSObject;

@interface VKRasterMapTileServer : NSObject {

	NSMutableDictionary* _activeTileCreators;
	NSMutableDictionary* _pendingRequests;
	NSMutableSet* _tileCreators;
	unsigned _superTileSize;
	NSObject*<OS_dispatch_queue> _homeQueue;

}

@property (nonatomic,readonly) unsigned superTileSize;              //@synthesize superTileSize=_superTileSize - In the implementation block
-(id)init;
-(void)dealloc;
-(id)detailedDescription;
-(id)detailedDescriptionDictionaryRepresentation;
-(void)renderRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned)superTileSize;
-(void)_renderRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithSuperTileSize:(unsigned)arg1 homeQueue:(id)arg2 ;
@end

