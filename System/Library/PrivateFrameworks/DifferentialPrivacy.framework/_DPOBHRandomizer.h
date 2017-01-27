/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DPStringRandomizer.h>

@class _DPBiasedCoin, _DPRandomBitPositionGenerator;

@interface _DPOBHRandomizer : NSObject <_DPStringRandomizer> {

	unsigned long long _m;
	double _epsilon;
	_DPBiasedCoin* _epsilonCoin;
	_DPRandomBitPositionGenerator* _bitPositionGenerator;
	double _cEpsilon;

}

@property (m,nonatomic,readonly) unsigned long long m;                                            //@synthesize m=_m - In the implementation block
@property (nonatomic,readonly) double epsilon;                                                    //@synthesize epsilon=_epsilon - In the implementation block
@property (nonatomic,readonly) _DPBiasedCoin * epsilonCoin;                                       //@synthesize epsilonCoin=_epsilonCoin - In the implementation block
@property (nonatomic,readonly) _DPRandomBitPositionGenerator * bitPositionGenerator;              //@synthesize bitPositionGenerator=_bitPositionGenerator - In the implementation block
@property (nonatomic,readonly) double cEpsilon;                                                   //@synthesize cEpsilon=_cEpsilon - In the implementation block
+(id)obhRandomizerWithDimensionality:(unsigned long long)arg1 epsilon:(double)arg2 ;
-(id)init;
-(id)description;
-(double)cEpsilon;
-(id)initWithDimensionality:(unsigned long long)arg1 epsilon:(double)arg2 ;
-(BOOL)getBitValueAtIndex:(unsigned long long)arg1 forString:(id)arg2 ;
-(id)randomizedBitForString:(id)arg1 ;
-(id)randomizeStrings:(id)arg1 forKey:(id)arg2 ;
-(id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3 ;
-(unsigned long long)m;
-(_DPBiasedCoin *)epsilonCoin;
-(_DPRandomBitPositionGenerator *)bitPositionGenerator;
-(double)epsilon;
@end

