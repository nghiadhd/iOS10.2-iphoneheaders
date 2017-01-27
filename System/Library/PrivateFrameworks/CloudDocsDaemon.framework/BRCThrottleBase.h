/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BRCThrottleBase : NSObject {

	NSString* _name;
	unsigned _initialRetryCount;
	unsigned _finalRetryCount;
	unsigned _maximumElementCount;
	long long _minimumNsecsBetweenRetries;
	long long _maximumNsecsBetweenRetries;
	long long _nsecsBeforeForgettingCounter;

}

@property (nonatomic,readonly) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long nsecsBeforeForgettingCounter;              //@synthesize nsecsBeforeForgettingCounter=_nsecsBeforeForgettingCounter - In the implementation block
-(NSString *)name;
-(long long)nsecsToNextRetry:(long long)arg1 retryCount:(unsigned*)arg2 now:(long long)arg3 ;
-(long long)nsecsBeforeForgettingCounter;
-(id)initWithName:(id)arg1 andParameters:(id)arg2 ;
-(long long)retryBackoff:(unsigned)arg1 ;
-(BOOL)isBlocking;
@end

