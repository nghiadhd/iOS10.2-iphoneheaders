/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface MPCRadioNetworkingController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSString* _highQualityAssetFlavor;
	double _minimumBitrateForHighQuality;

}

@property (nonatomic,copy,readonly) NSString * highQualityAssetFlavor; 
@property (nonatomic,readonly) double minimumBitrateForHighQuality; 
+(id)sharedController;
-(id)init;
-(void)dealloc;
-(id)_init;
-(double)minimumBitrateForHighQuality;
-(NSString *)highQualityAssetFlavor;
-(void)_updateForLoadedStoreBag:(id)arg1 ;
-(void)_radioStoreBagDidLoadNotification:(id)arg1 ;
@end

