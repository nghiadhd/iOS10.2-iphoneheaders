/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/XMLWrapperDoc.h>

@class SAMLResponseElement, NSDictionary, NSString;

@interface SAMLResponse : XMLWrapperDoc {

	SAMLResponseElement* _responseElement;

}

@property (nonatomic,retain) SAMLResponseElement * responseElement;              //@synthesize responseElement=_responseElement - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributes; 
@property (nonatomic,readonly) NSString * selectedProvider; 
-(id)statusCodes;
-(id)userName;
-(NSDictionary *)attributes;
-(id)subject;
-(id)assertions;
-(BOOL)isValid:(id*)arg1 ;
-(long long)expectedAction;
-(id)authenticationTTL;
-(BOOL)hasValidAuthentication;
-(id)primaryStatusCode;
-(BOOL)assertionMeetsConditions:(id*)arg1 ;
-(id)initWithData:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(SAMLResponseElement *)responseElement;
-(id)attributeValuesForName:(id)arg1 ;
-(NSString *)selectedProvider;
-(id)authenticationSessionId;
-(id)authorizationStatusForResource:(id)arg1 ;
-(void)setResponseElement:(SAMLResponseElement *)arg1 ;
@end

