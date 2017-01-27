/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameKitServices/GameKitServices-Structs.h>
@interface GKConnection : NSObject

@property (assign) id eventDelegate; 
@property (assign,nonatomic) opaqueRTCReportingRef reportingAgent; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)externalAddressForCDXSelfConnectionData:(id)arg1 ;
+(id)externalAddressForSelfConnectionData:(id)arg1 ;
+(BOOL)isRelayEnabled;
-(void)connect;
-(void)setReportingAgent:(opaqueRTCReportingRef)arg1 ;
-(void)preRelease;
-(OpaqueGCKSessionRef)gckSession;
-(opaqueRTCReportingRef)reportingAgent;
-(void)setEventDelegate:(id)arg1 ;
-(id)eventDelegate;
-(unsigned)gckPID;
-(void)setParticipantID:(id)arg1 forPeerID:(id)arg2 ;
-(void)cancelConnectParticipant:(id)arg1 ;
-(id)networkStatisticsDictionaryForGCKStats:(void*)arg1 ;
-(id)initWithParticipantID:(id)arg1 ;
-(void)getLocalConnectionDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)getLocalConnectionDataForLocalGaming;
-(void)connectParticipantsWithConnectionData:(id)arg1 withSessionInfo:(id)arg2 ;
-(BOOL)convertPeerID:(id)arg1 toParticipantID:(id*)arg2 ;
-(BOOL)convertParticipantID:(id)arg1 toPeerID:(id*)arg2 ;
-(void)initiateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(BOOL)arg4 ;
-(void)updateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(BOOL)arg4 ;
-(id)networkStatistics;
@end

