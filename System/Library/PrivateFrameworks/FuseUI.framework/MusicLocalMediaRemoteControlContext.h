/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPAVController, MPAVItem;

@interface MusicLocalMediaRemoteControlContext : NSObject {

	MPAVController* _player;
	MPAVItem* _currentlyPlayingItem;
	unsigned long long _itemPersistentID;

}

@property (nonatomic,readonly) MPAVController * player;                          //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) MPAVItem * currentlyPlayingItem;                  //@synthesize currentlyPlayingItem=_currentlyPlayingItem - In the implementation block
@property (nonatomic,readonly) unsigned long long itemPersistentID;              //@synthesize itemPersistentID=_itemPersistentID - In the implementation block
-(id)init;
-(MPAVController *)player;
-(id)initWithPlayer:(id)arg1 mediaRemoteOptions:(id)arg2 ;
-(MPAVItem *)currentlyPlayingItem;
-(unsigned long long)itemPersistentID;
@end

