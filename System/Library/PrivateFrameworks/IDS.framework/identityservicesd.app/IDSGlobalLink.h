/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSLink.h>
#import <identityservicesd/IDSLinkDelegate.h>

@protocol IDSLinkDelegate, IDSLink, OS_dispatch_source;
@class IDSUDPLink, IDSTCPLink, NSString, NSMutableDictionary, NSObject, NSMutableArray, NSData;

@interface IDSGlobalLink : NSObject <IDSLink, IDSLinkDelegate> {

	IDSUDPLink* _udpLink;
	IDSUDPLink* _udpLinkv6;
	IDSTCPLink* _tcpLink;
	IDSTCPLink* _tcpSSLLink;
	unsigned short _startPort;
	int _portRange;
	unsigned char _protocolVersion;
	NSString* _appName;
	id<IDSLinkDelegate> _delegate;
	id<IDSLinkDelegate> _alternateDelegate;
	/*^block*/id _connectReadyHandler;
	/*^block*/id _disconnectCompletionHandler;
	BOOL _isFaceTimeCall;
	BOOL _forceQuickRelay;
	BOOL _disallowWiFi;
	BOOL _disallowCellular;
	BOOL _preferCellularForCallSetup;
	char _defaultLinkID;
	int _defaultSourceIfIndex;
	sockaddr_storage _defaultSource;
	sockaddr_storage _defaultDestination;
	long long _defaultStunTransport;
	id<IDSLink> _defaultLink;
	unsigned short _defaultChannelNumber;
	char _linkIDCounter;
	double _lastOutgoingPacket;
	double _lastIncomingPacket;
	double _natMappingTimeout;
	double _inviteSentTime;
	double _inviteRecvTime;
	unsigned _acceptDelayU32;
	double _allocbindStartTime;
	double _allocbindEndTime;
	double _linkConnectTime;
	double _firstClientPacketTime;
	IDSNAT64PrefixCache_Ref _nat64PrefixCache;
	NSMutableDictionary* _requestIDToInterfaces;
	NSMutableDictionary* _tokenToCandidatePairs;
	NSMutableDictionary* _linkIDToCandidatePairs;
	NSMutableDictionary* _channelToCandidatePairs;
	NSMutableDictionary* _stunRequestToID;
	NSMutableDictionary* _transcationIDToToken;
	IDSSimpleUInt16List* _channelNumberList;
	IDSSimpleUInt16List* _reallocChannelList;
	NSMutableDictionary* _tokenToSessionMessages;
	NSMutableDictionary* _tokenToReallocBlocks;
	NSObject*<OS_dispatch_source> _disconnectTimer;
	NSObject*<OS_dispatch_source> _activityTimer;
	NSMutableArray* _interfaceAddressArray;
	sockaddr_storage _commnatServer;
	double _commnatTimeout;
	NSMutableDictionary* _nonceToRequest;
	NSMutableDictionary* _nonceToCandidates;
	BOOL _isInitiator;
	int _nominateCount;
	NSMutableArray* _localCandidateList;
	NSMutableArray* _remoteCandidateList;
	NSMutableDictionary* _tokenToStunCheckPairs;
	BOOL _enableSKE;
	NSData* _skeData;
	BOOL _recvRemoteSKEData;
	BOOL _delaySessionConnected;
	BOOL _skeComplete;
	double _skeStartTime;
	NSString* _acceptedRelaySessionID;
	NSMutableArray* _nonAcceptedQRSessions;
	NSData* _softwareData;
	BOOL _delayedConnData;
	int _localConnDataCounter;
	int _remoteConnDataCounter;
	BOOL _hasPendingAllocation;
	NSMutableArray* _targetedAllocations;
	BOOL _useSecureControlMessage;
	NSData* _controlMessageKey;
	unsigned short _basebandPacketChannelNumber;
	NSString* _cbuuid;
	NSString* _deviceUniqueID;
	unsigned long long _headerOverhead;
	unsigned long long _state;
	unsigned char _clientUUID[16];
	unsigned long long _totalBytesSent;
	unsigned long long _totalPacketsSent;
	unsigned long long _totalBytesReceived;
	unsigned long long _totalPacketsReceived;
	unsigned long long _previousBytesSent;
	unsigned long long _previousPacketsSent;
	unsigned long long _previousBytesReceived;
	unsigned long long _previousPacketsReceived;
	double _previousReportTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSString * cbuuid;                                              //@synthesize cbuuid=_cbuuid - In the implementation block
@property (retain) NSString * deviceUniqueID;                                      //@synthesize deviceUniqueID=_deviceUniqueID - In the implementation block
@property (getter=linkTypeString,readonly) NSString * linkTypeString; 
@property (readonly) unsigned long long state;                                     //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long headerOverhead;                            //@synthesize headerOverhead=_headerOverhead - In the implementation block
@property (__weak) id<IDSLinkDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<IDSLinkDelegate> alternateDelegate;                          //@synthesize alternateDelegate=_alternateDelegate - In the implementation block
-(NSString *)cbuuid;
-(void)setCbuuid:(NSString *)arg1 ;
-(NSString *)deviceUniqueID;
-(id)copyLinkStatsDict;
-(void)link:(id)arg1 didConnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(void)link:(id)arg1 didDisconnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(BOOL)link:(id)arg1 didReceivePacket:(SCD_Struct_ID11*)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4 ;
-(unsigned long long)sendPacketBuffer:(SCD_Struct_ID11*)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 ;
-(id)generateLinkReport:(double)arg1 isCurrentLink:(BOOL)arg2 ;
-(NSString *)linkTypeString;
-(unsigned long long)headerOverhead;
-(id<IDSLinkDelegate>)alternateDelegate;
-(void)setAlternateDelegate:(id<IDSLinkDelegate>)arg1 ;
-(BOOL)remoteHostAwake;
-(void)currentCellularSignalStrength:(int*)arg1 signalStrength:(int*)arg2 signalGrade:(int*)arg3 ;
-(void)_stopDisconnectTimer;
-(void)_stopActivityTimer;
-(id)_createInterfaceAddressArray:(unsigned long long)arg1 wantsWiFi:(BOOL)arg2 wantsCellular:(BOOL)arg3 ;
-(void)_parseClientUUID:(id)arg1 ;
-(id)_addSocketAndInterfaceAddress:(unsigned long long)arg1 wantsWiFi:(BOOL)arg2 wantsCellular:(BOOL)arg3 ;
-(BOOL)_isReachableInterface:(id)arg1 interfaceIPVersion:(unsigned long long)arg2 ;
-(BOOL)_hasConnectedRelayCandidatePair;
-(unsigned)_getLinkInformation:(long long)arg1 linkOK:(BOOL*)arg2 ;
-(long long)_stunTransportWithSessionInfo:(id)arg1 ;
-(id)_selectInterfaceForAllocation:(id)arg1 stunTransport:(long long)arg2 interfaceIPVersion:(unsigned long long)arg3 ;
-(void)connectWithSessionInfo:(id)arg1 interfaceAddress:(id)arg2 nat64Prefix:(IDSNAT64Prefix_Ref)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_synthesizeIPv6UsingNat64Prefix:(IDSNAT64Prefix_Ref)arg1 remoteAddress:(sockaddr_in*)arg2 ;
-(unsigned)_calculateLocalMTU:(BOOL)arg1 isCellular:(BOOL)arg2 isRelay:(BOOL)arg3 ;
-(void)_sendAllocbindRequest:(id)arg1 stunMessage:(id)arg2 isRealloc:(BOOL)arg3 ;
-(void)_discardCandidatePairsWithOption:(BOOL)arg1 ;
-(void)_removePacketNotificationFilter;
-(void)_sendSessionDisconnectedCommand;
-(void)_startDisconnectTimer;
-(id)_getLink:(int)arg1 stunTransport:(long long)arg2 ;
-(BOOL)_isBetterCandidatePair:(id)arg1 newCandidatePair:(id)arg2 ;
-(void)_nominateCandidatePair:(id)arg1 ;
-(void)_sendUnallocbindRequest:(id)arg1 stunMessage:(id)arg2 ;
-(void)_notifyCandidatePairDisconnected:(id)arg1 ;
-(BOOL)_hasConnectedCandidatePair;
-(void)_notifyLinkDisconnectedWithError:(long long)arg1 ;
-(void)_sendCommandMessage:(long long)arg1 options:(id)arg2 candidatePairToken:(id)arg3 ;
-(void)_notifyDefaultUnderlyingLinkChanged:(id)arg1 error:(long long)arg2 ;
-(void)_sendConnectionDataWithRemovedAddressList:(id)arg1 ;
-(void)_callDisconnectCompletionHandler:(id)arg1 ;
-(void)_reportAllocbindEventForMessageType:(long long)arg1 duration:(float)arg2 transport:(long long)arg3 localRAT:(unsigned long long)arg4 ;
-(void)_setChannelToCandidatePair:(id)arg1 localAddress:(sockaddr*)arg2 remoteAddress:(sockaddr*)arg3 channelNumber:(unsigned short)arg4 ;
-(void)_updateDefaultCandidatePair:(id)arg1 ;
-(void)_sendSKEDataWithSelectedCandidatePair;
-(void)_removeSessionCommandMessage:(long long)arg1 candidatePairToken:(id)arg2 ;
-(double)_startTimeForStunRequest:(id)arg1 ;
-(void)_reportAWDReallocIndicationResult:(unsigned)arg1 transport:(long long)arg2 localRAT:(unsigned long long)arg3 ;
-(BOOL)_processIncomingIndicationData:(char*)arg1 length:(int)arg2 candidatePairToken:(id)arg3 ;
-(BOOL)_processBindingRequest:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned)arg3 localAddress:(sockaddr*)arg4 remmoteAddress:(sockaddr*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7 ;
-(BOOL)_processBindingResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned)arg3 localAddress:(sockaddr*)arg4 remmoteAddress:(sockaddr*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7 ;
-(BOOL)_processAllocbindResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned)arg3 localAddress:(sockaddr*)arg4 remmoteAddress:(sockaddr*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7 ;
-(BOOL)_processUnallocbindResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned)arg3 localAddress:(sockaddr*)arg4 remmoteAddress:(sockaddr*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7 ;
-(BOOL)_processReallocIndication:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned)arg3 localAddress:(sockaddr*)arg4 remoteAddress:(sockaddr*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7 ;
-(BOOL)_processDataIndication:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned)arg3 localAddress:(sockaddr*)arg4 remoteAddress:(sockaddr*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7 ;
-(BOOL)_processStunErrorResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned)arg3 localAddress:(sockaddr*)arg4 remmoteAddress:(sockaddr*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7 ;
-(void)_removeStunRequest:(id)arg1 ;
-(void)_notifyCandidatePairConnected:(id)arg1 ;
-(void)_processDataOnReallocChannel:(unsigned short)arg1 localAddress:(sockaddr*)arg2 remoteAddress:(sockaddr*)arg3 ;
-(BOOL)_hasConnectingRelayCandidatePair;
-(BOOL)_sendStunMessage:(id)arg1 sourceIfIndex:(int)arg2 source:(sockaddr*)arg3 destination:(sockaddr*)arg4 stunTransport:(long long)arg5 ;
-(void)_saveStunRequest:(id)arg1 token:(id)arg2 ;
-(BOOL)_skipCommandMessage:(long long)arg1 candidatePair:(id)arg2 timeNow:(double)arg3 ;
-(id)_commandMessage:(long long)arg1 candidatePairToken:(id)arg2 ;
-(id)_createCommandData:(long long)arg1 options:(id)arg2 candidatePair:(id)arg3 ;
-(void)_saveCommandMessage:(long long)arg1 stunMessage:(id)arg2 candidatePairToken:(id)arg3 ;
-(void)_processCommandConnected:(id)arg1 candidatePairToken:(id)arg2 ;
-(void)_processCommandDisconnected:(id)arg1 candidatePairToken:(id)arg2 ;
-(void)_processCommandHeartbeat:(id)arg1 candidatePairToken:(id)arg2 ;
-(void)_processCommandConnectionData:(id)arg1 candidatePairToken:(id)arg2 ;
-(void)_processCommandNominate:(id)arg1 candidatePairToken:(id)arg2 ;
-(void)_discardNonAcceptedCandidatePairs;
-(void)_startActivityTimer;
-(void)_startCommnatDiscovery:(long long)arg1 ;
-(void)_selectBetterDefaultCandidatePair:(id)arg1 ;
-(void)_notifyQRSessionConnected:(id)arg1 ;
-(void)_discardAllCandidatePairs;
-(void)_processRemoteCandidates:(id)arg1 ;
-(void)_setupRelayConnectionForNetworkAddressChanges;
-(void)_updateNominatedCandidatePair:(id)arg1 ;
-(BOOL)_isCommnatDiscoveryDone;
-(void)_handleDisconnectTimer;
-(id)_nextConnectedCandidatePair;
-(void)_handleActivityTimer;
-(void)_startStunCheck:(id)arg1 ;
-(BOOL)_addCandidate:(id)arg1 isRemoteCandidate:(BOOL)arg2 ;
-(void)_addStunCheckPair:(id)arg1 isRemoteCandidate:(BOOL)arg2 ;
-(float)_getCommNATTimeoutValue;
-(void)_sendCommnatRequest:(id)arg1 candidate:(id)arg2 ;
-(void)_getCommNATServerAddress;
-(BOOL)_isLocalAddressUsed:(const sockaddr*)arg1 ;
-(void)_processNewRemoteCandidates:(id)arg1 ;
-(void)_processRemovedRemoteCandidates:(id)arg1 ;
-(void)_sendBindingRequest:(id)arg1 stunMessage:(id)arg2 ;
-(void)_selectDefaultCandidatePair;
-(void)_setupRelayConnectionIfNecessary;
-(void)_processNewLocalAddressList:(id)arg1 ;
-(void)_processRemovedLocalAddressList:(id)arg1 ;
-(void)_reportAWDClientTimerEvent:(unsigned)arg1 transport:(long long)arg2 localRAT:(unsigned)arg3 duration:(unsigned long long)arg4 ;
-(void)_reportSessionSetupTime;
-(void)_requestNonUDPRelayAllocation:(long long)arg1 relaySessionID:(id)arg2 ;
-(void)_processReallocChannelData:(SCD_Struct_ID11*)arg1 channelNumber:(unsigned short)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4 arrivalTime:(double)arg5 ;
-(BOOL)_processStunPacket:(SCD_Struct_ID11*)arg1 fromDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 arrivalTime:(double)arg4 ;
-(void)_processCommnatResponse:(SCD_Struct_ID11*)arg1 ;
-(id)_interfaceTypeListToString:(unsigned char)arg1 ;
-(id)_linkTypeListToString:(unsigned char)arg1 ;
-(unsigned char)_newRelayLinkType:(unsigned char)arg1 localInterface:(unsigned char)arg2 remoteInterface:(unsigned char)arg3 ;
-(id)_linkTypeMaskToString:(unsigned char)arg1 ;
-(unsigned long long)defaultLinkType;
-(BOOL)hasReachableInterface:(unsigned long long)arg1 ;
-(void)handleNetworkAddressChanges:(BOOL)arg1 hasIPv6AddressChange:(BOOL)arg2 ;
-(void)handleCellularRATChange;
-(void)setAcceptedRelaySession:(id)arg1 options:(id)arg2 ;
-(void)sendSKEData:(id)arg1 ;
-(void)setDefaultUnderlyingLink:(char)arg1 ;
-(void)setPacketNotificationFilter:(char)arg1 uniqueTag:(unsigned)arg2 isEnabled:(BOOL)arg3 ;
-(void)dropIPPackets:(char)arg1 payloadArray:(id)arg2 ;
-(void)updateProtocolQualityOfService:(char)arg1 isGood:(BOOL)arg2 ;
-(void)stopKeepAlive:(id)arg1 ;
-(void)setDelegate:(id<IDSLinkDelegate>)arg1 ;
-(void)dealloc;
-(id<IDSLinkDelegate>)delegate;
-(unsigned long long)state;
-(void)invalidate;
-(void)startWithOptions:(id)arg1 ;
-(void)setDeviceUniqueID:(NSString *)arg1 ;
-(void)disconnectWithCompletionHandler:(/*^block*/id)arg1 ;
@end

