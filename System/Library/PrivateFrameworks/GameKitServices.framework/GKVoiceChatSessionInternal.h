/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GKSessionVoiceChatDelegate.h>
#import <libobjc.A.dylib/GKVoiceChatClient.h>
#import <libobjc.A.dylib/VideoConferenceSpeakingDelegate.h>
#import <libobjc.A.dylib/InterfaceListenerDelegate.h>

@protocol OS_dispatch_queue, GKVoiceChatSessionDelegate;
@class NSString, GKSessionInternal, NSMutableArray, NSMutableDictionary, GKRWLock, GKVoiceChatServiceFocus, VoiceChatSessionRoster, NSObject, GKInterfaceListener, NSArray;

@interface GKVoiceChatSessionInternal : NSObject <GKSessionVoiceChatDelegate, GKVoiceChatClient, VideoConferenceSpeakingDelegate, InterfaceListenerDelegate> {

	NSString* _sessionName;
	unsigned _conferenceID;
	BOOL activeSession;
	float sessionVolume;
	BOOL focusCallbacks;
	GKSessionInternal* _gkSession;
	NSString* _peerID;
	NSMutableArray* _connectedPeers;
	NSMutableArray* _connectedVoicePeers;
	NSMutableArray* _connectedFocusPeers;
	NSMutableArray* _mutedPeers;
	NSMutableArray* _myPausedList;
	NSMutableDictionary* _peerChannelQuality;
	BOOL needsRecalculateGoodChannels;
	int goodChannels;
	unsigned talkingPeersLimit;
	BOOL isUsingSuppression;
	unsigned _sessionState;
	GKRWLock* _rwLock;
	GKVoiceChatServiceFocus* _vcService;
	VoiceChatSessionRoster* _roster;
	NSObject*<OS_dispatch_queue> _sendQueue;
	id<GKVoiceChatSessionDelegate> delegate;
	unsigned congestionState;
	id _publicWrapper;
	GKInterfaceListener* _wifiListener;
	BOOL _currentWifiState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) id<GKVoiceChatSessionDelegate> delegate; 
@property (nonatomic,readonly) NSString * sessionName; 
@property (nonatomic,readonly) unsigned conferenceID; 
@property (readonly) NSArray * peerList; 
@property (getter=isActiveSession) BOOL activeSession; 
@property (assign) float sessionVolume; 
@property (assign) unsigned talkingPeersLimit; 
@property (assign) BOOL isUsingSuppression; 
+(void)brokenHash:(id)arg1 response:(char*)arg2 ;
-(void)setDelegate:(id<GKVoiceChatSessionDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id<GKVoiceChatSessionDelegate>)delegate;
-(void)cleanup;
-(id)participantID;
-(void)startSession;
-(void)interfaceStateDidChangeWithWifiUp:(BOOL)arg1 cellUp:(BOOL)arg2 ;
-(void)networkStateDidChange;
-(unsigned)conferenceID;
-(void)lossRate:(float)arg1 forParticipantID:(id)arg2 ;
-(void)setIsUsingSuppression:(BOOL)arg1 ;
-(void)didStartSpeaking:(id)arg1 ;
-(void)didStopSpeaking:(id)arg1 ;
-(void)updatedConnectedPeers:(id)arg1 ;
-(BOOL)isUsingSuppression;
-(unsigned)talkingPeersLimit;
-(void)setTalkingPeersLimit:(unsigned)arg1 ;
-(void)cleanupProc:(id)arg1 ;
-(void)voiceChatService:(id)arg1 sendData:(id)arg2 toParticipantID:(id)arg3 ;
-(void)informClientVoiceChatDidStart:(id)arg1 ;
-(void)informClientVoiceChatDidStop:(id)arg1 ;
-(void)voiceChatService:(id)arg1 didReceiveInvitationFromParticipantID:(id)arg2 callID:(unsigned)arg3 ;
-(void)voiceChatService:(id)arg1 didStartWithParticipantID:(id)arg2 ;
-(void)voiceChatService:(id)arg1 didNotStartWithParticipantID:(id)arg2 error:(id)arg3 ;
-(void)voiceChatService:(id)arg1 didStopWithParticipantID:(id)arg2 error:(id)arg3 ;
-(id)initWithGKSession:(id)arg1 publicWrapper:(id)arg2 sessionName:(id)arg3 ;
-(BOOL)getMuteStateForPeer:(id)arg1 ;
-(NSArray *)peerList;
-(void)startSessionInternal;
-(void)stopSessionInternal;
-(void)calculateConferenceID;
-(id)encodePeerID:(id)arg1 ;
-(void)updatedMutedPeers:(id)arg1 forPeer:(id)arg2 ;
-(void)sendMutedPeers;
-(void)updatedSubscribedBeaconList:(id)arg1 ;
-(void)sendConnectedPeers;
-(void)informClientVoiceChatConnecting:(id)arg1 ;
-(void)handlePeerDisconnected:(id)arg1 ;
-(void)unPauseAll;
-(void)updatedFocusPeers:(id)arg1 ;
-(void)informClientVoiceChatFocusChange:(id)arg1 ;
-(void)addPeerToFocusPausedList:(id)arg1 ;
-(int)goodChannels;
-(id)decodePeerID:(id)arg1 ;
-(void)updatedFocusID:(unsigned)arg1 ;
-(void)parseMutedPeers:(id)arg1 forPeer:(id)arg2 ;
-(void)pauseAll;
-(void)pruneBadLinks;
-(void)removeFromFocusPausedList:(id)arg1 ;
-(void)parseConnectedPeers:(id)arg1 ;
-(unsigned)peerCount;
-(void)session:(id)arg1 didReceiveAudioPacket:(id)arg2 fromPeerID:(id)arg3 ;
-(void)session:(id)arg1 didReceiveOOBAudioPacket:(id)arg2 fromPeerID:(id)arg3 ;
-(void)informClientVoiceChatCouldNotConnect:(id)arg1 ;
-(void)informClientVoiceChatSpeaking:(id)arg1 ;
-(void)informClientVoiceChatSilent:(id)arg1 ;
-(int)calculateChannelQualities;
-(void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3 ;
-(void)stopSession;
-(void)setMute:(BOOL)arg1 forPeer:(id)arg2 ;
-(NSString *)sessionName;
-(void)setActiveSession:(BOOL)arg1 ;
-(BOOL)isActiveSession;
-(void)setSessionVolume:(float)arg1 ;
-(float)sessionVolume;
@end

