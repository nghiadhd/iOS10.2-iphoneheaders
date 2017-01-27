/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface MPUNowPlayingMetadata : NSObject {

	NSDictionary* _nowPlayingInfo;

}

@property (nonatomic,readonly) NSDictionary * nowPlayingInfo;                              //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * artist; 
@property (nonatomic,readonly) NSString * album; 
@property (nonatomic,readonly) double elapsedTime; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) float playbackRate; 
@property (nonatomic,readonly) unsigned long long persistentID; 
@property (nonatomic,readonly) NSString * radioStationIdentifier; 
@property (getter=isMusicApp,nonatomic,readonly) BOOL musicApp; 
@property (getter=isAlwaysLive,nonatomic,readonly) BOOL alwaysLive; 
@property (getter=isExplicitContent,nonatomic,readonly) BOOL explicitContent; 
-(double)duration;
-(NSString *)title;
-(double)elapsedTime;
-(float)playbackRate;
-(NSString *)artist;
-(BOOL)isExplicitContent;
-(NSDictionary *)nowPlayingInfo;
-(BOOL)isAlwaysLive;
-(NSString *)album;
-(unsigned long long)persistentID;
-(id)initWithMediaRemoteNowPlayingInfo:(id)arg1 ;
-(NSString *)radioStationIdentifier;
-(BOOL)isMusicApp;
@end

