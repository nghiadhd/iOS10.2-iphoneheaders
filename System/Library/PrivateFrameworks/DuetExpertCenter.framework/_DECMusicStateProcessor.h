/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, _DECMusicContainer;

@interface _DECMusicStateProcessor : NSObject {

	BOOL _inCar;
	NSObject*<OS_dispatch_queue> _queue;
	_DECMusicContainer* _lastPlayed;
	_DECMusicContainer* _lastPlayedInCar;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL inCar;                                        //@synthesize inCar=_inCar - In the implementation block
@property (nonatomic,retain) _DECMusicContainer * lastPlayed;                   //@synthesize lastPlayed=_lastPlayed - In the implementation block
@property (nonatomic,retain) _DECMusicContainer * lastPlayedInCar;              //@synthesize lastPlayedInCar=_lastPlayedInCar - In the implementation block
+(id)shared;
-(id)init;
-(id)_init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setInCar:(BOOL)arg1 ;
-(void)_handlePause;
-(void)_handlePlay;
-(void)_initStarkConnect;
-(void)_initStarkDisconnect;
-(void)_initNowPlayingPause;
-(void)_initNowPlayingPlay;
-(void)_persist;
-(BOOL)inCar;
-(void)lastPlayedWithHandler:(/*^block*/id)arg1 ;
-(void)lastPlayedInCarWithHandler:(/*^block*/id)arg1 ;
-(_DECMusicContainer *)lastPlayed;
-(void)setLastPlayed:(_DECMusicContainer *)arg1 ;
-(_DECMusicContainer *)lastPlayedInCar;
-(void)setLastPlayedInCar:(_DECMusicContainer *)arg1 ;
@end

