/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDecimalNumber, NSDate, NSDictionary;

@interface PKSelectedItemActionItem : NSObject <NSSecureCoding> {

	BOOL _serviceProviderDataRequiresLocalBalance;
	NSString* _identifier;
	NSString* _title;
	NSDecimalNumber* _amount;
	NSString* _currency;
	NSDate* _newExpirationDate;
	NSDictionary* _serviceProviderData;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * amount;                             //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy,readonly) NSString * currency;                                  //@synthesize currency=_currency - In the implementation block
@property (nonatomic,copy,readonly) NSDate * newExpirationDate;                           //@synthesize newExpirationDate=_newExpirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * serviceProviderData;                   //@synthesize serviceProviderData=_serviceProviderData - In the implementation block
@property (nonatomic,readonly) BOOL serviceProviderDataRequiresLocalBalance;              //@synthesize serviceProviderDataRequiresLocalBalance=_serviceProviderDataRequiresLocalBalance - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(NSDecimalNumber *)amount;
-(void)_processLocalizableStrings:(/*^block*/id)arg1 ;
-(BOOL)serviceProviderDataRequiresLocalBalance;
-(NSDictionary *)serviceProviderData;
-(NSDate *)newExpirationDate;
-(NSString *)currency;
-(id)serviceProviderDataWithCurrentLocalBalance:(id)arg1 ;
@end

