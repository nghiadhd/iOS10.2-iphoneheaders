/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TUSoundPlayer;

@interface TUCallSoundPlayer : NSObject {

	TUSoundPlayer* _player;
	long long _currentlyPlayingSoundType;

}

@property (nonatomic,retain) TUSoundPlayer * player;                           //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) long long currentlyPlayingSoundType;              //@synthesize currentlyPlayingSoundType=_currentlyPlayingSoundType - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
-(id)init;
-(BOOL)isPlaying;
-(void)stopPlaying;
-(BOOL)attemptToPlaySoundType:(long long)arg1 forCall:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)currentlyPlayingSoundType;
-(void)setCurrentlyPlayingSoundType:(long long)arg1 ;
-(BOOL)attemptToPlaySoundType:(long long)arg1 forCall:(id)arg2 ;
-(TUSoundPlayer *)player;
-(void)setPlayer:(TUSoundPlayer *)arg1 ;
@end

