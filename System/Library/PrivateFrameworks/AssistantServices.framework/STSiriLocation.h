/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFTranscriptionType.h>

@class NSURL, NSString, NSData;

@interface STSiriLocation : NSObject <AFTranscriptionType> {

	NSURL* _addressBookID;
	NSString* _addressLabel;
	NSString* _contactName;
	NSData* _geoResult;
	long long _resultType;

}

@property (nonatomic,copy) NSURL * addressBookID;                   //@synthesize addressBookID=_addressBookID - In the implementation block
@property (nonatomic,copy) NSString * addressLabel;                 //@synthesize addressLabel=_addressLabel - In the implementation block
@property (nonatomic,copy) NSString * contactName;                  //@synthesize contactName=_contactName - In the implementation block
@property (nonatomic,copy) NSData * geoResult;                      //@synthesize geoResult=_geoResult - In the implementation block
@property (assign,nonatomic) long long resultType;                  //@synthesize resultType=_resultType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(long long)resultType;
-(NSString *)contactName;
-(NSString *)addressLabel;
-(void)setAddressLabel:(NSString *)arg1 ;
-(void)setContactName:(NSString *)arg1 ;
-(NSURL *)addressBookID;
-(void)setAddressBookID:(NSURL *)arg1 ;
-(NSData *)geoResult;
-(void)setGeoResult:(NSData *)arg1 ;
-(void)setResultType:(long long)arg1 ;
@end

