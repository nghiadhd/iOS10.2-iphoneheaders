/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSMutableSet, NSString, NSObject;

@interface PLSemaphore : NSObject {

	double _timeout;
	NSMutableSet* _interestedObjects;
	NSMutableSet* _pendingDoneObjects;
	NSString* _key;
	NSObject*<OS_dispatch_semaphore> _semaphore;

}

@property (retain) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
@property (assign) double timeout;                                          //@synthesize timeout=_timeout - In the implementation block
@property (retain) NSMutableSet * interestedObjects;                        //@synthesize interestedObjects=_interestedObjects - In the implementation block
@property (retain) NSMutableSet * pendingDoneObjects;                       //@synthesize pendingDoneObjects=_pendingDoneObjects - In the implementation block
@property (retain) NSString * key;                                          //@synthesize key=_key - In the implementation block
@property (readonly) BOOL isActive; 
+(id)sharedSemaphoreForKey:(id)arg1 ;
-(BOOL)isActive;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(double)timeout;
-(NSMutableSet *)pendingDoneObjects;
-(NSMutableSet *)interestedObjects;
-(void)basicWaitWithBlock:(/*^block*/id)arg1 ;
-(void)signalNonInterestByObject:(id)arg1 ;
-(void)setInterestedObjects:(NSMutableSet *)arg1 ;
-(void)setPendingDoneObjects:(NSMutableSet *)arg1 ;
-(void)signalStartListening;
-(void)waitWithBlock:(/*^block*/id)arg1 ;
-(void)signalInterestByObject:(id)arg1 ;
-(void)signalDoneByObject:(id)arg1 ;
-(void)waitWithBlockSync:(/*^block*/id)arg1 ;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(id)initWithKey:(id)arg1 ;
@end

