/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DATask <NSObject>
@optional
-(void)startModal;
-(void)requestCancelTaskWithReason:(int)arg1;
-(BOOL)shouldHoldPowerAssertion;
-(void)setTaskManager:(id)arg1;
-(BOOL)shouldForceNetworking;

@required
-(void)performTask;
-(void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2;
-(void)finishWithError:(id)arg1;

@end

