/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <IDSFoundation/IDSBaseMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface IDSValidationCertificateMessage : IDSBaseMessage <NSCopying> {

	NSData* _responseCertificateData;
	NSData* _pushToken;

}

@property (nonatomic,copy) NSData * responseCertificateData;              //@synthesize responseCertificateData=_responseCertificateData - In the implementation block
@property (nonatomic,copy) NSData * pushToken;                            //@synthesize pushToken=_pushToken - In the implementation block
-(NSData *)responseCertificateData;
-(void)setResponseCertificateData:(NSData *)arg1 ;
-(id)messageBody;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)wantsHTTPHeaders;
-(BOOL)wantsBinaryPush;
-(BOOL)wantsCompressedBody;
-(BOOL)wantsHTTPGet;
-(BOOL)wantsBagKey;
-(double)anisetteHeadersTimeout;
-(id)additionalMessageHeaders;
-(long long)command;
-(id)requiredKeys;
-(long long)responseCommand;
-(void)handleResponseDictionary:(id)arg1 ;
-(void)setPushToken:(NSData *)arg1 ;
-(id)bagKey;
-(NSData *)pushToken;
@end

