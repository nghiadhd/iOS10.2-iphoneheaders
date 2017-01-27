/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class TSgPTPClock, NSObject;

@interface TSgPTPManager : NSObject {

	unsigned _connection;
	TSgPTPClock* _systemDomain;
	NSObject*<OS_dispatch_queue> _systemDomainQueue;
	unsigned long long _systemDomainClockIdentifier;

}

@property (nonatomic,readonly) unsigned long long systemDomainClockIdentifier;              //@synthesize systemDomainClockIdentifier=_systemDomainClockIdentifier - In the implementation block
@property (nonatomic,retain,readonly) TSgPTPClock * systemDomain; 
+(id)gPTPManager;
+(id)diagnosticDescriptionForService:(unsigned)arg1 withIndent:(id)arg2 ;
+(id)sharedgPTPManager;
-(id)init;
-(void)dealloc;
-(unsigned long long)systemDomainClockIdentifier;
-(TSgPTPClock *)systemDomain;
-(BOOL)addDomain:(unsigned long long*)arg1 error:(id*)arg2 ;
-(BOOL)removeDomainWithIdentifier:(unsigned long long)arg1 error:(id*)arg2 ;
@end

