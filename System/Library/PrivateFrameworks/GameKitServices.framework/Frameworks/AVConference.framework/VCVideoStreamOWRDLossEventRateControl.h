/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VCVideoStreamRateControlProtocol.h>

@class NSString;

@interface VCVideoStreamOWRDLossEventRateControl : NSObject <VCVideoStreamRateControlProtocol> {

	double _packetLossRate;
	double _roundTripTime;
	double _firstReceiveTime;
	double _shortAverageLag;
	double _longAverageLag;
	double _owrd;
	unsigned _firstSendTimestamp;
	unsigned _previousSendTimestamp;
	unsigned _previousTimestampDiff;
	int _sendTimestampWrappedAround;
	BOOL _lossEventBuffer[4];
	int _lossEventBufferIndex;
	double _lastLossEventTime;
	double _rampUpFrozenTime;
	double _rampUpFrozenDuration;
	double _rampDownOWRDThreshold;
	double _rampDownLossRateThreshold;
	double _rampDownLossEventBitrateThreshold;
	double _rampDownLossEventCountThreshold;
	double _rampUpNoLossEventDurationRatio;
	double _rampUpStatusRateLimitedThreshold;
	long long _rampUpStatus;
	int _state;
	double _rateControlTime;
	unsigned _targetBitrate;
	unsigned _averageReceivedBitrate;
	unsigned short _currentTierIndex;
	unsigned short _minTierIndex;
	unsigned short _maxTierIndex;
	double _rateControlInterval;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned targetBitrate;                //@synthesize targetBitrate=_targetBitrate - In the implementation block
@property (nonatomic,readonly) double owrd;                           //@synthesize owrd=_owrd - In the implementation block
@property (nonatomic,readonly) double nowrd; 
@property (nonatomic,readonly) double nowrdShort; 
@property (nonatomic,readonly) double nowrdAcc; 
@property (assign,nonatomic) double rateControlInterval;              //@synthesize rateControlInterval=_rateControlInterval - In the implementation block
-(id)init;
-(NSString *)description;
-(int)state;
-(id)className;
-(void)setMaxTierIndex:(unsigned short)arg1 minTierIndex:(unsigned short)arg2 ;
-(void)updatePacketLossRate:(double)arg1 time:(double)arg2 ;
-(BOOL)shouldRampDown;
-(unsigned short)rampDownTier;
-(void)stateChange:(int)arg1 ;
-(BOOL)shouldRampUp;
-(unsigned short)rampUpTier;
-(void)calculateOWRDWithTimestamp:(unsigned)arg1 sampleRate:(unsigned)arg2 time:(double)arg3 ;
-(void)stateExit;
-(void)stateEnter;
-(int)lossEventCount;
-(int)lossEventCountThresholdForBitrate:(unsigned)arg1 ;
-(void)resetLossEventBuffer;
-(void)doRateControlWithTime:(double)arg1 roundTripTime:(double)arg2 packetLossRate:(double)arg3 operatingTierIndex:(unsigned short)arg4 averageBitrate:(unsigned)arg5 ;
-(void)updateRTPReceiveWithTimestamp:(unsigned)arg1 sampleRate:(unsigned)arg2 time:(double)arg3 ;
-(void)printRateControlFullInfoWithLogDump:(void*)arg1 time:(double)arg2 videoStall:(BOOL)arg3 videoFrozenDuration:(double)arg4 averageTargetBitrate:(unsigned)arg5 ;
-(unsigned)targetBitrate;
-(double)owrd;
-(double)nowrd;
-(double)nowrdShort;
-(double)nowrdAcc;
-(double)rateControlInterval;
-(void)setRateControlInterval:(double)arg1 ;
@end

