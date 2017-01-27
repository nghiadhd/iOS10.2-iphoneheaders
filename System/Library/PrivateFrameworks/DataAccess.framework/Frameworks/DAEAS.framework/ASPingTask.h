/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class NSSet;

@interface ASPingTask : ASTask {

	NSSet* _folders;
	NSSet* _oldFolders;
	int _seconds;
	int _oldSeconds;

}
-(void)loadRequest:(id)arg1 ;
-(double)timeoutInterval;
-(long long)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(id)requestBody;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(BOOL)shouldStallAfterConnectionLost;
-(void)requestCancelTaskWithReason:(int)arg1 ;
-(BOOL)shouldHoldPowerAssertion;
-(int)heartbeat;
-(id)initWithHeartbeat:(int)arg1 folders:(id)arg2 oldHeartbeat:(int)arg3 oldFolders:(id)arg4 ;
-(int)interfaceBinding;
-(BOOL)shouldHandleServerErrorRetryLater;
-(BOOL)shouldReportTimeInNetwork;
-(id)folders;
-(void)finishWithError:(id)arg1 ;
@end

