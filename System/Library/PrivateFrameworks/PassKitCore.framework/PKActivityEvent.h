/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDecimalNumber, NSDate;

@interface PKActivityEvent : NSObject {

	BOOL _unread;
	NSString* _identifier;
	NSString* _name;
	NSString* _email;
	NSString* _phoneNumber;
	NSString* _summary;
	NSDecimalNumber* _amount;
	NSString* _currencyCode;
	NSDate* _date;

}

@property (nonatomic,copy,readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * email;                      //@synthesize email=_email - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneNumber;                //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * summary;                    //@synthesize summary=_summary - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * amount;              //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy,readonly) NSString * currencyCode;               //@synthesize currencyCode=_currencyCode - In the implementation block
@property (getter=isUnread,nonatomic,readonly) BOOL unread;                //@synthesize unread=_unread - In the implementation block
@property (nonatomic,readonly) NSDate * date;                              //@synthesize date=_date - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(NSDate *)date;
-(NSString *)phoneNumber;
-(NSDecimalNumber *)amount;
-(NSString *)currencyCode;
-(NSString *)summary;
-(BOOL)isEqualToActivityEvent:(id)arg1 ;
-(NSString *)email;
-(BOOL)isUnread;
@end
