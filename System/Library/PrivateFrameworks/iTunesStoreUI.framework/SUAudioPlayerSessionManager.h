/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface SUAudioPlayerSessionManager : NSObject {

	NSMutableDictionary* _sessions;

}

@property (nonatomic,readonly) NSArray * allSessionURLs; 
+(id)sessionManager;
-(id)init;
-(void)dealloc;
-(NSArray *)allSessionURLs;
-(id)audioPlayerForURL:(id)arg1 ;
-(void)_audioPlayerStatusChangeNotification:(id)arg1 ;
-(id)endSessionForURL:(id)arg1 ;
-(id)stopAllAudioPlayerSessions;
-(id)startSessionWithURL:(id)arg1 ;
@end
