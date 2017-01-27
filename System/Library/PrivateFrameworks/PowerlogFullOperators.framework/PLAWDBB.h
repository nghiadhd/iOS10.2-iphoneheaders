/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogFullOperators/PLAWDAuxMetrics.h>

@class PLEntryNotificationOperatorComposition, NSDate, NSMutableArray, LTEPoint, NSLock;

@interface PLAWDBB : PLAWDAuxMetrics {

	short _telActivityState;
	unsigned _upBytes;
	unsigned _downBytes;
	unsigned _upBytesLTE;
	unsigned _downBytesLTE;
	int _currQuality;
	int _newQuality;
	PLEntryNotificationOperatorComposition* _bbProtocolRailCallback;
	PLEntryNotificationOperatorComposition* _bbEventCallback;
	PLEntryNotificationOperatorComposition* _accountingGroupEventCallback;
	PLEntryNotificationOperatorComposition* _iceStatsEventCallback;
	PLEntryNotificationOperatorComposition* _connectedPowerRailCallback;
	NSDate* _startTimeAppBB;
	NSDate* _startTimeBBLqm;
	NSDate* _startLTECall;
	NSDate* _endLTECall;
	NSMutableArray* _lteCallArray;
	NSMutableArray* _unhandledRFLTEEntries;
	PLEntryNotificationOperatorComposition* _bbLqmCellularActiveCallback;
	PLEntryNotificationOperatorComposition* _bbLqmCumulativeNetworkCallback;
	PLEntryNotificationOperatorComposition* _bbTelephonyActivityCallback;
	PLEntryNotificationOperatorComposition* _bbRfLTECallback;
	LTEPoint* _point;
	LTEPoint* _currThreshold;
	NSLock* _lock;

}

