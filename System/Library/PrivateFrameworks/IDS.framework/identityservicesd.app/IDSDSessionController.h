/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, FTMessageDelivery, IDSInvitationPushHandler, IMMultiQueue;

@interface IDSDSessionController : NSObject {

	NSMutableDictionary* _sessions;
	FTMessageDelivery* _messageDelivery;
	NSMutableDictionary* _conferenceMaps;
	IDSInvitationPushHandler* _invPushHandler;
	IMMultiQueue* _sessionIDMultiQueue;

}

@property (readonly) FTMessageDelivery * messageDelivery;                              //@synthesize messageDelivery=_messageDelivery - In the implementation block
@property (readonly) NSMutableDictionary * conferenceMaps;                             //@synthesize conferenceMaps=_conferenceMaps - In the implementation block
@property (nonatomic,readonly) IDSInvitationPushHandler * invPushHandler;              //@synthesize invPushHandler=_invPushHandler - In the implementation block
+(id)sharedInstance;
-(void)setPeerInfo:(id)arg1 peers:(id)arg2 conferenceID:(id)arg3 ;
-(void)setAlternateDisplayID:(id)arg1 displayID:(id)arg2 forPeerID:(id)arg3 conferenceID:(id)arg4 ;
-(id)peerInfoForDisplayID:(id)arg1 displayID:(id)arg2 conferenceID:(id)arg3 skippingPairs:(id)arg4 ;
-(void)setPurgeTimer;
-(IDSInvitationPushHandler *)invPushHandler;
-(void)updateCriticalReliabilityState;
-(void)cleanupSessionsForClient:(id)arg1 ;
-(id)sessionWithUniqueID:(id)arg1 ;
-(id)invitationSessionWithConferenceID:(id)arg1 ;
-(id)setupNewInvitationSessionWithAccount:(id)arg1 destinations:(id)arg2 uniqueID:(id)arg3 ;
-(void)handler:(id)arg1 relayInitiated:(id)arg2 topic:(id)arg3 peerID:(id)arg4 peerPushToken:(id)arg5 relayType:(id)arg6 relayConnectionID:(id)arg7 relayTransactionIDAlloc:(id)arg8 relayTokenAllocReq:(id)arg9 myRelayIP:(id)arg10 myRelayPort:(id)arg11 peerRelayIP:(id)arg12 peerRelayPort:(id)arg13 clientInfo:(id)arg14 serviceData:(id)arg15 ;
-(void)handler:(id)arg1 relayUpdated:(id)arg2 topic:(id)arg3 peerID:(id)arg4 peerPushToken:(id)arg5 relayType:(id)arg6 relayConnectionID:(id)arg7 relayTransactionIDChannelBind:(id)arg8 relayTokenChannelBind:(id)arg9 relayBlob:(id)arg10 peerRelayNATIP:(id)arg11 peerRelayNATPort:(id)arg12 clientInfo:(id)arg13 serviceData:(id)arg14 ;
-(void)handler:(id)arg1 relayCancelled:(id)arg2 topic:(id)arg3 peerID:(id)arg4 relayType:(id)arg5 relayTokenAllocReq:(id)arg6 relayConnectionID:(id)arg7 relayTransactionIDAlloc:(id)arg8 myRelayIP:(id)arg9 myRelayPort:(id)arg10 peerRelayIP:(id)arg11 peerRelayPort:(id)arg12 reason:(id)arg13 clientInfo:(id)arg14 serviceData:(id)arg15 ;
-(void)purgeMap:(id)arg1 ;
-(id)conferenceMap:(id)arg1 ;
-(id)displayIDForPeerID:(id)arg1 peerID:(id)arg2 conferenceID:(id)arg3 ;
-(id)pushTokensForPeerID:(id)arg1 peerID:(id)arg2 conferenceID:(id)arg3 ;
-(id)peerIDsForDiplayID:(id)arg1 displayID:(id)arg2 conferenceID:(id)arg3 ;
-(id)peerIDPushTokenPairsForConferenceID:(id)arg1 conferenceID:(id)arg2 ;
-(BOOL)hasPeersForPeerID:(id)arg1 peerID:(id)arg2 conferenceID:(id)arg3 ;
-(void)retargetPeerID:(id)arg1 peerID:(id)arg2 displayID:(id)arg3 pushToken:(id)arg4 conferenceID:(id)arg5 ;
-(BOOL)anyPeersForConferenceIDMayRequireBreakBeforeMake:(id)arg1 conferenceID:(id)arg2 ;
-(id)pushTokenForPeerID:(id)arg1 peerID:(id)arg2 conferenceID:(id)arg3 ;
-(id)peerIDForDiplayID:(id)arg1 displayID:(id)arg2 conferenceID:(id)arg3 ;
-(id)peerIDPushTokensPairsForPeerID:(id)arg1 peerID:(id)arg2 conferenceID:(id)arg3 skippingPairs:(id)arg4 ;
-(void)removeInvitationSessionWithConferenceID:(id)arg1 ;
-(id)_specificOriginatorFromID:(id)arg1 senderToken:(id)arg2 accountUniqueID:(id)arg3 ;
-(id)setupNewIncomingSessionWithOptions:(id)arg1 ;
-(id)setupNewOutgoingSessionWithOptions:(id)arg1 ;
-(void)processIncomingInvitationWithPayload:(id)arg1 topic:(id)arg2 fromToken:(id)arg3 fromID:(id)arg4 toID:(id)arg5 messageContext:(id)arg6 ;
-(void)processIncomingSessionAcceptMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 ;
-(void)processIncomingSessionDeclineMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 ;
-(void)processIncomingSessionCancelMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 ;
-(void)processIncomingSessionMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 ;
-(void)processIncomingSessionEndMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 ;
-(void)processIncomingSessionReinitiateMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 ;
-(void)_handleClientDeath:(id)arg1 ;
-(void)updateInvitationSession:(id)arg1 withNewConferenceID:(id)arg2 ;
-(NSMutableDictionary *)conferenceMaps;
-(id)init;
-(void)dealloc;
-(void)cleanupSession:(id)arg1 ;
-(void)handler:(id)arg1 sessionInitated:(id)arg2 topic:(id)arg3 myID:(id)arg4 peerID:(id)arg5 peerDisplayID:(id)arg6 peerCN:(id)arg7 peerPushToken:(id)arg8 peerNATType:(id)arg9 peerBlob:(id)arg10 peerNatIP:(id)arg11 clientInfo:(id)arg12 serviceData:(id)arg13 ;
-(void)handler:(id)arg1 sessionAccepted:(id)arg2 topic:(id)arg3 peerID:(id)arg4 peerCN:(id)arg5 peerPushToken:(id)arg6 peerNATType:(id)arg7 peerBlob:(id)arg8 peerNatIP:(id)arg9 relayType:(id)arg10 relayConnectionID:(id)arg11 relayTransactionIDAlloc:(id)arg12 relayTokenAllocReq:(id)arg13 myRelayIP:(id)arg14 myRelayPort:(id)arg15 peerRelayIP:(id)arg16 peerRelayPort:(id)arg17 clientInfo:(id)arg18 serviceData:(id)arg19 ;
-(void)handler:(id)arg1 sessionRejected:(id)arg2 topic:(id)arg3 peerID:(id)arg4 peerPushToken:(id)arg5 reason:(id)arg6 clientInfo:(id)arg7 serviceData:(id)arg8 ;
-(void)handler:(id)arg1 incomingMessage:(id)arg2 topic:(id)arg3 peerID:(id)arg4 reason:(id)arg5 clientInfo:(id)arg6 serviceData:(id)arg7 ;
-(void)handler:(id)arg1 sessionCancelled:(id)arg2 topic:(id)arg3 peerID:(id)arg4 reason:(id)arg5 clientInfo:(id)arg6 serviceData:(id)arg7 ;
-(FTMessageDelivery *)messageDelivery;
@end

