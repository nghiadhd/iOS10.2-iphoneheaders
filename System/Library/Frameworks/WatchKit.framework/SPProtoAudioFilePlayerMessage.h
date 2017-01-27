/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SPProtoAudioFilePlayerAsset, SPProtoAudioFilePlayerItem, SPProtoAudioFileQueuePlayer;

@interface SPProtoAudioFilePlayerMessage : PBCodable <NSCopying> {

	SPProtoAudioFilePlayerAsset* _asset;
	SPProtoAudioFilePlayerItem* _playerItem;
	SPProtoAudioFileQueuePlayer* _queuePlayer;

}

@property (nonatomic,readonly) BOOL hasAsset; 
@property (nonatomic,retain) SPProtoAudioFilePlayerAsset * asset;                    //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayerItem; 
@property (nonatomic,retain) SPProtoAudioFilePlayerItem * playerItem;                //@synthesize playerItem=_playerItem - In the implementation block
@property (nonatomic,readonly) BOOL hasQueuePlayer; 
@property (nonatomic,retain) SPProtoAudioFileQueuePlayer * queuePlayer;              //@synthesize queuePlayer=_queuePlayer - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(SPProtoAudioFilePlayerAsset *)asset;
-(void)setAsset:(SPProtoAudioFilePlayerAsset *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(SPProtoAudioFilePlayerItem *)playerItem;
-(void)setPlayerItem:(SPProtoAudioFilePlayerItem *)arg1 ;
-(void)setQueuePlayer:(SPProtoAudioFileQueuePlayer *)arg1 ;
-(BOOL)hasPlayerItem;
-(BOOL)hasQueuePlayer;
-(SPProtoAudioFileQueuePlayer *)queuePlayer;
-(BOOL)hasAsset;
@end

