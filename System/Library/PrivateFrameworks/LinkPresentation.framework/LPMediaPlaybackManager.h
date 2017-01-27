/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface LPMediaPlaybackManager : NSObject {

	NSHashTable* _mediaPlayers;

}
+(id)shared;
-(id)init;
-(id)audioSession;
-(void)_updateAudioSessionCategory;
-(void)addMediaPlayer:(id)arg1 ;
-(void)removeMediaPlayer:(id)arg1 ;
-(void)mediaPlayer:(id)arg1 didChangePlayingState:(BOOL)arg2 ;
-(void)mediaPlayer:(id)arg1 didChangeMutedState:(BOOL)arg2 ;
-(void)_deactivateAllPlayingMediaPlayersExcept:(id)arg1 ;
-(BOOL)_sharedSessionHasPlayingAudio;
@end

