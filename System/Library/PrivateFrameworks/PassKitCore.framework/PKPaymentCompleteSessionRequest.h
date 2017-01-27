/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentRewrapRequestBase.h>

@class PKPaymentMerchantSession;

@interface PKPaymentCompleteSessionRequest : PKPaymentRewrapRequestBase {

	PKPaymentMerchantSession* _merchantSession;

}

@property (nonatomic,retain) PKPaymentMerchantSession * merchantSession;              //@synthesize merchantSession=_merchantSession - In the implementation block
-(PKPaymentMerchantSession *)merchantSession;
-(void)setMerchantSession:(PKPaymentMerchantSession *)arg1 ;
-(id)endpointName;
-(id)bodyDictionaryWithDeviceData:(id)arg1 ;
-(id)initWithWrappedPayment:(id)arg1 paymentPass:(id)arg2 merchantSession:(id)arg3 ;
@end

