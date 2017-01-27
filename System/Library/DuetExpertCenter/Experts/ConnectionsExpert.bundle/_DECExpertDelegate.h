/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DuetExpertCenter/Experts/ConnectionsExpert.bundle/ConnectionsExpert
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DECExpertDelegate <NSObject>
@optional
-(void)expert:(id)arg1 prewarmPredictionForCategory:(unsigned long long)arg2 consumer:(unsigned long long)arg3;
-(id)expert:(id)arg1 predictionForCategory:(unsigned long long)arg2 consumer:(unsigned long long)arg3 limit:(unsigned long long)arg4;
-(id)expert:(id)arg1 predictionForCategory:(unsigned long long)arg2 criteria:(id)arg3 consumer:(unsigned long long)arg4 limit:(unsigned long long)arg5;
-(void)expert:(id)arg1 receiveFeedback:(id)arg2 category:(unsigned long long)arg3 consumer:(unsigned long long)arg4;
-(void)trainExpert:(id)arg1;
-(id)saveModelForExpert:(id)arg1 byteLimit:(unsigned long long)arg2;
-(void)expert:(id)arg1 restoreModel:(id)arg2;
-(void)expert:(id)arg1 receiveUserAction:(id)arg2;
-(void)expert:(id)arg1 receiveAppWidgetFeedback:(id)arg2 consumerType:(unsigned long long)arg3;
-(void)expert:(id)arg1 receiveZkwSpotlightFeedback:(id)arg2 consumerType:(unsigned long long)arg3;

@end

