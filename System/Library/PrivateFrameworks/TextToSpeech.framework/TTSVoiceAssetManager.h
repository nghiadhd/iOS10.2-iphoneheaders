/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface TTSVoiceAssetManager : NSObject {

	NSMutableDictionary* _resourceCache;

}
+(id)sharedInstance;
-(void)setAutoDownloadedVoiceAssets:(id)arg1 ;
-(void)getAutoDownloadedVoiceAssets:(/*^block*/id)arg1 ;
-(id)_voiceAssetQueryForVoiceName:(id)arg1 language:(id)arg2 gender:(long long)arg3 footprint:(long long)arg4 version:(id)arg5 voiceType:(long long)arg6 localOnly:(BOOL)arg7 ;
-(id)_voiceAssetForASAsset:(id)arg1 voiceType:(long long)arg2 ;
-(void)automaticallyDownloadVoiceAssetsIfNeeded;
-(id)_autoDownloadedAssets;
-(void)_automaticallyDownloadVoiceAssetsIfNeeded;
-(id)resourcePathForLanguage:(id)arg1 gender:(long long)arg2 footprint:(long long)arg3 voiceName:(id)arg4 voiceType:(long long)arg5 outAsset:(id*)arg6 ;
-(void)getCustomVoiceAssetsLocalOnly:(BOOL)arg1 language:(id)arg2 voiceType:(long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)startDownloadingVoiceAsset:(id)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
@end

