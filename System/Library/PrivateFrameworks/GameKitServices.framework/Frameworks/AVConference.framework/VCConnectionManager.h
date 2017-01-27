/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, VCConnectionProtocol, VCConnectionManagerDelegate;
#import <AVConference/AVConference-Structs.h>
@class NSObject;

@interface VCConnectionManager : NSObject {

	unsigned _callID;
	int _relayServerProvider;
	NSObject*<OS_dispatch_queue> _stateQueue;
	opaque_pthread_rwlock_t _stateRWlock;
	id<VCConnectionProtocol> _primaryConnection;
	id<VCConnectionProtocol> _secondaryConnection;
	id<VCConnectionProtocol> _connectionForDuplication;
	id<VCConnectionProtocol> _lastPrimaryConnectionInUse;
	opaqueRTCReportingRef _reportingAgent;
	BOOL _duplicationPending;
	BOOL _enableDuplication;
	int _preferredLocalInterfaceForDuplication;
	int _preferredRemoteInterfaceForDuplication;
	BOOL _isInitialConnectionEstablished;
	int _mediaExcessiveCellularTxBytes;
	int _mediaExcessiveCellularRxBytes;
	int _signalingExcessiveCellularTxBytes;
	int _signalingExcessiveCellularRxBytes;
	id<VCConnectionManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,retain) id<VCConnectionProtocol> lastPrimaryConnectionInUse;                  //@synthesize lastPrimaryConnectionInUse=_lastPrimaryConnectionInUse - In the implementation block
@property (nonatomic,retain) id<VCConnectionProtocol> connectionForDuplication;                    //@synthesize connectionForDuplication=_connectionForDuplication - In the implementation block
@property (assign) unsigned callID;                                                                //@synthesize callID=_callID - In the implementation block
@property (assign) int relayServerProvider;                                                        //@synthesize relayServerProvider=_relayServerProvider - In the implementation block
@property (assign,setter=setDuplicationEnabled:,nonatomic) BOOL isDuplicationEnabled;              //@synthesize enableDuplication=_enableDuplication - In the implementation block
@property (assign) int preferredLocalInterfaceForDuplication;                                      //@synthesize preferredLocalInterfaceForDuplication=_preferredLocalInterfaceForDuplication - In the implementation block
@property (readonly) BOOL isLocalCellularInterfaceUsed; 
@property (assign) id<VCConnectionManagerDelegate> delegate; 
@property (nonatomic,retain) id<VCConnectionProtocol> primaryConnection;                           //@synthesize primaryConnection=_primaryConnection - In the implementation block
@property (nonatomic,retain) id<VCConnectionProtocol> secondaryConnection;                         //@synthesize secondaryConnection=_secondaryConnection - In the implementation block
@property (readonly) int connectionCount; 
@property (readonly) int mediaExcessiveCellularTxBytes;                                            //@synthesize mediaExcessiveCellularTxBytes=_mediaExcessiveCellularTxBytes - In the implementation block
@property (readonly) int mediaExcessiveCellularRxBytes;                                            //@synthesize mediaExcessiveCellularRxBytes=_mediaExcessiveCellularRxBytes - In the implementation block
@property (readonly) int signalingExcessiveCellularTxBytes;                                        //@synthesize signalingExcessiveCellularTxBytes=_signalingExcessiveCellularTxBytes - In the implementation block
@property (readonly) int signalingExcessiveCellularRxBytes;                                        //@synthesize signalingExcessiveCellularRxBytes=_signalingExcessiveCellularRxBytes - In the implementation block
-(id)init;
-(void)setDelegate:(id<VCConnectionManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<VCConnectionManagerDelegate>)delegate;
-(int)connectionCount;
-(void)setCallID:(unsigned)arg1 ;
-(unsigned)callID;
-(BOOL)isBetterConnection:(id)arg1 asPrimary:(BOOL)arg2 ;
-(id<VCConnectionProtocol>)primaryConnection;
-(id<VCConnectionProtocol>)secondaryConnection;
-(id<VCConnectionProtocol>)lastPrimaryConnectionInUse;
-(void)useConnectionAsPrimary:(id)arg1 ;
-(void)setSecondaryConnection:(id<VCConnectionProtocol>)arg1 ;
-(int)getNumberOfConnectionsInternal;
-(void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2 ;
-(void)setDuplicationEnabled:(BOOL)arg1 ;
-(void)reportConnection:(id)arg1 isInitialConnection:(BOOL)arg2 ;
-(void)setPrimaryConnection:(id<VCConnectionProtocol>)arg1 ;
-(void)promoteSecondaryConnectionToPrimary:(id)arg1 ;
-(BOOL)isOptimalConnection:(id)arg1 asPrimary:(BOOL)arg2 interfaceMask:(int)arg3 ;
-(void)updateCellularMTU:(int)arg1 ;
-(void)updateCellularTech:(int)arg1 forLocalInterface:(BOOL)arg2 ;
-(void)sourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 isSourceOnCellular:(BOOL*)arg2 isSourceIPv6:(BOOL*)arg3 ;
-(BOOL)shouldAcceptDataFromSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 ;
-(id)getConnectionWithSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 isPrimary:(BOOL*)arg2 ;
-(void)setRelayServerProvider:(int)arg1 ;
-(id)connectionForQualityInternal:(int)arg1 ;
-(id)connectionForQuality:(int)arg1 ;
-(void)updateBytesForSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 bytes:(int)arg2 isMediaData:(BOOL)arg3 isOutgoing:(BOOL)arg4 ;
-(id<VCConnectionProtocol>)connectionForDuplication;
-(void)updateTransmittedExcessiveBytes:(int)arg1 isMediaData:(BOOL)arg2 isIPv6:(BOOL)arg3 ;
-(void)updateReceivedExcessiveBytes:(int)arg1 isMediaData:(BOOL)arg2 isIPv6:(BOOL)arg3 ;
-(void)setLastPrimaryConnectionInUse:(id<VCConnectionProtocol>)arg1 ;
-(void)setReportingAgent:(opaqueRTCReportingRef)arg1 ;
-(BOOL)isInterfaceOnCellularForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(BOOL)arg2 ;
-(int)getConnectionTypeForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(BOOL)arg2 ;
-(int)getCellularTechForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(BOOL)arg2 ;
-(int)getCellularMTUForActiveConnectionWithQuality:(int)arg1 ;
-(BOOL)isConnectedOnIPv6ForActiveConnectionWithQuality:(int)arg1 ;
-(BOOL)isConnectedOnRelayForActiveConnectionWithQuality:(int)arg1 ;
-(void)updateTransmittedBytesForSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 bytesSent:(int)arg2 isMediaData:(BOOL)arg3 ;
-(void)updateReceivedBytesForSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 bytesReceived:(int)arg2 isMediaData:(BOOL)arg3 ;
-(tagVCSourceDestinationInfo*)createSourceDestinationInfoList;
-(BOOL)isLocalCellularInterfaceUsed;
-(int)relayServerProvider;
-(BOOL)isDuplicationEnabled;
-(int)preferredLocalInterfaceForDuplication;
-(void)setPreferredLocalInterfaceForDuplication:(int)arg1 ;
-(void)setConnectionForDuplication:(id<VCConnectionProtocol>)arg1 ;
-(int)mediaExcessiveCellularTxBytes;
-(int)mediaExcessiveCellularRxBytes;
-(int)signalingExcessiveCellularTxBytes;
-(int)signalingExcessiveCellularRxBytes;
-(int)removeConnection:(id)arg1 ;
-(int)addConnection:(id)arg1 ;
@end

