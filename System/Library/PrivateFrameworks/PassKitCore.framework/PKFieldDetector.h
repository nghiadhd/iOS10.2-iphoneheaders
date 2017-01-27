/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFFieldDetectSessionDelegate.h>
#import <libobjc.A.dylib/NFLoyaltyAndPaymentSessionDelegate.h>

@protocol NFSession, OS_dispatch_queue, OS_dispatch_source;
@class NFFieldDetectSession, NFLoyaltyAndPaymentSession, NSObject, NSHashTable, PKFieldProperties, NSString;

@interface PKFieldDetector : NSObject <NFFieldDetectSessionDelegate, NFLoyaltyAndPaymentSessionDelegate> {

	NFFieldDetectSession* _fieldDetectSession;
	NFLoyaltyAndPaymentSession* _valueAddedServiceLookupSession;
	NSObject*<NFSession> _valueAddedServiceLookupSessionHandle;
	NSHashTable* _observers;
	PKFieldProperties* _fieldProperties;
	BOOL _fieldPresent;
	unsigned long long _fieldDetectSessionRetryCount;
	NSObject*<OS_dispatch_queue> _fieldDetectorSerialQueue;
	NSObject*<OS_dispatch_queue> _observersConcurrentQueue;
	NSObject*<OS_dispatch_queue> _replyQueue;
	NSObject*<OS_dispatch_source> _valueAddedServiceLookupTimer;
	unsigned long long _valueAddedServiceLookupSynchronizer;
	unsigned long long _valueAddedServiceLookupTechnology;
	unsigned long long _valueAddedServiceLookupMode;

}

@property (nonatomic,__weak,readonly) PKFieldProperties * fieldProperties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)loyaltyAndPaymentSession:(id)arg1 didPerformValueAddedServiceTransactions:(id)arg2 ;
-(PKFieldProperties *)fieldProperties;
-(void)_startFieldDetectSession;
-(void)_endValueAddedLookupSession;
-(void)_startValueAddedServiceLookupSessionForTechnology:(unsigned long long)arg1 andValueAddedServiceMode:(unsigned long long)arg2 ;
-(void)_restartFieldDetectSession;
-(void)_endValueAddedServiceLookupSessionAndNotifyWithMerchantIdentifiers:(id)arg1 ;
-(void)_endValueAddedServiceLookupSessionAndNotifyWithError:(id)arg1 ;
-(void)_endValueAddedServiceSessionAndNotifyWithFieldProperties:(id)arg1 ;
-(void)fieldDetectSession:(id)arg1 didDetectField:(BOOL)arg2 ;
-(void)fieldDetectSession:(id)arg1 didDetectTechnology:(id)arg2 ;
-(void)fieldDetectSessionDidEndUnexpectedly:(id)arg1 ;
-(void)valueAddedServiceSession:(id)arg1 didError:(id)arg2 ;
-(void)setPersistentFieldDetectionEnabled:(BOOL)arg1 ;
@end

