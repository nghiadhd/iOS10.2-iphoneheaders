/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class NSString;

@interface SAMLNameId : SAMLBaseElement

@property (nonatomic,readonly) NSString * nameQualifier; 
@property (nonatomic,readonly) NSString * spNameQualifier; 
@property (nonatomic,readonly) NSString * format; 
@property (nonatomic,readonly) NSString * spProvidedId; 
+(id)createElement:(id*)arg1 ;
-(NSString *)format;
-(NSString *)nameQualifier;
-(NSString *)spNameQualifier;
-(NSString *)spProvidedId;
@end

