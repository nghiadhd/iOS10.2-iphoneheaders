/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPPlayableContentDelegate.h>

@class MPCMediaPlayerLegacyPlayer, NSString;

@interface MPCPlayableContentDelegate : NSObject <MPPlayableContentDelegate> {

	MPCMediaPlayerLegacyPlayer* _player;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPlayer:(id)arg1 ;
-(void)playableContentManager:(id)arg1 initializePlaybackQueueWithContentItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

