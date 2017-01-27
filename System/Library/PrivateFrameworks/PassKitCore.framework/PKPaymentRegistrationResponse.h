/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSString, NSNumber, NSDictionary, NSURL, NSArray;

@interface PKPaymentRegistrationResponse : PKPaymentWebServiceResponse {

	NSString* _deviceIdentifier;
	NSNumber* _cardsOnFile;
	NSNumber* _maxCards;
	NSString* _primaryRegion;
	NSDictionary* _regions;
	NSString* _environmentName;
	NSURL* _brokerURL;
	NSURL* _trustedServiceManagerURL;
	NSURL* _paymentServicesURL;
	NSArray* _certificates;

}

@property (nonatomic,copy) NSString * deviceIdentifier;                    //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * cardsOnFile;                         //@synthesize cardsOnFile=_cardsOnFile - In the implementation block
@property (nonatomic,copy) NSNumber * maxCards;                            //@synthesize maxCards=_maxCards - In the implementation block
@property (nonatomic,copy) NSDictionary * regions;                         //@synthesize regions=_regions - In the implementation block
@property (nonatomic,copy) NSString * environmentName;                     //@synthesize environmentName=_environmentName - In the implementation block
@property (nonatomic,copy) NSURL * brokerURL;                              //@synthesize brokerURL=_brokerURL - In the implementation block
@property (nonatomic,copy) NSURL * trustedServiceManagerURL;               //@synthesize trustedServiceManagerURL=_trustedServiceManagerURL - In the implementation block
@property (nonatomic,copy) NSURL * paymentServicesURL;                     //@synthesize paymentServicesURL=_paymentServicesURL - In the implementation block
@property (nonatomic,copy) NSArray * certificates;                         //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,copy,readonly) NSString * primaryRegion;              //@synthesize primaryRegion=_primaryRegion - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSDictionary *)regions;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(void)setRegions:(NSDictionary *)arg1 ;
-(void)setCertificates:(NSArray *)arg1 ;
-(NSURL *)paymentServicesURL;
-(NSURL *)trustedServiceManagerURL;
-(void)setBrokerURL:(NSURL *)arg1 ;
-(void)setTrustedServiceManagerURL:(NSURL *)arg1 ;
-(void)setPaymentServicesURL:(NSURL *)arg1 ;
-(NSString *)primaryRegion;
-(NSURL *)brokerURL;
-(NSNumber *)maxCards;
-(NSString *)environmentName;
-(NSNumber *)cardsOnFile;
-(void)setCardsOnFile:(NSNumber *)arg1 ;
-(void)setMaxCards:(NSNumber *)arg1 ;
-(void)setEnvironmentName:(NSString *)arg1 ;
-(NSArray *)certificates;
@end

