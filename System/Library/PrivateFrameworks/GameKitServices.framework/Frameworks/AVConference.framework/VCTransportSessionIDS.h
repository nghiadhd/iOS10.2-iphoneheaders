/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCTransportSession.h>
#import <libobjc.A.dylib/VCConnectionManagerDelegate.h>

@class NSString, IDSDatagramChannel;

@interface VCTransportSessionIDS : VCTransportSession <VCConnectionManagerDelegate> {

	int _socket;
	NSString* _destination;
	IDSDatagramChannel* _datagramChannel;
	unsigned _datagramChannelToken;

}

@property (assign,nonatomic) int socket;                            //@synthesize socket=_socket - In the implementation block
@property (nonatomic,copy) NSString * destination;                  //@synthesize destination=_destination - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)stop;
-(void)start;
-(NSString *)destination;
-(void)setDestination:(NSString *)arg1 ;
-(id)initWithCallID:(unsigned)arg1 ;
-(void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2 ;
-(void)connectionCallback:(id)arg1 isInitialConnection:(BOOL)arg2 ;
-(void)handleLinkConnectedWithInfo:(id)arg1 ;
-(void)handleLinkDisconnectedWithInfo:(id)arg1 ;
-(void)handleDefaultLinkUpdatedWithInfo:(id)arg1 ;
-(void)handlePreConnectionDataReceived:(id)arg1 ;
-(void)handleRATChanged:(id)arg1 ;
-(void)handleCellularMTUChanged:(id)arg1 ;
-(void)handleChannelInfoReport:(id)arg1 ;
-(void)setPiggybackBlobPreference;
-(void)setConnectionSetupTime;
-(void)setQuickRelayServerProvider:(int)arg1 ;
-(void)setDefaultLink:(id)arg1 ;
-(void)didEnableDuplication:(BOOL)arg1 activeConnection:(id)arg2 ;
-(void)discardConnection:(id)arg1 ;
-(BOOL)getConnectionSetupData:(id*)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(void)setConnectionSetupPiggybackBlob:(id)arg1 ;
-(id)connectionSetupPiggybackBlob;
-(int)getSignalStrength:(int*)arg1 signalRaw:(int*)arg2 signalGrade:(int*)arg3 ;
-(int)flushBasebandQueueForConnection:(id)arg1 payloadInfoList:(id)arg2 ;
-(int)updateQualityIndicator:(int)arg1 isIPv6:(BOOL)arg2 ;
-(int)registerBasebandNotificationsForConnection:(id)arg1 ;
-(void)deregisterBasebandNotifications;
-(void)setSocket:(int)arg1 ;
-(int)socket;
@end

