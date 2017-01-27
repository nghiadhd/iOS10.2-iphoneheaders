/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AFSettingsDelegate;
@class NSXPCConnection, NSObject, NSArray, AFVoiceInfo;

@interface AFSettingsConnection : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _voicesQueue;
	NSArray* _voices;
	AFVoiceInfo* _selectedVoice;
	id<AFSettingsDelegate> _delegate;

}

@property (assign,setter=_setDelegate:,nonatomic,__weak) id<AFSettingsDelegate> _delegate; 
-(id)init;
-(void)dealloc;
-(id<AFSettingsDelegate>)_delegate;
-(void)_setDelegate:(id)arg1 ;
-(id)_connection;
-(void)fetchSupportedLanguageCodes:(/*^block*/id)arg1 ;
-(void)setLanguage:(id)arg1 ;
-(void)startRemoteRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteAccountWithIdentifier:(id)arg1 ;
-(void)setAssistantEnabled:(BOOL)arg1 ;
-(void)setDictationEnabled:(BOOL)arg1 ;
-(void)_fetchPeerData:(/*^block*/id)arg1 ;
-(void)_setSyncVerificationNeededAndFullReportNeeded:(BOOL)arg1 shouldPostNotification:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_runServiceMaintenance;
-(void)setOutputVoice:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setLanguage:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getOfflineDictationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)createOfflineSpeechProfileWithLanguage:(id)arg1 JSONData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setOfflineDictationProfileOverridePath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startUIRequest:(id)arg1 ;
-(void)fetchSiriDisabledAppIDsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchSiriIntegrationEnabledForAppID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSiriAccess:(BOOL)arg1 forAppID:(id)arg2 ;
-(void)runAdaptationRecipeEvaluation:(id)arg1 language:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)runLiveAdaptationRecipeEvaluationWithBaseURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDESRecordingEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDESRecognitionEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDESLotteryWinOverrideEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)disableDESWithCompletion:(/*^block*/id)arg1 ;
-(void)setDESPolicyCDNOverride:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchEventRecordsFromAnalyticsStoreAtPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)purgeAnalyticsStoreWithCompletion:(/*^block*/id)arg1 ;
-(void)resetAnalyticsStoreWithCompletion:(/*^block*/id)arg1 ;
-(void)barrier;
-(void)setOutputVoice:(id)arg1 ;
-(id)_settingsServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_settingsService;
-(void)_setVoices:(id)arg1 ;
-(void)getAvailableVoicesForRecognitionLanguage:(id)arg1 includeAssetInfo:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)getAvailableVoicesForLanguage:(id)arg1 includeAssetInfo:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_voices;
-(id)_filterVoices:(id)arg1 forLanguage:(id)arg2 ;
-(void)_updateVoicesIncludingAssetInfo:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveAccount:(id)arg1 setActive:(BOOL)arg2 ;
-(void)getAvailableVoicesForRecognitionLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getAvailableVoicesForSynthesisLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_syncDataWithAnchorKeys:(id)arg1 forceReset:(BOOL)arg2 reason:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_tellDelegatePartialVerificationResult:(id)arg1 ;
-(void)_tellDelegateServerVerificationReport:(id)arg1 ;
-(void)setActiveAccountIdentifier:(id)arg1 ;
-(void)killDaemon;
-(id)accounts;
-(void)_clearConnection;
@end

