/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VSJSRequest.h>
@class NSString, NSArray, NSDictionary;


@protocol VSJSRequest <JSExport>
@property (nonatomic,copy,readonly) NSString * requestType; 
@property (nonatomic,copy,readonly) NSString * requestBody; 
@property (nonatomic,copy,readonly) NSString * currentAuthentication; 
@property (nonatomic,copy,readonly) NSString * appleVerificationToken; 
@property (nonatomic,copy,readonly) NSString * requestorVerificationToken; 
@property (nonatomic,copy,readonly) NSArray * attributeNames; 
@property (nonatomic,copy,readonly) NSDictionary * requestorInfo; 
@required
-(NSString *)requestBody;
-(NSString *)requestType;
-(NSArray *)attributeNames;
-(NSString *)requestorVerificationToken;
-(NSString *)currentAuthentication;
-(NSString *)appleVerificationToken;
-(NSDictionary *)requestorInfo;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary;

@interface VSJSRequest : IKJSObject <VSJSRequest, NSCopying> {

	NSString* _requestType;
	NSString* _requestBody;
	NSString* _currentAuthentication;
	NSString* _appleVerificationToken;
	NSString* _requestorVerificationToken;
	NSArray* _attributeNames;
	NSDictionary* _requestorInfo;

}

@property (nonatomic,copy) NSString * requestType;                             //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,copy) NSString * requestBody;                             //@synthesize requestBody=_requestBody - In the implementation block
@property (nonatomic,copy) NSString * currentAuthentication;                   //@synthesize currentAuthentication=_currentAuthentication - In the implementation block
@property (nonatomic,copy) NSString * appleVerificationToken;                  //@synthesize appleVerificationToken=_appleVerificationToken - In the implementation block
@property (nonatomic,copy) NSString * requestorVerificationToken;              //@synthesize requestorVerificationToken=_requestorVerificationToken - In the implementation block
@property (nonatomic,copy) NSArray * attributeNames;                           //@synthesize attributeNames=_attributeNames - In the implementation block
@property (nonatomic,copy) NSDictionary * requestorInfo;                       //@synthesize requestorInfo=_requestorInfo - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRequestType:(NSString *)arg1 ;
-(NSString *)requestBody;
-(NSString *)requestType;
-(NSArray *)attributeNames;
-(void)setAttributeNames:(NSArray *)arg1 ;
-(NSString *)requestorVerificationToken;
-(void)setRequestBody:(NSString *)arg1 ;
-(void)setCurrentAuthentication:(NSString *)arg1 ;
-(void)setRequestorVerificationToken:(NSString *)arg1 ;
-(void)setRequestorInfo:(NSDictionary *)arg1 ;
-(void)setAppleVerificationToken:(NSString *)arg1 ;
-(NSString *)currentAuthentication;
-(NSString *)appleVerificationToken;
-(NSDictionary *)requestorInfo;
@end

