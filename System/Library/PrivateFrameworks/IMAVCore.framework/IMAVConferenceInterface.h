/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMAVCore/IMAVCore-Structs.h>
#import <IMAVCore/IMAVInterface.h>
#import <libobjc.A.dylib/AVConferenceDelegate.h>

@class NSMutableArray, NSMutableDictionary, NSLock, AVConference;

@interface IMAVConferenceInterface : IMAVInterface <AVConferenceDelegate> {

	NSMutableArray* _avConferencesToCleanup;
	NSMutableDictionary* _avConferences;
	NSLock* _avConferencesLock;
	BOOL _duringInit;
	BOOL _pendingCleanup;

}

@property (nonatomic,readonly) AVConference * controller; 
+(BOOL)_useMultipleAVConference;
+(void)_postParticipantScreenAttributesChangeNotification:(id)arg1 cameraChanged:(BOOL)arg2 orientationChanged:(BOOL)arg3 aspectChanged:(BOOL)arg4 cameraWillSwitch:(BOOL)arg5 camera:(unsigned)arg6 orentation:(unsigned)arg7 aspect:(CGSize)arg8 ;
+(void)_postParticipantMediaChangeNotification:(id)arg1 cameraChanged:(BOOL)arg2 orientationChanged:(BOOL)arg3 aspectChanged:(BOOL)arg4 contentRectChanged:(BOOL)arg5 cameraWillSwitch:(BOOL)arg6 camera:(unsigned)arg7 orentation:(unsigned)arg8 aspect:(CGSize)arg9 contentRect:(CGRect)arg10 ;
-(id)init;
-(void)dealloc;
-(AVConference *)controller;
-(BOOL)stopPreview;
-(id)_controller;
-(void)setRemoteVideoLayersFromChat:(id)arg1 toChat:(id)arg2 ;
-(void)_notifyAboutPotentialCallForChat:(id)arg1 ;
-(void)_avChatDealloc:(id)arg1 ;
-(void)chatStateUpdated;
-(void)cancelConferenceForAVChat:(id)arg1 ;
-(int)endConferenceForAVChat:(id)arg1 ;
-(BOOL)isAVInterfaceReady;
-(void)initAVInterface;
-(void)processRemoteIPChanged:(id)arg1 fromParticipant:(id)arg2 ;
-(id)natTypeForAVChat:(id)arg1 ;
-(void)chatRelayedStatusChanged:(id)arg1 ;
-(void)endAVConferenceWithChat:(id)arg1 callID:(long long)arg2 ;
-(void)avChat:(id)arg1 prepareConnectionWithCallInfo:(id)arg2 ;
-(BOOL)avChat:(id)arg1 generateCallInfoForID:(id)arg2 service:(id)arg3 usingRelay:(BOOL)arg4 callInfo:(id)arg5 ;
-(void)_conferenceEnded:(id)arg1 ;
-(BOOL)isMuteForAVChat:(id)arg1 ;
-(void)avChat:(id)arg1 setMute:(BOOL)arg2 ;
-(BOOL)isPausedForAVChat:(id)arg1 ;
-(void)avChat:(id)arg1 setPaused:(BOOL)arg2 ;
-(BOOL)isSendingAudioForAVChat:(id)arg1 ;
-(void)avChat:(id)arg1 setSendingAudio:(BOOL)arg2 ;
-(BOOL)isSendingVideoForAVChat:(id)arg1 ;
-(void)avChat:(id)arg1 setSendingVideo:(BOOL)arg2 ;
-(unsigned long long)capabilitiesOfNetwork;
-(unsigned long long)capabilitiesOfCPU;
-(BOOL)startPreviewWithError:(id*)arg1 ;
-(int)avChat:(id)arg1 endConferenceForUserID:(id)arg2 ;
-(id)getNatIPFromICEData:(id)arg1 ;
-(BOOL)supportsLayers;
-(void*)remoteVideoLayerForChat:(id)arg1 ;
-(void)setRemoteVideoLayer:(void*)arg1 forChat:(id)arg2 ;
-(void*)remoteVideoBackLayerForChat:(id)arg1 ;
-(void)setRemoteVideoBackLayer:(void*)arg1 forChat:(id)arg2 ;
-(void*)localVideoLayer;
-(void)setLocalVideoLayer:(void*)arg1 ;
-(void*)localVideoBackLayer;
-(void)setLocalVideoBackLayer:(void*)arg1 ;
-(void)setRemoteVideoPresentationSize:(CGSize)arg1 forChat:(id)arg2 ;
-(void)setRemoteVideoPresentationState:(unsigned)arg1 forChat:(id)arg2 ;
-(void)handleRelayInitate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3 ;
-(void)handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3 ;
-(void)handleRelayCancel:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3 ;
-(void)avChat:(id)arg1 setLocalLandscapeAspectRatio:(CGSize)arg2 localPortraitAspectRatio:(CGSize)arg3 ;
-(BOOL)_submitLoggingInformation:(id)arg1 forChat:(id)arg2 ;
-(BOOL)_submitEndCallMetric:(id)arg1 forCallID:(long long)arg2 ;
-(void)updateAVChat:(id)arg1 withCallMetadata:(id)arg2 isFinalUpdate:(BOOL)arg3 ;
-(id)_existingConferenceForAVChat:(id)arg1 ;
-(id)_faceTimeUUID;
-(void)_configureAVConference:(id)arg1 forChat:(id)arg2 ;
-(id)_avChatForConference:(id)arg1 callID:(long long)arg2 errorString:(id)arg3 ;
-(id)_avChatForConference:(id)arg1 ;
-(void)_cleanupAVInterface;
-(void)_queueAVConferenceForCleanup:(id)arg1 ;
-(id)_conferenceForAVChat:(id)arg1 ;
-(id)_existingConferenceForAVChatGUID:(id)arg1 ;
-(int)_deviceRoleForAVChat:(id)arg1 ;
-(BOOL)_hasAVConferenceObjectsForChatsOtherThan:(id)arg1 ;
-(id)_imAVChatParticipantForConference:(id)arg1 callID:(long long)arg2 errorString:(id)arg3 ;
-(void)conference:(id)arg1 didStartSession:(BOOL)arg2 withUserInfo:(id)arg3 ;
-(void)conference:(id)arg1 didStopWithCallID:(long long)arg2 error:(id)arg3 ;
-(void)conference:(id)arg1 withCallID:(long long)arg2 didPauseAudio:(BOOL)arg3 error:(id)arg4 ;
-(void)conference:(id)arg1 didStopWithCallID:(long long)arg2 error:(id)arg3 callMetadata:(id)arg4 ;
-(void)conference:(id)arg1 localIPChange:(id)arg2 withCallID:(long long)arg3 ;
-(void)conference:(id)arg1 withCallID:(long long)arg2 remoteMediaStalled:(BOOL)arg3 ;
-(void)conference:(id)arg1 receivedFirstRemoteFrameForCallID:(long long)arg2 ;
-(void)conference:(id)arg1 remoteVideoAttributesChanged:(id)arg2 callID:(long long)arg3 ;
-(void)conference:(id)arg1 remoteAudioPaused:(BOOL)arg2 callID:(long long)arg3 ;
-(void)conference:(id)arg1 remoteVideoPaused:(BOOL)arg2 callID:(long long)arg3 ;
-(void)conference:(id)arg1 remoteScreenAttributesChanged:(id)arg2 callID:(long long)arg3 ;
-(void)conference:(id)arg1 updateInputFrequencyLevel:(id)arg2 ;
-(void)conference:(id)arg1 updateOutputFrequencyLevel:(id)arg2 ;
-(void)conference:(id)arg1 inititiateRelayRequest:(long long)arg2 requestDict:(id)arg3 ;
-(void)conference:(id)arg1 sendRelayUpdate:(long long)arg2 updateDict:(id)arg3 ;
-(void)conference:(id)arg1 cancelRelayRequest:(long long)arg2 requestDict:(id)arg3 ;
-(void)conference:(id)arg1 videoQualityNotificationForCallID:(long long)arg2 isDegraded:(BOOL)arg3 isRemote:(BOOL)arg4 ;
-(void)conference:(id)arg1 withCallID:(long long)arg2 networkHint:(BOOL)arg3 ;
-(void)conference:(id)arg1 didChangeLocalVariablesForCallID:(long long)arg2 ;
-(void)conference:(id)arg1 reinitializeCallForCallID:(unsigned)arg2 ;
-(void)serverDiedForConference:(id)arg1 ;
-(unsigned long long)capabilities;
-(BOOL)supportsRelay;
@end

