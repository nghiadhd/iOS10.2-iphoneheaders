/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface BLTSectionInfoSyncAlertingSectionState : NSObject {

	unsigned long long _state;
	/*^block*/id _clientCompletion;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (assign,nonatomic) unsigned long long state;                              //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id clientCompletion;                                     //@synthesize clientCompletion=_clientCompletion - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(id)clientCompletion;
-(void)setClientCompletion:(id)arg1 ;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
@end

