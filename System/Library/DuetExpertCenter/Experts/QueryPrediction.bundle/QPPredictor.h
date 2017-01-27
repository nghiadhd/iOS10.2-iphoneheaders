/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DuetExpertCenter/Experts/QueryPrediction.bundle/QueryPrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, QPParameters, QPPredictorLogger, _QPQueryFilter;

@interface QPPredictor : NSObject {

	NSArray* _sources;
	QPParameters* _parameters;
	QPPredictorLogger* _logger;
	_QPQueryFilter* _queryFilter;

}
+(id)predictorWithSources:(id)arg1 andParameters:(id)arg2 ;
-(id)initWithSources:(id)arg1 andParameters:(id)arg2 ;
-(id)_combinePredictionResults:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)predictWithLimit:(unsigned long long)arg1 forApp:(BOOL*)arg2 ;
@end

