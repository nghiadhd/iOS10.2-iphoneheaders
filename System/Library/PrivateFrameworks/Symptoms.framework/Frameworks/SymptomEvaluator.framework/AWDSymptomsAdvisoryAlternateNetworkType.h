/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDSymptomsAdvisoryAlternateNetworkType : PBCodable <NSCopying> {

	unsigned long long _adviceHeldForSecs;
	unsigned long long _timestamp;
	int _advice;
	int _bailOutOf;
	unsigned _comingFromState;
	int _egressMobilityCode;
	int _egressTrigger;
	unsigned _egressTriggerMultiplier;
	int _egressTriggerOn;
	unsigned _egressTriggerPercentagex100;
	NSMutableArray* _egressTriggerSignatures;
	int _ingressMobilityCode;
	int _ingressTrigger;
	unsigned _ingressTriggerMultiplier;
	int _ingressTriggerOn;
	unsigned _ingressTriggerPercentagex100;
	NSMutableArray* _ingressTriggerSignatures;
	unsigned _transitionsSuppressedByMobility;
	BOOL _kernelProbingActivated;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasAdvice; 
@property (assign,nonatomic) int advice;                                             //@synthesize advice=_advice - In the implementation block
@property (assign,nonatomic) BOOL hasBailOutOf; 
@property (assign,nonatomic) int bailOutOf;                                          //@synthesize bailOutOf=_bailOutOf - In the implementation block
@property (assign,nonatomic) BOOL hasAdviceHeldForSecs; 
@property (assign,nonatomic) unsigned long long adviceHeldForSecs;                   //@synthesize adviceHeldForSecs=_adviceHeldForSecs - In the implementation block
@property (assign,nonatomic) BOOL hasKernelProbingActivated; 
@property (assign,nonatomic) BOOL kernelProbingActivated;                            //@synthesize kernelProbingActivated=_kernelProbingActivated - In the implementation block
@property (assign,nonatomic) BOOL hasIngressTrigger; 
@property (assign,nonatomic) int ingressTrigger;                                     //@synthesize ingressTrigger=_ingressTrigger - In the implementation block
@property (assign,nonatomic) BOOL hasIngressTriggerOn; 
@property (assign,nonatomic) int ingressTriggerOn;                                   //@synthesize ingressTriggerOn=_ingressTriggerOn - In the implementation block
@property (assign,nonatomic) BOOL hasIngressTriggerMultiplier; 
@property (assign,nonatomic) unsigned ingressTriggerMultiplier;                      //@synthesize ingressTriggerMultiplier=_ingressTriggerMultiplier - In the implementation block
@property (assign,nonatomic) BOOL hasIngressTriggerPercentagex100; 
@property (assign,nonatomic) unsigned ingressTriggerPercentagex100;                  //@synthesize ingressTriggerPercentagex100=_ingressTriggerPercentagex100 - In the implementation block
@property (assign,nonatomic) BOOL hasEgressTrigger; 
@property (assign,nonatomic) int egressTrigger;                                      //@synthesize egressTrigger=_egressTrigger - In the implementation block
@property (assign,nonatomic) BOOL hasEgressTriggerOn; 
@property (assign,nonatomic) int egressTriggerOn;                                    //@synthesize egressTriggerOn=_egressTriggerOn - In the implementation block
@property (assign,nonatomic) BOOL hasEgressTriggerMultiplier; 
@property (assign,nonatomic) unsigned egressTriggerMultiplier;                       //@synthesize egressTriggerMultiplier=_egressTriggerMultiplier - In the implementation block
@property (assign,nonatomic) BOOL hasEgressTriggerPercentagex100; 
@property (assign,nonatomic) unsigned egressTriggerPercentagex100;                   //@synthesize egressTriggerPercentagex100=_egressTriggerPercentagex100 - In the implementation block
@property (nonatomic,retain) NSMutableArray * ingressTriggerSignatures;              //@synthesize ingressTriggerSignatures=_ingressTriggerSignatures - In the implementation block
@property (nonatomic,retain) NSMutableArray * egressTriggerSignatures;               //@synthesize egressTriggerSignatures=_egressTriggerSignatures - In the implementation block
@property (assign,nonatomic) BOOL hasComingFromState; 
@property (assign,nonatomic) unsigned comingFromState;                               //@synthesize comingFromState=_comingFromState - In the implementation block
@property (assign,nonatomic) BOOL hasIngressMobilityCode; 
@property (assign,nonatomic) int ingressMobilityCode;                                //@synthesize ingressMobilityCode=_ingressMobilityCode - In the implementation block
@property (assign,nonatomic) BOOL hasEgressMobilityCode; 
@property (assign,nonatomic) int egressMobilityCode;                                 //@synthesize egressMobilityCode=_egressMobilityCode - In the implementation block
@property (assign,nonatomic) BOOL hasTransitionsSuppressedByMobility; 
@property (assign,nonatomic) unsigned transitionsSuppressedByMobility;               //@synthesize transitionsSuppressedByMobility=_transitionsSuppressedByMobility - In the implementation block
+(Class)ingressTriggerSignatureType;
+(Class)egressTriggerSignatureType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)addIngressTriggerSignature:(id)arg1 ;
-(void)addEgressTriggerSignature:(id)arg1 ;
-(unsigned long long)ingressTriggerSignaturesCount;
-(void)clearIngressTriggerSignatures;
-(id)ingressTriggerSignatureAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)egressTriggerSignaturesCount;
-(void)clearEgressTriggerSignatures;
-(id)egressTriggerSignatureAtIndex:(unsigned long long)arg1 ;
-(int)advice;
-(void)setAdvice:(int)arg1 ;
-(void)setHasAdvice:(BOOL)arg1 ;
-(BOOL)hasAdvice;
-(id)adviceAsString:(int)arg1 ;
-(int)StringAsAdvice:(id)arg1 ;
-(int)bailOutOf;
-(void)setBailOutOf:(int)arg1 ;
-(void)setHasBailOutOf:(BOOL)arg1 ;
-(BOOL)hasBailOutOf;
-(id)bailOutOfAsString:(int)arg1 ;
-(int)StringAsBailOutOf:(id)arg1 ;
-(void)setAdviceHeldForSecs:(unsigned long long)arg1 ;
-(void)setHasAdviceHeldForSecs:(BOOL)arg1 ;
-(BOOL)hasAdviceHeldForSecs;
-(void)setKernelProbingActivated:(BOOL)arg1 ;
-(void)setHasKernelProbingActivated:(BOOL)arg1 ;
-(BOOL)hasKernelProbingActivated;
-(int)ingressTrigger;
-(void)setIngressTrigger:(int)arg1 ;
-(void)setHasIngressTrigger:(BOOL)arg1 ;
-(BOOL)hasIngressTrigger;
-(id)ingressTriggerAsString:(int)arg1 ;
-(int)StringAsIngressTrigger:(id)arg1 ;
-(int)ingressTriggerOn;
-(void)setIngressTriggerOn:(int)arg1 ;
-(void)setHasIngressTriggerOn:(BOOL)arg1 ;
-(BOOL)hasIngressTriggerOn;
-(id)ingressTriggerOnAsString:(int)arg1 ;
-(int)StringAsIngressTriggerOn:(id)arg1 ;
-(void)setIngressTriggerMultiplier:(unsigned)arg1 ;
-(void)setHasIngressTriggerMultiplier:(BOOL)arg1 ;
-(BOOL)hasIngressTriggerMultiplier;
-(void)setIngressTriggerPercentagex100:(unsigned)arg1 ;
-(void)setHasIngressTriggerPercentagex100:(BOOL)arg1 ;
-(BOOL)hasIngressTriggerPercentagex100;
-(int)egressTrigger;
-(void)setEgressTrigger:(int)arg1 ;
-(void)setHasEgressTrigger:(BOOL)arg1 ;
-(BOOL)hasEgressTrigger;
-(id)egressTriggerAsString:(int)arg1 ;
-(int)StringAsEgressTrigger:(id)arg1 ;
-(int)egressTriggerOn;
-(void)setEgressTriggerOn:(int)arg1 ;
-(void)setHasEgressTriggerOn:(BOOL)arg1 ;
-(BOOL)hasEgressTriggerOn;
-(id)egressTriggerOnAsString:(int)arg1 ;
-(int)StringAsEgressTriggerOn:(id)arg1 ;
-(void)setEgressTriggerMultiplier:(unsigned)arg1 ;
-(void)setHasEgressTriggerMultiplier:(BOOL)arg1 ;
-(BOOL)hasEgressTriggerMultiplier;
-(void)setEgressTriggerPercentagex100:(unsigned)arg1 ;
-(void)setHasEgressTriggerPercentagex100:(BOOL)arg1 ;
-(BOOL)hasEgressTriggerPercentagex100;
-(void)setComingFromState:(unsigned)arg1 ;
-(void)setHasComingFromState:(BOOL)arg1 ;
-(BOOL)hasComingFromState;
-(int)ingressMobilityCode;
-(void)setIngressMobilityCode:(int)arg1 ;
-(void)setHasIngressMobilityCode:(BOOL)arg1 ;
-(BOOL)hasIngressMobilityCode;
-(id)ingressMobilityCodeAsString:(int)arg1 ;
-(int)StringAsIngressMobilityCode:(id)arg1 ;
-(int)egressMobilityCode;
-(void)setEgressMobilityCode:(int)arg1 ;
-(void)setHasEgressMobilityCode:(BOOL)arg1 ;
-(BOOL)hasEgressMobilityCode;
-(id)egressMobilityCodeAsString:(int)arg1 ;
-(int)StringAsEgressMobilityCode:(id)arg1 ;
-(void)setTransitionsSuppressedByMobility:(unsigned)arg1 ;
-(void)setHasTransitionsSuppressedByMobility:(BOOL)arg1 ;
-(BOOL)hasTransitionsSuppressedByMobility;
-(unsigned long long)adviceHeldForSecs;
-(BOOL)kernelProbingActivated;
-(unsigned)ingressTriggerMultiplier;
-(unsigned)ingressTriggerPercentagex100;
-(unsigned)egressTriggerMultiplier;
-(unsigned)egressTriggerPercentagex100;
-(NSMutableArray *)ingressTriggerSignatures;
-(void)setIngressTriggerSignatures:(NSMutableArray *)arg1 ;
-(NSMutableArray *)egressTriggerSignatures;
-(void)setEgressTriggerSignatures:(NSMutableArray *)arg1 ;
-(unsigned)comingFromState;
-(unsigned)transitionsSuppressedByMobility;
@end

