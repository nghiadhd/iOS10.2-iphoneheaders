/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/MechanismBase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LABackoffCounter, OS_dispatch_queue;
@class NSObject;

@interface MechanismContext : NSObject {

	id<LABackoffCounter> _backoffCounter;
	NSObject*<OS_dispatch_queue> _serverQueue;

}

@property (nonatomic,retain) id<LABackoffCounter> backoffCounter;                   //@synthesize backoffCounter=_backoffCounter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serverQueue;              //@synthesize serverQueue=_serverQueue - In the implementation block
+(id)sharedInstance;
-(NSObject*<OS_dispatch_queue>)serverQueue;
-(void)setServerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setBackoffCounter:(id<LABackoffCounter>)arg1 ;
-(id<LABackoffCounter>)backoffCounter;
@end

