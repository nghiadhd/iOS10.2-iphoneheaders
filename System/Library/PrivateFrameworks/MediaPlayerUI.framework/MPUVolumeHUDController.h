/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface MPUVolumeHUDController : NSObject {

	NSMutableDictionary* _categoriesToEnabledStates;

}

@property (nonatomic,readonly) NSDictionary * categoriesToEnabledStates; 
-(id)init;
-(void)dealloc;
-(NSDictionary *)categoriesToEnabledStates;
-(BOOL)volumeHUDEnabledForCategory:(id)arg1 ;
-(void)setVolumeHUDEnabled:(BOOL)arg1 forCategory:(id)arg2 ;
@end

