/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/log/liblog_companionsync.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <liblog_companionsync.dylib/liblog_companionsync.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYLogEngineState, NSString, SYLogSessionState, SYLogDeviceState, NSMutableArray, NSDictionary;

@interface SYLogServiceState : PBCodable <NSCopying> {

	SYLogEngineState* _engine;
	int _enqueuedSyncType;
	NSString* _name;
	NSString* _peerGenerationID;
	NSString* _peerID;
	int _serviceType;
	SYLogSessionState* _session;
	SYLogDeviceState* _targetedDevice;
	NSMutableArray* _transportOptions;
	BOOL _sessionQueueRunning;
	SCD_Struct_SY3 _has;

}

@property (nonatomic,retain) NSDictionary * cocoaTransportOptions; 
@property (nonatomic,retain) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasEngine; 
@property (nonatomic,retain) SYLogEngineState * engine;                         //@synthesize engine=_engine - In the implementation block
@property (nonatomic,readonly) BOOL hasSession; 
@property (nonatomic,retain) SYLogSessionState * session;                       //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) BOOL sessionQueueRunning;                          //@synthesize sessionQueueRunning=_sessionQueueRunning - In the implementation block
@property (nonatomic,readonly) BOOL hasTargetedDevice; 
@property (nonatomic,retain) SYLogDeviceState * targetedDevice;                 //@synthesize targetedDevice=_targetedDevice - In the implementation block
@property (assign,nonatomic) int enqueuedSyncType;                              //@synthesize enqueuedSyncType=_enqueuedSyncType - In the implementation block
@property (nonatomic,retain) NSMutableArray * transportOptions;                 //@synthesize transportOptions=_transportOptions - In the implementation block
@property (nonatomic,readonly) BOOL hasPeerID; 
@property (nonatomic,retain) NSString * peerID;                                 //@synthesize peerID=_peerID - In the implementation block
@property (nonatomic,readonly) BOOL hasPeerGenerationID; 
@property (nonatomic,retain) NSString * peerGenerationID;                       //@synthesize peerGenerationID=_peerGenerationID - In the implementation block
@property (assign,nonatomic) BOOL hasServiceType; 
@property (assign,nonatomic) int serviceType;                                   //@synthesize serviceType=_serviceType - In the implementation block
+(Class)transportOptionsType;
-(NSString *)peerID;
-(void)setPeerID:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSession:(SYLogSessionState *)arg1 ;
-(int)serviceType;
-(void)setServiceType:(int)arg1 ;
-(void)setHasServiceType:(BOOL)arg1 ;
-(BOOL)hasServiceType;
-(id)serviceTypeAsString:(int)arg1 ;
-(int)StringAsServiceType:(id)arg1 ;
-(void)setEngine:(SYLogEngineState *)arg1 ;
-(SYLogSessionState *)session;
-(void)addTransportOptions:(id)arg1 ;
-(void)setTargetedDevice:(SYLogDeviceState *)arg1 ;
-(unsigned long long)transportOptionsCount;
-(void)clearTransportOptions;
-(id)transportOptionsAtIndex:(unsigned long long)arg1 ;
-(void)setPeerGenerationID:(NSString *)arg1 ;
-(BOOL)hasEngine;
-(BOOL)hasTargetedDevice;
-(id)enqueuedSyncTypeAsString:(int)arg1 ;
-(int)StringAsEnqueuedSyncType:(id)arg1 ;
-(BOOL)hasPeerID;
-(BOOL)hasPeerGenerationID;
-(BOOL)sessionQueueRunning;
-(void)setSessionQueueRunning:(BOOL)arg1 ;
-(SYLogDeviceState *)targetedDevice;
-(int)enqueuedSyncType;
-(void)setEnqueuedSyncType:(int)arg1 ;
-(NSMutableArray *)transportOptions;
-(void)setTransportOptions:(NSMutableArray *)arg1 ;
-(NSString *)peerGenerationID;
-(void)setCocoaTransportOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)cocoaTransportOptions;
-(SYLogEngineState *)engine;
-(BOOL)hasSession;
@end

