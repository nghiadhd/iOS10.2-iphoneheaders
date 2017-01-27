/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FudProgressWeights : NSObject {

	float prepareWeight;
	float applyWeight;
	float finishWeight;

}

@property (assign) float prepareWeight; 
@property (assign) float applyWeight; 
@property (assign) float finishWeight; 
-(id)description;
-(id)initWithPrepareWeight:(float)arg1 applyWeight:(float)arg2 finishWeight:(float)arg3 ;
-(double)calculateOverallProgressWithStepProgress:(double)arg1 step:(int)arg2 ;
-(float)prepareWeight;
-(void)setPrepareWeight:(float)arg1 ;
-(float)applyWeight;
-(void)setApplyWeight:(float)arg1 ;
-(float)finishWeight;
-(void)setFinishWeight:(float)arg1 ;
@end

