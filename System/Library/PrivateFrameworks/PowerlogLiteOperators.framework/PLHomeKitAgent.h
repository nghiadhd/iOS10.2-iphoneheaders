/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLXPCListenerOperatorComposition, PLEntryNotificationOperatorComposition, PLTimer;

@interface PLHomeKitAgent : PLAgent {

	BOOL _enablelog;
	PLXPCListenerOperatorComposition* _HomeKitEvent;
	unsigned long long _numBTPushes;
	unsigned long long _numConnections;
	unsigned long long _numPrevBTPushes;
	unsigned long long _numPrevConnections;
	unsigned long long _numBTConnections;
	unsigned long long _numIPConnections;
	unsigned long long _numBonjour;
	unsigned long long _numIPEvents;
	unsigned long long _numIDSPushes;
	unsigned long long _numCloudPushes;
	unsigned long long _numBTWakeAdvt;
	unsigned long long _numBTWakes;
	double _lastapwake;
	PLEntryNotificationOperatorComposition* _sbcLevelChanged;
	PLEntryNotificationOperatorComposition* _deviceWake;
	PLTimer* _runTimeAggregatorTimer;
	unsigned long long _numaggregatelines;
	unsigned long long _numBTlines;

}

@property (retain) PLXPCListenerOperatorComposition * HomeKitEvent;                       //@synthesize HomeKitEvent=_HomeKitEvent - In the implementation block
@property (assign) unsigned long long numBTPushes;                                        //@synthesize numBTPushes=_numBTPushes - In the implementation block
@property (assign) unsigned long long numConnections;                                     //@synthesize numConnections=_numConnections - In the implementation block
@property (assign) unsigned long long numPrevBTPushes;                                    //@synthesize numPrevBTPushes=_numPrevBTPushes - In the implementation block
@property (assign) unsigned long long numPrevConnections;                                 //@synthesize numPrevConnections=_numPrevConnections - In the implementation block
@property (assign) unsigned long long numBTConnections;                                   //@synthesize numBTConnections=_numBTConnections - In the implementation block
@property (assign) unsigned long long numIPConnections;                                   //@synthesize numIPConnections=_numIPConnections - In the implementation block
@property (assign) unsigned long long numBonjour;                                         //@synthesize numBonjour=_numBonjour - In the implementation block
@property (assign) unsigned long long numIPEvents;                                        //@synthesize numIPEvents=_numIPEvents - In the implementation block
@property (assign) unsigned long long numIDSPushes;                                       //@synthesize numIDSPushes=_numIDSPushes - In the implementation block
@property (assign) unsigned long long numCloudPushes;                                     //@synthesize numCloudPushes=_numCloudPushes - In the implementation block
@property (assign) unsigned long long numBTWakeAdvt;                                      //@synthesize numBTWakeAdvt=_numBTWakeAdvt - In the implementation block
@property (assign) unsigned long long numBTWakes;                                         //@synthesize numBTWakes=_numBTWakes - In the implementation block
@property (assign) double lastapwake;                                                     //@synthesize lastapwake=_lastapwake - In the implementation block
@property (assign) BOOL enablelog;                                                        //@synthesize enablelog=_enablelog - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * sbcLevelChanged;              //@synthesize sbcLevelChanged=_sbcLevelChanged - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * deviceWake;                   //@synthesize deviceWake=_deviceWake - In the implementation block
@property (retain) PLTimer * runTimeAggregatorTimer;                                      //@synthesize runTimeAggregatorTimer=_runTimeAggregatorTimer - In the implementation block
@property (assign) unsigned long long numaggregatelines;                                  //@synthesize numaggregatelines=_numaggregatelines - In the implementation block
@property (assign) unsigned long long numBTlines;                                         //@synthesize numBTlines=_numBTlines - In the implementation block
+(void)load;
+(id)entryEventPointDefinitionHomeKitAdvt;
+(id)entryEventPointDefinitionHomeKitSummary;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventNoneDefinitions;
+(id)defaults;
-(id)init;
-(void)log;
-(void)setNumConnections:(unsigned long long)arg1 ;
-(unsigned long long)numConnections;
-(void)initOperatorDependancies;
-(PLTimer *)runTimeAggregatorTimer;
-(void)setRunTimeAggregatorTimer:(PLTimer *)arg1 ;
-(void)logEventPointHomeKit:(id)arg1 ;
-(void)setHomeKitEvent:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)writeAggregateCounters:(id)arg1 ;
-(void)setDeviceWake:(PLEntryNotificationOperatorComposition *)arg1 ;
-(PLXPCListenerOperatorComposition *)HomeKitEvent;
-(unsigned long long)numBTPushes;
-(void)setNumBTPushes:(unsigned long long)arg1 ;
-(unsigned long long)numPrevBTPushes;
-(void)setNumPrevBTPushes:(unsigned long long)arg1 ;
-(unsigned long long)numPrevConnections;
-(void)setNumPrevConnections:(unsigned long long)arg1 ;
-(unsigned long long)numBTConnections;
-(void)setNumBTConnections:(unsigned long long)arg1 ;
-(unsigned long long)numIPConnections;
-(void)setNumIPConnections:(unsigned long long)arg1 ;
-(unsigned long long)numBonjour;
-(void)setNumBonjour:(unsigned long long)arg1 ;
-(unsigned long long)numIPEvents;
-(void)setNumIPEvents:(unsigned long long)arg1 ;
-(unsigned long long)numIDSPushes;
-(void)setNumIDSPushes:(unsigned long long)arg1 ;
-(unsigned long long)numCloudPushes;
-(void)setNumCloudPushes:(unsigned long long)arg1 ;
-(unsigned long long)numBTWakeAdvt;
-(void)setNumBTWakeAdvt:(unsigned long long)arg1 ;
-(unsigned long long)numBTWakes;
-(void)setNumBTWakes:(unsigned long long)arg1 ;
-(double)lastapwake;
-(void)setLastapwake:(double)arg1 ;
-(BOOL)enablelog;
-(void)setEnablelog:(BOOL)arg1 ;
-(PLEntryNotificationOperatorComposition *)sbcLevelChanged;
-(void)setSbcLevelChanged:(PLEntryNotificationOperatorComposition *)arg1 ;
-(PLEntryNotificationOperatorComposition *)deviceWake;
-(unsigned long long)numaggregatelines;
-(void)setNumaggregatelines:(unsigned long long)arg1 ;
-(unsigned long long)numBTlines;
-(void)setNumBTlines:(unsigned long long)arg1 ;
@end

