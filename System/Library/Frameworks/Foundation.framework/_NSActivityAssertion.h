/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_voucher, NSObject;
@class NSString, NSObject, BKSProcessAssertion;

@interface _NSActivityAssertion : NSObject {

	long long _ended;
	unsigned long long _options;
	NSString* _reason;
	unsigned _systemSleepAssertionID;
	NSObject*<OS_voucher> _voucher;
	NSObject*<OS_voucher> _previousVoucher;
	unsigned char _adoptPreviousVoucher;
	id<NSObject> _xpcBoost;
	BKSProcessAssertion* _processAssertion;
	/*^block*/id _expirationHandler;

}
+(void)_performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
+(void)_performExpiringActivityWithReason:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(id)_expiringAssertionManagementQueue;
+(id)_expiringActivities;
+(id)_expirationHandlerExecutionQueue;
+(void)_expireAllActivies;
+(id)_expiringTaskExecutionQueue;
+(void)_dumpExpiringActivitives;
-(void)_reactivate;
-(id)_initWithActivityOptions:(unsigned long long)arg1 reason:(id)arg2 expirationHandler:(/*^block*/id)arg3 ;
-(void)_end;
-(void)_fireExpirationHandler;
-(void)dealloc;
-(id)debugDescription;
@end