@property (retain) PLEntryNotificationOperatorComposition * bbProtocolRailCallback;                      //@synthesize bbProtocolRailCallback=_bbProtocolRailCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * bbEventCallback;                             //@synthesize bbEventCallback=_bbEventCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * accountingGroupEventCallback;                //@synthesize accountingGroupEventCallback=_accountingGroupEventCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * iceStatsEventCallback;                       //@synthesize iceStatsEventCallback=_iceStatsEventCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * connectedPowerRailCallback;                  //@synthesize connectedPowerRailCallback=_connectedPowerRailCallback - In the implementation block
@property (retain) NSDate * startTimeAppBB;                                                              //@synthesize startTimeAppBB=_startTimeAppBB - In the implementation block
@property (retain) NSDate * startTimeBBLqm;                                                              //@synthesize startTimeBBLqm=_startTimeBBLqm - In the implementation block
@property (assign) unsigned upBytes;                                                                     //@synthesize upBytes=_upBytes - In the implementation block
@property (assign) unsigned downBytes;                                                                   //@synthesize downBytes=_downBytes - In the implementation block
@property (assign) unsigned upBytesLTE;                                                                  //@synthesize upBytesLTE=_upBytesLTE - In the implementation block
@property (assign) unsigned downBytesLTE;                                                                //@synthesize downBytesLTE=_downBytesLTE - In the implementation block
@property (retain) NSDate * startLTECall;                                                                //@synthesize startLTECall=_startLTECall - In the implementation block
@property (retain) NSDate * endLTECall;                                                                  //@synthesize endLTECall=_endLTECall - In the implementation block
@property (retain) NSMutableArray * lteCallArray;                                                        //@synthesize lteCallArray=_lteCallArray - In the implementation block
@property (retain) NSMutableArray * unhandledRFLTEEntries;                                               //@synthesize unhandledRFLTEEntries=_unhandledRFLTEEntries - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * bbLqmCellularActiveCallback;                 //@synthesize bbLqmCellularActiveCallback=_bbLqmCellularActiveCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * bbLqmCumulativeNetworkCallback;              //@synthesize bbLqmCumulativeNetworkCallback=_bbLqmCumulativeNetworkCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * bbTelephonyActivityCallback;                 //@synthesize bbTelephonyActivityCallback=_bbTelephonyActivityCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * bbRfLTECallback;                             //@synthesize bbRfLTECallback=_bbRfLTECallback - In the implementation block
@property (assign) int currQuality;                                                                      //@synthesize currQuality=_currQuality - In the implementation block
@property (assign) int newQuality;                                                                       //@synthesize newQuality=_newQuality - In the implementation block
@property (assign) short telActivityState;                                                               //@synthesize telActivityState=_telActivityState - In the implementation block
@property (retain) LTEPoint * point;                                                                     //@synthesize point=_point - In the implementation block
@property (retain) LTEPoint * currThreshold;                                                             //@synthesize currThreshold=_currThreshold - In the implementation block
@property (retain) NSLock * lock;                                                                        //@synthesize lock=_lock - In the implementation block
+(id)entryAggregateDefinitions;
+(id)getSharedObjWithOperator:(id)arg1 ;
+(id)entryAggregateDefinitionAwdBBQlm;
+(id)entryAggregateDefinitionAwdBBQlmCounter;
+(id)entryAggregateDefinitionAwdConnectedPower;
+(id)entryAggregateDefinitionAwdVolte;
-(NSLock *)lock;
-(LTEPoint *)point;
-(void)setPoint:(LTEPoint *)arg1 ;
-(void)setLock:(NSLock *)arg1 ;
-(void)startMetricCollection:(id)arg1 ;
-(void)stopMetricCollection:(id)arg1 ;
-(BOOL)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2 ;
-(void)startAppRrc;
-(void)startAppBB;
-(void)startConnectedPower;
-(void)startBBLqm;
-(void)startBBPower;
-(void)stopAppRrc;
-(void)stopAppBB;
-(void)stopConnectedPower;
-(void)stopBBLqm;
-(void)submitAppRrc:(id)arg1 withAwdConn:(id)arg2 ;
-(void)submitAppBB:(id)arg1 withAwdConn:(id)arg2 ;
-(BOOL)submitConnectedPower:(id)arg1 withAwdConn:(id)arg2 ;
-(void)submitBBLqm:(id)arg1 withAwdConn:(id)arg2 ;
-(void)resetAllBBLqmTables;
-(void)setStartTimeBBLqm:(NSDate *)arg1 ;
-(void)setUpBytes:(unsigned)arg1 ;
-(void)setDownBytes:(unsigned)arg1 ;
-(void)setUpBytesLTE:(unsigned)arg1 ;
-(void)setDownBytesLTE:(unsigned)arg1 ;
-(void)handleBBLqmCellularActiveCallback:(id)arg1 ;
-(void)setBbLqmCellularActiveCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)handleBBLqmCumulativeNetworkCallback:(id)arg1 ;
-(void)setBbLqmCumulativeNetworkCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)updateCurrLqmState;
-(PLEntryNotificationOperatorComposition *)bbLqmCellularActiveCallback;
-(PLEntryNotificationOperatorComposition *)bbLqmCumulativeNetworkCallback;
-(int)convertQualityWithLinkQuality:(double)arg1 ;
-(void)setNewQuality:(int)arg1 ;
-(int)newQuality;
-(void)setCurrQuality:(int)arg1 ;
-(void)updateLQMTableWithQuality:(int)arg1 withTime:(double)arg2 withRX:(double)arg3 withTX:(double)arg4 ;
-(double)getIntervalSinceLastUpdateWithEntryName:(id)arg1 ;
-(NSDate *)startTimeBBLqm;
-(void)finalizeTableWithEntry:(id)arg1 ;
-(int)currQuality;
-(short)telActivityState;
-(void)setTelActivityState:(short)arg1 ;
-(unsigned)upBytesLTE;
-(unsigned)downBytesLTE;
-(void)finalizePeriodWithUpBytes:(unsigned)arg1 withDownBytes:(unsigned)arg2 ;
-(NSMutableArray *)unhandledRFLTEEntries;
-(void)setEndLTECall:(NSDate *)arg1 ;
-(NSMutableArray *)lteCallArray;
-(NSDate *)endLTECall;
-(void)handleRfLTEOffline;
-(void)setStartLTECall:(NSDate *)arg1 ;
-(NSDate *)startLTECall;
-(unsigned)upBytes;
-(unsigned)downBytes;
-(void)resetBBLqmTable;
-(void)resetBBLqmCounterTable;
-(void)setLteCallArray:(NSMutableArray *)arg1 ;
-(void)setUnhandledRFLTEEntries:(NSMutableArray *)arg1 ;
-(void)resetBBVoLTETable;
-(void)handleTelephonyActiveCallback:(id)arg1 ;
-(void)setBbTelephonyActivityCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)handleRfLTE:(id)arg1 ;
-(void)setBbRfLTECallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)bbLTEWriteAggregatedTableWithRFLTEEntry:(id)arg1 withPoint:(id)arg2 ;
-(LTEPoint *)currThreshold;
-(void)setStartTimeAppBB:(NSDate *)arg1 ;
-(void)resetConnectedPowerTable;
-(void)handleBBConnectedPowerRail:(id)arg1 ;
-(void)setConnectedPowerRailCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)handleBBRailCallbackWrapper:(id)arg1 ;
-(void)setBbProtocolRailCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)setAccountingGroupEventCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)setIceStatsEventCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)stopBBPower;
-(void)handleBBRailCallbackBBProtocol:(id)arg1 ;
-(void)handleBBRailCallbackLTESleep:(id)arg1 ;
-(void)handleBBRailCallbackTxLte:(id)arg1 ;
-(void)handleBBRailCallbackTxCdma:(id)arg1 ;
-(void)handleBBRailCallbackTxEvdo:(id)arg1 ;
-(void)handleBBRailCallbackTxCdma2K:(id)arg1 ;
-(void)handleBBRailCallbackTxGsm:(id)arg1 ;
-(void)handleBBRailCallbackTxUtran:(id)arg1 ;
-(void)handleBBRailCallbackBBICE:(id)arg1 ;
-(void)handleBBRailCallbackBBTx:(id)arg1 ;
-(void)handleBBRailCallbackOos:(id)arg1 ;
-(void)handleAcountGroupCallback:(id)arg1 ;
-(void)handleIceStatsCallback:(id)arg1 ;
-(PLEntryNotificationOperatorComposition *)bbProtocolRailCallback;
-(PLEntryNotificationOperatorComposition *)bbEventCallback;
-(void)setBbEventCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(PLEntryNotificationOperatorComposition *)accountingGroupEventCallback;
-(PLEntryNotificationOperatorComposition *)iceStatsEventCallback;
-(PLEntryNotificationOperatorComposition *)connectedPowerRailCallback;
-(NSDate *)startTimeAppBB;
-(PLEntryNotificationOperatorComposition *)bbTelephonyActivityCallback;
-(PLEntryNotificationOperatorComposition *)bbRfLTECallback;
-(void)setCurrThreshold:(LTEPoint *)arg1 ;
@end

