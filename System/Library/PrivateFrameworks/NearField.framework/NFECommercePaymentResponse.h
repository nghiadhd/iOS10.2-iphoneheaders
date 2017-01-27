/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSDictionary;

@interface NFECommercePaymentResponse : NSObject <NSSecureCoding> {

	NSString* _transactionIdentifier;
	NSData* _transactionData;
	NSDictionary* _certs;
	NSData* _confirmationBlobHash;
	NSData* _confirmationBlobSignature;

}

@property (nonatomic,readonly) NSString * transactionIdentifier;                //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * transactionData;                        //@synthesize transactionData=_transactionData - In the implementation block
@property (nonatomic,readonly) NSDictionary * certs;                            //@synthesize certs=_certs - In the implementation block
@property (nonatomic,readonly) NSData * confirmationBlobHash;                   //@synthesize confirmationBlobHash=_confirmationBlobHash - In the implementation block
@property (nonatomic,readonly) NSData * confirmationBlobSignature;              //@synthesize confirmationBlobSignature=_confirmationBlobSignature - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(NSData *)transactionData;
-(NSDictionary *)certs;
-(NSString *)transactionIdentifier;
-(void)setCerts:(NSDictionary *)arg1 ;
-(void)setConfirmationBlobHash:(id)arg1 withSignature:(id)arg2 ;
-(NSData *)confirmationBlobHash;
-(NSData *)confirmationBlobSignature;
@end

