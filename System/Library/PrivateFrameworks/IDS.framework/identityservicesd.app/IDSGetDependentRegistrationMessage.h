/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <FTServices/FTIDSMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface IDSGetDependentRegistrationMessage : FTIDSMessage <NSCopying> {

	NSString* _service;
	NSArray* _responseRegistrations;

}

@property (copy) NSString * service;                           //@synthesize service=_service - In the implementation block
@property (copy) NSArray * responseRegistrations;              //@synthesize responseRegistrations=_responseRegistrations - In the implementation block
-(NSArray *)responseRegistrations;
-(void)setResponseRegistrations:(NSArray *)arg1 ;
-(id)messageBody;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)wantsHTTPHeaders;
-(BOOL)wantsBinaryPush;
-(BOOL)wantsCompressedBody;
-(BOOL)wantsBagKey;
-(int)maxTimeoutRetries;
-(BOOL)wantsExtraTimeoutRetry;
-(double)anisetteHeadersTimeout;
-(id)additionalMessageHeaders;
-(long long)command;
-(id)requiredKeys;
-(long long)responseCommand;
-(void)handleResponseDictionary:(id)arg1 ;
-(id)bagKey;
-(void)setService:(NSString *)arg1 ;
-(NSString *)service;
@end

