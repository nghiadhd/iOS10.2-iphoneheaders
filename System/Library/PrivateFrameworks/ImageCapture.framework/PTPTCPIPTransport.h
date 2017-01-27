/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageCapture/ImageCapture-Structs.h>
#import <ImageCapture/PTPTransport.h>

@class NSString, PTPTCPIPConnection, NSMutableData;

@interface PTPTCPIPTransport : PTPTransport {

	CFSocketRef _socket;
	NSString* _hostName;
	unsigned short _hostPort;
	NSString* _hostGUID;
	NSString* _targetName;
	NSString* _targetAddress;
	unsigned _targetPort;
	NSString* _targetGUID;
	id _connectionRequestResponse;
	unsigned _connectionNumber;
	PTPTCPIPConnection* _tempConnection;
	NSMutableData* _tempData;
	PTPTCPIPConnection* _cdConnection;
	PTPTCPIPConnection* _eventConnection;
	NSMutableData* _cdData;
	NSMutableData* _eventData;
	BOOL _delegateNeedsData;

}
-(id)targetName;
-(void)dealloc;
-(id)description;
-(BOOL)sendResponse:(id)arg1 ;
-(BOOL)sendEvent:(id)arg1 ;
-(void)stop;
-(BOOL)connected;
-(void)sendData:(id)arg1 ;
-(void)handleData:(id)arg1 from:(id)arg2 ;
-(void)didCloseConnection:(id)arg1 withError:(SCD_Struct_PT2)arg2 ;
-(BOOL)startInitiator;
-(int)waitForCallbackThreadConditionSignalWithTimeoutForConnection:(long long)arg1 ;
-(void)releaseConnections;
-(int)waitForCallbackThreadConditionSignalWithTimeout:(long long)arg1 ;
-(void)sendDataPackets:(id)arg1 ;
-(id)initWithHostPort:(unsigned)arg1 hostName:(id)arg2 hostGUID:(id)arg3 bonjourServiceType:(id)arg4 bonjourTXTRecords:(id)arg5 delegate:(id)arg6 ;
-(id)initForAcceptedSocketWithDelegate:(id)arg1 andHostGUID:(id)arg2 andHostName:(id)arg3 ;
-(id)initWithTargetAddress:(id)arg1 targetPort:(unsigned)arg2 targetGUID:(id)arg3 targetName:(id)arg4 hostGUID:(id)arg5 hostName:(id)arg6 delegate:(id)arg7 ;
-(id)targetAddress;
-(unsigned)targetPort;
-(id)targetGUID;
-(BOOL)startResponder;
-(BOOL)waitForConnectionWithTimeout:(double)arg1 ;
-(BOOL)sendStartData:(id)arg1 ;
-(BOOL)sendCancel:(id)arg1 ;
-(id)sendRequest:(id)arg1 receiveData:(id)arg2 timeout:(unsigned)arg3 ;
-(id)sendRequest:(id)arg1 sendData:(id)arg2 timeout:(unsigned)arg3 ;
-(void)cancelTransaction:(id)arg1 ;
-(void)acceptConnectionFromSocket:(int)arg1 ;
@end

