/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentRewrapResponseBase.h>

@class NSString;

@interface PKPaymentRedeemSessionResponse : PKPaymentRewrapResponseBase {

	NSString* _transactionIdentifier;

}

@property (nonatomic,copy) NSString * transactionIdentifier;              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
-(id)initWithData:(id)arg1 ;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(NSString *)transactionIdentifier;
@end

